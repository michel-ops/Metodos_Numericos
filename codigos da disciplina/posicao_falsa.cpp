#include <iostream>
#include <math.h>

#define E1 1e-5
#define E2 1e-5
#define A 0
#define B 1
#define RANGE 1000
#define pi M_PI

using namespace std;

/*
    O valor de B tem que ser maior que o de A
*/

double f(double x)
{
    return ( (pow(x,3)) - 9*x + 3);
}

int main()
{
    double a, b, x;

    a = A;
    b = B;
    

    for (int i=1; i<RANGE && ( (b-a) >= E1 ) && ( fabs(f(x)) >= E2 ); i++)
    {
        x = ((a * f(b)) - (b * f(a))) / (f(b) - f(a));

        if(f(a)*f(x) > 0) a = x;
        else b = x;

        cout << "Passo: [" << i << "]" << "\tRaiz: [" << x << "]" << endl;
    }
    
    return 0;
}
