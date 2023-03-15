#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    currTask = Problem(TestFunc, dTF, d2TF, -1.0, 1.0, 0.0, 0.0);
    ui->graphF->addGraph();
    ui->graphF->graph(0)->setPen(QPen(Qt::green));
    ui->graphF->addGraph();

    ui->graphdF->addGraph();
    ui->graphdF->graph(0)->setPen(QPen(Qt::green));
    ui->graphdF->addGraph();

    ui->graphddF->addGraph();
    ui->graphddF->graph(0)->setPen(QPen(Qt::green));
    ui->graphddF->addGraph();

    replotGraphs();

    ui->tableCoef->setColumnCount(6);
    ui->tableCoef->setHorizontalHeaderLabels(QStringList() << "x[i-1]" << "x[i]" << "a[i]" << "b[i]" << "c[i]" << "d[i]");
    ui->tableCoef->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableData->setColumnCount(7);
    ui->tableData->setHorizontalHeaderLabels(QStringList() << "x[j]" << "F[j]" << "S[j]" << "F[j]-S[j]" << "F'[j]" << "S'[j]" << "F'[j]-S'[j]");
    ui->tableData->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_PushApproximate_clicked()
{
    int n = ui->lineEditSplitNum->text().toInt();
    if (n > 1000) replotGraphs(2*n);

    Solver Sol(n, currTask);
    Spline S = Sol.getSpline();
    QVector<double> x, s, ds, d2s, f, df, d2f;
    double xi = currTask.a;
    double step = (currTask.b - currTask.a) / (2*n);
    double err = 0.0, err1 = 0.0, err2 =0.0;
    double errX = 0.0, errX1 = 0.0, errX2 = 0.0;
    while (xi <= currTask.b) {
        x.push_back(xi);
        s.push_back(S(xi));
        ds.push_back(S.d(xi));
        d2s.push_back(S.d2(xi));
        f.push_back(currTask.f(xi));
        df.push_back(currTask.df(xi));
        d2f.push_back(currTask.d2f(xi));

        double tmp = std::abs(f.back() - s.back());
        if (tmp > err)
        {
            err = tmp;
            errX = xi;
        }
        tmp = std::abs(df.back() - ds.back());
        if (tmp > err1)
        {
            err1 = tmp;
            errX1 = xi;
        }
        tmp = std::abs(d2f.back()-d2s.back());
        if (tmp > err2)
        {
            err2 = tmp;
            errX2 = xi;
        }

        xi += step;
    }


    ui->graphF->graph(1)->setData(x, s);
    ui->graphF->graph(1)->rescaleAxes(true);
    ui->graphF->replot();

    ui->graphdF->graph(1)->setData(x, ds);
    ui->graphdF->graph(1)->rescaleAxes(true);
    ui->graphdF->replot();

    ui->graphddF->graph(1)->setData(x, d2s);
    ui->graphddF->graph(1)->rescaleAxes(true);
    ui->graphddF->replot();

    ui->tableCoef->setRowCount(n);
    for (int i = 0; i < n; i++) {
        ui->tableCoef->setItem(i, 0, new QTableWidgetItem(QString::number(S.grid[i])));
        ui->tableCoef->setItem(i, 1, new QTableWidgetItem(QString::number(S.grid[i+1])));
        ui->tableCoef->setItem(i, 2, new QTableWidgetItem(QString::number(S.A[i])));
        ui->tableCoef->setItem(i, 3, new QTableWidgetItem(QString::number(S.B[i])));
        ui->tableCoef->setItem(i, 4, new QTableWidgetItem(QString::number(S.C[i])));
        ui->tableCoef->setItem(i, 5, new QTableWidgetItem(QString::number(S.D[i])));
    }
    ui->tableData->setRowCount(2*n);
    for (int i = 0; i < 2*n; i++) {
        ui->tableData->setItem(i, 0, new QTableWidgetItem(QString::number(x[i])));
        ui->tableData->setItem(i, 1, new QTableWidgetItem(QString::number(f[i])));
        ui->tableData->setItem(i, 2, new QTableWidgetItem(QString::number(s[i])));
        ui->tableData->setItem(i, 3, new QTableWidgetItem(QString::number(f[i]-s[i])));
        ui->tableData->setItem(i, 4, new QTableWidgetItem(QString::number(df[i])));
        ui->tableData->setItem(i, 5, new QTableWidgetItem(QString::number(ds[i])));
        ui->tableData->setItem(i, 6, new QTableWidgetItem(QString::number(df[i]-ds[i])));
    }

    QString ref = "Сетка сплайна: n=" + QString::number(n)
            + "\nКонтрольная сетка: N=" + QString::number(2*n)
            + "\nПогрешность сплайна на контрольной сетке:\nmax|Fj-Sj|=" + QString::number(err) + " при x=" + QString::number(errX)
            + "\nПогрешность производной на контрольной сетке:\nmax|F'j-S'j|=" + QString::number(err1) + " при x=" + QString::number(errX1)
            + "\nПогрешность второй производной на контрольной сетке:\nmax|F''j-S''j|=" + QString::number(err2) + " при x=" + QString::number(errX2);
    ui->reference->setText(ref);

}


