

#include <iostream>
using namespace std;
int main ()
{
    cout<<"\nEste programa calculara el factorial de un numero dado por el usuario ";
    int num, factorial=1;
    char resp;
    
    do
    {
        cout<<"\nPofavor dame el numero ";
        cin>> num;
        
        for (int a= 1; a<= num; a++)
        {
            factorial = factorial* a;
        }
        
        cout<<"\nEl factorial es "<<factorial;
        
        cout<<"\nQuieres seguir en el programa Si(S) No(N) ";
        cin>> resp;
        
        factorial=1;
        
    }while( resp == 's');
    
    cout<<"\nAdios ";
    
    
    return 0;
}