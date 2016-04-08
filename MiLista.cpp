#include <iostream>
#include <cmath>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

float getTotal(vector<float> & v,int size)
{
    float r=0;
    for(int n=0;n<size;n++)
    {
        r+=v[n];
    }
    return r;
}

float getAverage(vector<float> & v,int size)
{
    float r=(getTotal(v,size))/size;
    return r;
}

float getstdDev(vector<float> & v, int size)
{
    float promedio=getAverage(v,size),r=0;
    for(int n=0;n<size;n++)
    {
        r+=pow(promedio-(v[n]),2);
    }
    r=sqrt(r/(size-1));
    return r;
}

int main(){
    vector<float> v;
    float x,total,promedio,Dev;
    cout<<"Este programa calcula el promedio, la desviacion estandar y la suma de una lista de numeros dados por el usuario...Dame los numeros y cuando termines escribe 0"<<endl;
    while(cin>>x,x!=0)
        v.push_back(x);
    total = getTotal(v,v.size());
    promedio=getAverage(v,v.size());
    Dev=getstdDev(v,v.size());
    cout<<"El total es: "<<total<<endl;
    cout<<"El promedio es: "<<promedio<<endl;
    cout<<"La desviacion estandar es: "<<Dev<<endl;
}