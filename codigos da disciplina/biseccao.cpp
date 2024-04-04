#include <iostream>
#include <math.h>

#define E1 1e-6
#define E2 1e-6
#define A 1
#define B 5
#define RANGE 100
#define pi M_PI

using namespace std;

double f(double x)
{
    return ( (exp(((2*x)/5) + (3/2)) ) - 18);

    // h) f = (pow(((55/x)+60), (1/3)) + pow(x,2) - 60);
    // g) f = ( 2 + (3*cos(4/(x-7.2))));
    // f) f = ((3*pow(x,5)) - (2500*x/3) + 6000);
    // e) f = ((4*cos(x)) - exp(2*x) + 91);
    // d) f = ( (x/2) - sin(x) - 17);
    // c) f = (pow(x,3) + x - 1000);
    // b) f = (pow(2,x) - (3*x) - 40);
    // p1-q3) f =  ((x*exp(x/3)) - ((35*x) + (pow((8*x),0.5))));
}

int main()
{
    double  x, a=A, b=B;

    x = (a + b) / 2;

    //printf("\n|  K  |        X        |      f(a)       |        f(x)     |        a        |        b        |       (b-a)      |       |f(x)|  ");
    //printf("\n|  0  |                 |                 |                 |                 |                 |                  |      ");

    for (int i=1; i<RANGE && ( (b-a) >= E1 ) && ( fabs(f(x)) >= E2 ) ; i++)
    {
        x = (a + b) / 2;

        if (f(a) * f(x) > 0) a = x;
        else b = x;
        
        cout << "Passo: [" << i << "]" << "\tRaiz: [" << x << "]" << endl;
    }
    
    return 0;
}
