
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int var, resp, nint;
    
    srand (time(NULL));
    var = rand()%101;
    
    nint = 0; resp = 0;
    cout<< "Generare un numero entre 1 y 100";
    do
    {
        nint = nint + 1;

    cout<< "\nPorfavor adivina el numero entre 1 y 100";
    cin >> resp;
        if (var<resp)
        {
            cout<<"\nEl numero generado es menor";
            
        }
        if (var>resp)
        {
            cout<<"\nEl numero generado es mayor";
            
        }
    
    }while (var!= resp);
    {
        cout<<"\nFelicidades, lo lograste, el numero es "<<var;
        cout<<"\nEl numero de tus intentos fue "<<nint;
    }
    return 0;
}


