
#include <iostream>
using namespace std;

int resta(int x, int y)
{
    int r;
    r=x-y;
    return r;
}

int suma (int x, int y)
{
    int s;
    s=x+y;
    return s;
}

int multiplicacion(int x, int y)
{
    int m;
    m=x*y;
    return m;
}

int division (int x, int y)
{
    int d;
    d=x/y;
    return d;
}

int residuo (int x, int y)
{
    int f;
    f=x%y;
    return f;
}

int main ()
{
    int x, y, s, r, d, m, f;
    cout <<"\nEscribe un numero ";
    cin >> x;
    cout <<"Escribe otro numero ";
    cin >> y;
    
    r=resta(x,y);
    s=suma(x,y);
    m=multiplicacion(x,y);
    d=division(x,y);
    f=residuo(x,y);
    
    cout <<"\nresta  "<<r;
    cout <<"\nsuma = "<<s;
    cout <<"\nMultiplicacion  "<<m;
    cout <<"\nDivision  "<<d;
    cout <<"\nResiduo "<<f;
    
    return 0;
}