void MainWindow::on_FuncList_currentRowChanged(int currentRow)
{
    switch (currentRow) {
    case 0:
        if(ui->RB_0->isChecked())
        {
            currTask = Problem(TestFunc, dTF, d2TF, -1.0, 1.0, 0.0, 0.0);
            WHTF = currentRow;
        } else {
            if(ui->RB_1->isChecked())
            {
               currTask = Problem(TestFuncCosX, dTFCosX, d2TFCosX, -1.0, 1.0, 0.0, 0.0);
               WHTF = currentRow + 10;
            } else{
                if(ui->RB_2->isChecked())
                {
                    currTask = Problem(TestFuncCos10X, dTFCos10X, d2TFCos10X, -1.0, 1.0, 0.0, 0.0);
                    WHTF=10*currentRow + 20;
                } else{
                     currTask = Problem(TestFuncCos100X, dTFCos100X, d2TFCos100X, -1.0, 1.0, 0.0, 0.0);
                     WHTF=10*currentRow+30;
                }
            }
        }
        break;
    case 1:
        if(ui->RB_0->isChecked())
        {
            currTask = Problem(MainFunc1, dF1, d2F1, 2.0, 4.0, 0.0, 0.0);
            WHTF=currentRow;
        } else {
            if(ui->RB_1->isChecked())
            {
                currTask = Problem(MainFunc1CosX, dF1CosX, d2F1CosX, 2.0, 4.0, 0.0, 0.0);
                WHTF=100*currentRow+1;
            } else{
                if(ui->RB_2->isChecked())
                {
                    currTask = Problem(MainFunc1Cos10X, dF1Cos10X, d2F1Cos10X, 2.0, 4.0, 0.0, 0.0);
                    WHTF=100*currentRow+2;
                } else{
                     currTask = Problem(MainFunc1Cos100X, dF1Cos100X, d2F1Cos100X, 2.0, 4.0, 0.0, 0.0);
                     WHTF=100*currentRow+3;
                }
            }
        }
        break;
    case 2:
        if(ui->RB_0->isChecked())
        {
            WHTF=currentRow;
            currTask = Problem(MainFunc2, dF2, d2F2, 0.0, 1.0, 0.0, 0.0);
        } else {
            if(ui->RB_1->isChecked())
            {
                WHTF=1000*currentRow+1;
                currTask = Problem(MainFunc2CosX, dF2CosX, d2F2CosX, 0.0, 1.0, 0.0, 0.0);
            } else{
                if(ui->RB_2->isChecked())
                {
                    WHTF=100*currentRow+2;
                    currTask = Problem(MainFunc2Cos10X, dF2Cos10X, d2F2Cos10X, 0.0, 1.0, 0.0, 0.0);
                } else{
                    WHTF=100*currentRow+3;
                     currTask = Problem(MainFunc2Cos100X, dF2Cos100X, d2F2Cos100X, 0.0, 1.0, 0.0, 0.0);
                }
            }
        }
        break;
    case 3:
        if(ui->RB_0->isChecked())
        {
            WHTF=currentRow;
            currTask = Problem(MainFunc3, dF3, d2F3, 0.0, 2.0, 0.0, 0.0);
        } else {
            if(ui->RB_1->isChecked())
            {
                WHTF=10000*currentRow+1;
                currTask = Problem(MainFunc3CosX, dF3CosX, d2F3CosX, 0.0, 2.0, 0.0, 0.0);
            } else{
                if(ui->RB_2->isChecked())
                {
                   WHTF=10000*currentRow+2;
                   currTask = Problem(MainFunc3Cos10X, dF3Cos10X, d2F3Cos10X, 0.0, 2.0, 0.0, 0.0);
                } else{
                    WHTF=10000*currentRow+3;
                     currTask = Problem(MainFunc3Cos100X, dF3Cos100X, d2F3Cos100X, 0.0, 2.0, 0.0, 0.0);
                }
            }
        }
        break;
    case 4:
        if(ui->RB_0->isChecked())
        {
            WHTF=currentRow;
            currTask = Problem(MainFunc4, dF4, d2F4, 0.2, 2.0, 0.0, 0.0);
        } else {
            if(ui->RB_1->isChecked())
            {
                WHTF=100000*currentRow+1;
                currTask = Problem(MainFunc4CosX, dF4CosX, d2F4CosX, 0.2, 2.0, 0.0, 0.0);
            } else{
                if(ui->RB_2->isChecked())
                {
                    WHTF=100000*currentRow+2;
                   currTask = Problem(MainFunc4Cos10X, dF4Cos10X, d2F4Cos10X, 0.2, 2.0, 0.0, 0.0);
                } else{
                    WHTF=100000*currentRow+3;
                     currTask = Problem(MainFunc4Cos100X, dF4Cos100X, d2F4Cos100X, 0.2, 2.0, 0.0, 0.0);
                }
            }
        }
        break;
    default:
        break;
    }

    ui->lineA->setText(QString::number(currTask.a));
    ui->lineB->setText(QString::number(currTask.b));
    ui->lineSa->setText(QString::number(currTask.mu1));
    ui->lineSb->setText(QString::number(currTask.mu2));
    replotGraphs();

}

