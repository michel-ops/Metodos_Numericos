#include <iostream>
#include <math.h>
#include <vector>

#define MAX 100
#define MIN 0
#define INTERVALO 1
using namespace std;

double f(double x)
{
    return ( (exp(((2*x)/5) + (3/2)) ) - 18);
}

int main()
{
    vector<string> intervalo;

    int a = MIN , b = MIN + INTERVALO;

    for (int i=MIN; i<MAX; i++, a=a+INTERVALO, b=b+INTERVALO)
    {
        if( (f(a)>0 && f(b)<0) || (f(a)<0 && f(b)>0))
        {
            string valor = "[" + to_string(a) + "," +to_string(b) + "]";   
            intervalo.push_back(valor);
        }
    }

    
    for (int i = 0; i < intervalo.size(); i++)
    {
        printf("\n Intervalo: %s", intervalo[i].data());
    }
    
    
    return 0;
}