#include <iostream>
using namespace std;

int q(int repeat, int number[]){
    int s=0;
    float cond=0;
    for (int i = 0; i < repeat; i++) {
        cond= number[i] % 3;
        if (cond == 0){
            s = s + number[i];
        }
    }
    return s;
    
}
int main()
{
    int cu;
    cout << "¿Cuantos numeros deseas sumar?"<< endl;
    cin >> cu;
    int n[cu];
    for (int i=0; i < cu; i++)
    {
        cout << "Dame un numero ";
        cin >> n[i];
    }
    int suma = q(cu, n);
    cout << "El total es "<< suma << endl;
    return 0;
}