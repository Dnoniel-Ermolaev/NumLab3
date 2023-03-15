#include "functions.h"

double TestFunc(double x) {
    if (x >= -1.0 && x <= 0.0)
        return x * x * x + 3.0 * x * x;
    else if (x >= 0.0 && x <= 1.0)
        return -x * x * x + 3.0 * x * x;
    return 0.0;
}

double MainFunc4(double x) {
    return log(x + 1.0) / (x + 1.0);
}

double MainFunc3(double x) {
    return sin(x + 1.0) / (x + 1.0);
}

double MainFunc2(double x) {
    return pow(1.0 + x * x, 1.0 / 3.0);
}

double MainFunc1(double x) {
    return sqrt(x * x - 1.0) / x;
}

double dTF(double x)
{
    if (x >= -1.0 && x <= 0.0)
        return 3.0*x*x + 3.0 * 2.0 * x;
    else if (x >= 0.0 && x <= 1.0)
        return -3.0*x*x + 3.0 * 2.0 * x;
    return 0.0;
}

double d2TF(double x)
{
    if (x >= -1.0 && x <= 0.0)
        return 6.0 * x + 6.0;
    else if (x >= 0.0 && x <= 1.0)
        return - 6.0 * x + 6.0;
    return 0.0;
}

double dF4(double x)
{
    return (1 - log(x + 1.0)) / ((x + 1.0)*(x + 1.0));
}

double d2F4(double x)
{
    return (2*log(x + 1.0) - 3) / ((x + 1.0)*(x + 1.0)*(x + 1.0));
}

double dF1(double x)
{
    return 1/(x*x*sqrt(x*x-1));
}

double d2F1(double x)
{
    return (2-3*x*x)/(x*x*x*pow(x*x-1,3.0/2.0));
}

double dF2(double x)
{
    return (2*x)/(3*pow(1+x*x,2.0/3.0));
}

double d2F2(double x)
{
    return ((0-2)*(x*x-3))/(9*pow(1+x*x,5.0/3.0));
}

double dF3(double x)
{
    return ((x+1)*cos(x+1)-sin(x+1))/pow(x+1,2);
}

double d2F3(double x)
{
    return ((0-1)*(sin(x+1))/(x+1))+((2*sin(x+1))/pow(x+1,3.0))+(((0-2)*cos(x+1))/pow(x+1,2));
}

double d4TF(double x)
{
    return 0;
}

double d4F1(double x)
{
    return -fabs((-60*pow(x,6)+105*pow(x,4)-84*pow(x,2)+24)/(pow(x,5)*pow(pow(x,2)-1,7.0/2.0)));
}

double d4F2(double x)
{
    return -fabs(-8.0*(7.0*pow(x,4.0)-126.0*pow(x,2.0)+27.0)/(81.0*pow((pow(x,2.0)+1.0),11.0/3.0)));
}

double d4F3(double x)
{
    return -fabs((std::sin(x + 1.0) / (x + 1.0)) - 12 * (std::sin(x + 1.0) / std::pow(x + 1.0, 3.0)) + 24 * (std::sin(x + 1.0) / std::pow(x + 1.0, 5.0)) + 4 * (std::cos(x + 1.0) / std::pow(x + 1.0, 2.0)) - 24 * (std::cos(x + 1.0) / std::pow(x + 1.0, 4.0)));
}

double d4F4(double x)
{
    return fabs((24*log(x+1.0)-50)/(pow(x+1.0,5)));
}
//--------------------------------
double MainFunc1CosX(double x)
{
    return ((sqrt(x * x - 1.0) / x) + cos(x));
}

double dF1CosX(double x)
{
    return ((1/(x*x*sqrt(x*x-1))) - sin(x));
}

double d2F1CosX(double x)
{
    return (((2-3*x*x)/(x*x*x*pow(x*x-1,3.0/2.0))) - cos(x));
}

double MainFunc1Cos10X(double x)
{
    return ((sqrt(x * x - 1.0) / x) + cos(10*x));
}

double dF1Cos10X(double x)
{
    return ((1/(x*x*sqrt(x*x-1))) - 10*sin(10*x));
}

double d2F1Cos10X(double x)
{
    return (((2-3*x*x)/(x*x*x*pow(x*x-1,3.0/2.0))) - 100*cos(10*x));
}

double MainFunc1Cos100X(double x)
{
    return ((sqrt(x * x - 1.0) / x) + cos(100*x));
}

double dF1Cos100X(double x)
{
    return ((1/(x*x*sqrt(x*x-1))) - 100*sin(100*x));
}

double d2F1Cos100X(double x)
{
    return (((2-3*x*x)/(x*x*x*pow(x*x-1,3.0/2.0))) - 10000*cos(100*x));
}
//--------------------------------
double MainFunc2CosX(double x)
{
    return pow(1.0 + x * x, 1.0 / 3.0) + cos(x);
}

