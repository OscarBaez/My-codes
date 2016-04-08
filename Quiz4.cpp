#include <iostream>
#include <iomanip>

using namespace std;

int getFactorial(int x)
{
    if (x==0|| x==1)
    {
        return 1;
    }
    else
    {
        return x*getFactorial(x-1);
    }
}


double eulerCal(float precision)
{
    double e=0, previous=e;
    int n=0;
    
    do
    {
        
        previous=e;
        e+=1.0/getFactorial (n);
        n++;
        
    }
    while((e-previous)>precision);
    return e;
}

int main() {
    double prec, x;
    cout<<"Escribe las crifras significativas que tu quieras"<< endl;
    cin>> x;
    cout<< setprecision(x);
    cout<<"El valor de Euler es :"<<eulerCal(prec)<<endl;
    return 0;
}