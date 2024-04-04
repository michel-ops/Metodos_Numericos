#include <iostream>
#include <math.h>

#define E1 1e-5
#define E2 1e-5
#define A -44
#define B -43
#define RANGE 1000
#define pi M_PI

using namespace std;


/*
    NAO PODE TER PONTOS DE MAXIMO E MINIMO NEM PONTO DE INFLEXAO
    DENTRO DO INTERVALO
*/

double f(double x)
{
    return (exp(-(x/7)-4)) + (x/5) + (exp((x/4)-5));
}

double f_L(double x)
{
    double h = 1e-5;
    return (  ( f(x-2*h)- 8*f(x-h) + 8*f(x+h) - f(x+2*h) ) / (12*h)  );
}

int main()
{
    double x0, x1, a=A, b=B;

    x0 = (a + b) / 2;
    
    x1 = x0 - ( f(x0) / f_L(x0) );

    //    (fabs(x1-x0) >= E1)  || (fabs(f(x1)) >= E2)
    
    for (int i=1; i<RANGE && ( (fabs(x1-x0) >= E1)  || (fabs(f(x1)) >= E2)) ; i++)
    {
        x1 = x0 - ( f(x0) / f_L(x0) );

         
        cout << "Passo: " << i << "\tx1: " <<  x1 << endl;
        
        x0 = x1;
    }

    return 0;
}