double dF2CosX(double x)
{
    return (2*x)/(3*pow(1+x*x,2.0/3.0)) - sin(x);
}

double d2F2CosX(double x)
{
    return ((0-2)*(x*x-3))/(9*pow(1+x*x,5.0/3.0)) - cos(x);
}

double MainFunc2Cos10X(double x)
{
    return pow(1.0 + x * x, 1.0 / 3.0) + cos(10*x);
}

double dF2Cos10X(double x)
{
    return (2*x)/(3*pow(1+x*x,2.0/3.0)) - 10*sin(10*x);
}

double d2F2Cos10X(double x)
{
    return ((0-2)*(x*x-3))/(9*pow(1+x*x,5.0/3.0)) - 100*cos(10*x);
}

double MainFunc2Cos100X(double x)
{
    return pow(1.0 + x * x, 1.0 / 3.0) + cos(100*x);
}

double dF2Cos100X(double x)
{
    return (2*x)/(3*pow(1+x*x,2.0/3.0)) - 100*sin(100*x);
}

double d2F2Cos100X(double x)
{
    return ((0-2)*(x*x-3))/(9*pow(1+x*x,5.0/3.0)) - 10000*cos(100*x);
}
//--------------------------------

double MainFunc3CosX(double x)
{
    return (sin(x + 1.0) / (x + 1.0)) + cos(x);
}

double dF3CosX(double x)
{
    return (((x+1)*cos(x+1)-sin(x+1))/pow(x+1,2)) - sin(x);
}

double d2F3CosX(double x)
{
    return ((0-1)*(sin(x+1))/(x+1))+((2*sin(x+1))/pow(x+1,3.0))+(((0-2)*cos(x+1))/pow(x+1,2)) - cos(x);
}

double MainFunc3Cos10X(double x)
{
    return (sin(x + 1.0) / (x + 1.0)) + cos(10*x);
}

double dF3Cos10X(double x)
{
    return (((x+1)*cos(x+1)-sin(x+1))/pow(x+1,2)) - 10*sin(10*x);
}

double d2F3Cos10X(double x)
{
    return ((0-1)*(sin(x+1))/(x+1))+((2*sin(x+1))/pow(x+1,3.0))+(((0-2)*cos(x+1))/pow(x+1,2)) - 100*cos(10*x);
}

double MainFunc3Cos100X(double x)
{
    return (sin(x + 1.0) / (x + 1.0)) + cos(100*x);
}

double dF3Cos100X(double x)
{
    return (((x+1)*cos(x+1)-sin(x+1))/pow(x+1,2)) - 100*sin(100*x);
}

double d2F3Cos100X(double x)
{
    return ((0-1)*(sin(x+1))/(x+1))+((2*sin(x+1))/pow(x+1,3.0))+(((0-2)*cos(x+1))/pow(x+1,2)) - 10000*cos(100*x);
}
//--------------------------------

double MainFunc4CosX(double x)
{
    return log(x) / (x + 1.0) + cos(x);
}

double dF4CosX(double x)
{
    return (1 - log(x)) / ((x + 1.0)*(x + 1.0)) - sin(x);
}

double d2F4CosX(double x)
{
    return (2*log(x) - 3) / ((x + 1.0)*(x + 1.0)*(x + 1.0)) - cos(x);
}

double MainFunc4Cos10X(double x)
{
    return log(x) / (x + 1.0) + cos(10*x);
}

double dF4Cos10X(double x)
{
    return (1 - log(x)) / ((x + 1.0)*(x + 1.0)) - 10*sin(10*x);
}

double d2F4Cos10X(double x)
{
    return (2*log(x) - 3) / ((x + 1.0)*(x + 1.0)*(x + 1.0)) - 100*cos(10*x);
}

double MainFunc4Cos100X(double x)
{
    return log(x) / (x + 1.0) + cos(100*x);
}

double dF4Cos100X(double x)
{
    return (1 - log(x)) / ((x + 1.0)*(x + 1.0)) - 100*sin(100*x);
}

double d2F4Cos100X(double x)
{
    return (2*log(x) - 3) / ((x + 1.0)*(x + 1.0)*(x + 1.0)) - 10000*cos(100*x);
}
//---------------------------------

double TestFuncCosX(double x) {
    if (x >= -1.0 && x <= 0.0)
        return x * x * x + 3.0 * x * x + cos(x);
    else if (x >= 0.0 && x <= 1.0)
        return -x * x * x + 3.0 * x * x + cos(x);
    return 0.0;
}

double dTFCosX(double x)
{
    if (x >= -1.0 && x <= 0.0)
        return 3.0*x*x + 3.0 * 2.0 * x - sin(x);
    else if (x >= 0.0 && x <= 1.0)
        return -3.0*x*x + 3.0 * 2.0 * x - sin(x);
    return 0.0;
}