void MainWindow::replotGraphs(int n)
{
    ui->graphF->graph(1)->data().data()->clear();
    ui->graphdF->graph(1)->data().data()->clear();
    ui->graphddF->graph(1)->data().data()->clear();
    QVector<double> x, f, df, d2f;
    double xi = currTask.a;
    double step = (currTask.b - currTask.a) / (n);

    while (xi <= currTask.b) {
        x.push_back(xi);
        f.push_back(currTask.f(xi));
        df.push_back(currTask.df(xi));
        d2f.push_back(currTask.d2f(xi));
        xi += step;
    }

    ui->graphF->graph(0)->setData(x, f);
    ui->graphF->graph(0)->rescaleAxes();
    ui->graphF->replot();

    ui->graphdF->graph(0)->setData(x, df);
    ui->graphdF->graph(0)->rescaleAxes();
    ui->graphdF->replot();

    ui->graphddF->graph(0)->setData(x, d2f);
    ui->graphddF->graph(0)->rescaleAxes();
    ui->graphddF->replot();
}

void MainWindow::on_lineA_textEdited(const QString &arg1)
{
    if(arg1.toDouble() != currTask.b)
    {
        currTask.a = arg1.toDouble();
        replotGraphs();
    }
}


void MainWindow::on_lineB_textEdited(const QString &arg1)
{
    if(arg1.toDouble() != currTask.a)
    {
        currTask.b = arg1.toDouble();
        replotGraphs();
    }
}


