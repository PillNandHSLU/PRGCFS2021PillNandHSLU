#include <stdio.h>
#include <stdlib.h>

// function declaration
long long ComputeNFactorial(int factorial, int end);

long long ComputeBino(int n, int k);

// Executed programme
int main(int argc, char *argv[])
{
	// Falls NICHT 3 Argumente erhalten, dann --> hier hinein
	if(argc != 3 )
	{// input not valid
		printf("Usage:\n");
		printf("01_nChooseK 'n' 'k'\n");
	}	
	else
	{//input is valid --> genau 1+2 Argumente erhalten
		int n = atoi(argv[1]);
		int k = atoi(argv[2]);

		long long binomq = ComputeBino(n,k);
		printf("n = %d\nk = %d\nn tief k = %lld\n", n, k, binomq);
		
	};
	
	return 0; 	

}

// function implementation
long long ComputeNFactorial(int factorial, int end)
{
	if (factorial > end + 1)
	{
		long long product = 0;
		
		product = factorial*ComputeNFactorial(factorial-1, end); // product per recursion replaces the for loop from 01_nchoosek.c
		// printf("%d\t %lld\n", factorial, product);
		return product;
	}
	return end+1;
}

long long ComputeBino(int n, int k)
{
	long long nFactorial = ComputeNFactorial(n, n-k); // n! kann massiv mit (n-k)! gekürzt werden (Formel auf Papier ausschreiben und z.B. mit n=40/k=4 einmal kürzen
	long long kFactorial = ComputeNFactorial(k, 0);
	long long nChooseK = nFactorial / kFactorial; // (n-k)! wurde bereits weggekürzt
	
	return nChooseK;
}

