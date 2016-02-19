//
//  main.cpp
//  FunwithNumbers
//
//  Created by Oscar Baez on 09/02/16.
//  Copyright © 2016 Oscar Baez. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, res, mul, div, sub;
    cout<<"Dame un numero";
    cin>>num1;
    cout<<"Dame otro numero";
    cin>>num2;
    
    res = num1 - num2;
    cout<<"\nEl resultado de la resta es "<<res;
    mul = num1 * num2;
    cout<<"\nEl resultado de la multiplicacion es "<<mul;
    div = num1 / num2;
    cout<<"\nEl resultado de la division es "<<div;
    sub = num1 % num2;
    cout<<"\nEl Sobrante de la division es "<<sub;
    
    return 0;
}