void MainWindow::on_lineSa_textEdited(const QString &arg1)
{
    ui->graphF->graph(1)->data().data()->clear();
    ui->graphdF->graph(1)->data().data()->clear();
    ui->graphddF->graph(1)->data().data()->clear();
    currTask.mu1 = arg1.toDouble();
}


void MainWindow::on_lineSb_textEdited(const QString &arg1)
{
    ui->graphF->graph(1)->data().data()->clear();
    ui->graphdF->graph(1)->data().data()->clear();
    ui->graphddF->graph(1)->data().data()->clear();
    currTask.mu2 = arg1.toDouble();
}


void MainWindow::on_pushButton_clicked()
{
    double globmax =0.0;
    double A;
    double B;
    A = ui->lineA->text().toDouble();
    B = ui->lineB->text().toDouble();
    std::tuple<double,double,int> test;
    if (WHTF == 0){
        QMessageBox::information(NULL,QObject::tr("ВНИМАНИЕ"),tr("Нельзя оценить необходимое количество разбиений для данной функции"));
    }
    if (WHTF == 1){
        test =  SearchGlobalMin(d4F1,A,B,1.5,0.000000001);
        globmax = 0.0 - std::get<0>(test);
        double EPS=0;
        EPS = ui->lineEdit->text().toDouble();


        double H;
        H = pow((EPS/fabs(globmax)),1.0/4.0);
        double N;
        N = (B-A)/H;

        char str[100];
        sprintf(str, "%f", N);

         QMessageBox::information(NULL,QObject::tr("Результат"),tr("Для того чтобы достичь заданной вами точности для выбранной вами функции необходимо использовать разбиения N = ") + QString::number(N));
    }
    if (WHTF == 2){
        test =  SearchGlobalMin(d4F2,A,B,1.5,0.000000001);
        globmax = 0.0 - std::get<0>(test);
        double EPS=0;
        EPS = ui->lineEdit->text().toDouble();


        double H;
        H = pow((EPS/fabs(globmax)),1.0/4.0);
        double N;
        N = (B-A)/H;

        char str[100];
        sprintf(str, "%f", N);

         QMessageBox::information(NULL,QObject::tr("Результат"),tr("Для того чтобы достичь заданной вами точности для выбранной вами функции необходимо использовать разбиения N = ") + QString::number(N));
    }
    if (WHTF == 3){

        test =  SearchGlobalMin(d4F3,A,B,2,0.00001);
        globmax = 0.0 - std::get<0>(test);
        double EPS=0;
        EPS = ui->lineEdit->text().toDouble();


        double H;
        H = pow((EPS/fabs(globmax)),1.0/4.0);
        double N;
        N = (B-A)/H;


        QMessageBox::information(NULL,QObject::tr("Результат"),tr("Для того чтобы достичь заданной вами точности для выбранной вами функции необходимо использовать разбиения N = ") + QString::number(N));
    }
    if (WHTF == 4){

        test =  SearchGlobalMin(d4F4,A,B,2,0.00001);
        globmax = 0.0 - std::get<0>(test);
        double EPS=0;
        EPS = ui->lineEdit->text().toDouble();


        double H;

        H = pow((EPS/fabs(globmax)),1.0/4.0);


        char str[100];

        double N;
        N = (B-A)/H;

        sprintf(str, "%f", N);
        //QMessageBox::information(NULL,QObject::tr("Результат"),tr(str));
        QMessageBox::information(NULL,QObject::tr("Результат"),tr("Для того чтобы достичь заданной вами точности для выбранной вами функции необходимо использовать разбиения N = ") + QString::number(N));

    }
    else if ((WHTF != 4)&&(WHTF != 3)&&(WHTF != 2)&&(WHTF != 1)){
        QMessageBox::information(NULL,QObject::tr("ВНИМАНИЕ"),tr("Для выбранных функций не предусмотрен функционал подбора числа разбиений в соответствии с выбранной точностью!"));
    }

   }

