#include <stdio.h>
#include <stdlib.h>

// function declaration
int nfactorial(int n) {

	int factorised = 1;
	
	for (int i = 1; i <= n; i++ )
	{	
		factorised = factorised * i;
	}

	return factorised;
}


long long nchoosek(int n, int k) {
	
	int difference = n-k;
	long long binom = nfactorial(n)/(nfactorial(k)*nfactorial(difference)); 
	
	return binom;
}


// executed program
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

		long long binomq = nchoosek(n,k);
		printf("n tief k = %lld\n", binomq);
		
	};
	
	return 0; 	

}



