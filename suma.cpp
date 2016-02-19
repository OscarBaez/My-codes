
#include <iostream>
using namespace std;
int main()
{
    int val1, val2,sum=0;
    cout<<"\nEste programa calculara la suma de una sucesion de numeros por 2 valores dados por el usuario";
    cout<<"\n Porfavor dame el primer valor";
    cin>> val1;
    cout<<"\n Porfavor dame el segundo valor";
    cin>> val2;
    do
    {
        sum = sum +  val1;
        val1 = val1 + 1;
    }
    while( val1 <= val2);
    {
        cout<<"\n la suma es igual a "<<sum;
    }
    
    return 0;
}