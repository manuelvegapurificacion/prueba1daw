//Suma los dígitos de un número de forma recursiva.
#include <stdio.h>

int suma (int n, int s);

main(){
	int n;
	printf("Introducir un numero: ");
	scanf("%d",&n);
	printf("Resultado: %d", suma(n, 0));
}

int suma (int n, int s){	
	if(n%10==0){
		return n;
	}
	else{
		int digito=n%10;
		return digito+(suma(n/10, s));
	}
}