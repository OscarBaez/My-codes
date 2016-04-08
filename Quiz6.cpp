#include <iostream>
using namespace std;

int gcd(int x, int y){
    int r;
    if (x==0){
        return x;
    }
    while (y!=0){
        r= y;
        y= x%y;
        x= r;
    }
    return r;
}

int main (){
    int x,y;
    cout<<"Escribe un numero: ";
    cin>>x;
    cout<<"Escribe otro numero: ";
    cin>>y;
    cout<<"El mas grande comun denominador es (" <<x <<" y " <<y <<") = " <<gcd(x,y)<<endl;
    
    
    return 0;
}
