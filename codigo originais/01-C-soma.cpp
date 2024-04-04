#include<iostream>

int main()
{
	double parcela=0.2,soma=0; //tentar double
	int i;
	
	for(i=1;i<=30000;i=i+1) soma=soma+parcela;
	
	printf("A soma vale %lf\n\n",soma); //tentar double lf
	
	return 0;
}

