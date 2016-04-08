#include <iostream>
#include <string>

using namespace std;

string pala, y;

string is_palindrome(string pala){
    string backwards;
    cout << "Dime una palabra ";
    cin >> pala;
    cout << endl;
    
    int large = pala.length();
    for (int x = large - 1; x >= 0; x--){
        backwards += pala[x];
    }
    
    if (backwards == pala){
        y = "Tu palabra es un palindromo";
    }
    
    else
        y = "Intentalo de nuevo";
    return y;
}
int main(){
    cout << is_palindrome(y);
    return 0;
}