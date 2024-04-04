#include<iostream>

int main()
{
	float A=1,S1=2; //tentar double
	double B=1, S2=2;

	while(S1>1) 
	{
		A=A/10;
		S1=1+A;
	}

	while(S2>1) 
	{
		B=B/10;
		S2=1+B;
	}
	
	printf("A precisao em float  vale %e\n\n",10*A);
	printf("A precisao em double vale %e\n\n",10*B);

	return 0;
}