double d2TFCosX(double x)
{
    if (x >= -1.0 && x <= 0.0)
        return 6.0 * x + 6.0 - cos(x);
    else if (x >= 0.0 && x <= 1.0)
        return - 6.0 * x + 6.0 - cos(x);
    return 0.0;
}

double TestFuncCos10X(double x) {
    if (x >= -1.0 && x <= 0.0)
        return x * x * x + 3.0 * x * x + cos(10*x);
    else if (x >= 0.0 && x <= 1.0)
        return -x * x * x + 3.0 * x * x + cos(10*x);
    return 0.0;
}

double dTFCos10X(double x)
{
    if (x >= -1.0 && x <= 0.0)
        return 3.0*x*x + 3.0 * 2.0 * x - 10*sin(10*x);
    else if (x >= 0.0 && x <= 1.0)
        return -3.0*x*x + 3.0 * 2.0 * x -10* sin(10*x);
    return 0.0;
}

double d2TFCos10X(double x)
{
    if (x >= -1.0 && x <= 0.0)
        return 6.0 * x + 6.0 - 100*cos(10*x);
    else if (x >= 0.0 && x <= 1.0)
        return - 6.0 * x + 6.0 - 100*cos(10*x);
    return 0.0;
}

double TestFuncCos100X(double x) {
    if (x >= -1.0 && x <= 0.0)
        return x * x * x + 3.0 * x * x + cos(100*x);
    else if (x >= 0.0 && x <= 1.0)
        return -x * x * x + 3.0 * x * x + cos(100*x);
    return 0.0;
}

double dTFCos100X(double x)
{
    if (x >= -1.0 && x <= 0.0)
        return 3.0*x*x + 3.0 * 2.0 * x - 100*sin(100*x);
    else if (x >= 0.0 && x <= 1.0)
        return -3.0*x*x + 3.0 * 2.0 * x -100* sin(100*x);
    return 0.0;
}

double d2TFCos100X(double x)
{
    if (x >= -1.0 && x <= 0.0)
        return 6.0 * x + 6.0 - 10000*cos(100*x);
    else if (x >= 0.0 && x <= 1.0)
        return - 6.0 * x + 6.0 - 10000*cos(100*x);
    return 0.0;
}

std::pair<double, int> maxChar( std::vector<double> mas)
{
    double max = mas[0];
    int numI = 0;
    for (int i = 0; i < mas.size(); i++)
    {
        if (mas[i] > max)
        {
            max = mas[i];
            numI = i;
        }
    }
    return std::pair<double, int>(max, numI);
}

std::tuple<double,double,int> SearchGlobalMin(double(*functr)(double), double leftborder, double rightborder, double rconst, double epsconst){

       double rightBorder = rightborder;
       double leftBorder = leftborder;
       double x = leftBorder;
       double f = 0.0;
       double r = rconst;
       double eps = epsconst;
       int maxIter = 800;
       double M = 0, m = 0;
       std::vector<double> xValue;
       double ZleftBorder = functr(leftBorder);
       double ZrightBorder = functr(rightBorder);
       xValue.push_back(leftBorder);
       xValue.push_back(rightBorder);
       std::vector<double> Zfunc;
       Zfunc.push_back(ZleftBorder);
       Zfunc.push_back(ZrightBorder);
       std::vector<double> R;
       int k = 2;
       int t = 0;
       while (std::fabs(xValue[t + 1] - xValue[t]) > eps && k < maxIter)
       {
           for (int i = 0; i < k - 1; i++)
           {
               double tmpM = std::fabs((Zfunc[i + 1] - Zfunc[i]) / (xValue[i + 1] - xValue[i]));
               if (M < tmpM) M = tmpM;
           }
           if (M == 0) m = 1;
           else m = r * M;
           for (int i = 0; i < k - 1; i++)
               R.push_back(m * (xValue[i + 1] - xValue[i]) + (Zfunc[i + 1] - Zfunc[i]) * (Zfunc[i + 1] - Zfunc[i]) / (m * (xValue[i + 1] - xValue[i])) - 2 * (Zfunc[i + 1] + Zfunc[i]));
           std::pair<double, int> Char = maxChar(R);
           t = Char.second;
           R.clear();
           double nextX = (xValue[t + 1] + xValue[t]) / 2 - (Zfunc[t + 1] - Zfunc[t]) / (2 * m);
           double currentZ = functr(nextX);
           xValue.push_back(nextX);
           Zfunc.push_back(currentZ);
           std::sort(xValue.begin(), xValue.end(), customLess);
           for (int i = 0; i < xValue.size(); i++)
               Zfunc[i] = functr(xValue[i]);
           k++;
       }

       return std::tuple<double,double, int>(Zfunc[t],xValue[t],k);
   }
