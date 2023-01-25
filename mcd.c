#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int nDividendoIniziale = 51;
	int nDivisoreIniziale = 3;
	int nDividendo = 0;
	int nDivisore = 0;
	int nQuoziente = 0;
	int nResto = -1;
	int nMcd = 0;

	
	int numArguments = (argc-1);
	if (numArguments>=2) {
		nDividendoIniziale = atoi(argv[1]);
		nDivisoreIniziale = atoi(argv[2]);
	}
	if (nDividendoIniziale>nDivisoreIniziale) {
		nDividendo = nDividendoIniziale;
		nDivisore = nDivisoreIniziale;
	} else {
		nDividendo = nDivisoreIniziale;
		nDivisore = nDividendoIniziale;
	}
	
	do {
		nResto = nDividendo % nDivisore;
		nQuoziente = (nDividendo - nResto) / nDivisore;
		printf("%i : %i = %i + %i\n", nDividendo, nDivisore, nQuoziente, nResto);
		//
		nMcd = nDivisore;
		//
		nDividendo = nDivisore;
		nDivisore = nResto;
	} while (nResto>0);
	printf("MCD( %i , %i ) = %i\n",nDividendoIniziale, nDivisoreIniziale, nMcd);
	
	
	
	return (0);
}