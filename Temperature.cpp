#include <iostream>
using namespace std;
int main()
{
    int temp, temp2;
    cout <<"Escribe la temperatura en Fahrenheit";
    cin >> temp;
    temp2 = (5 * (temp - 32)/9);
    cout <<"La temperatura en centigrados es "<<temp2;
    return 0;
}