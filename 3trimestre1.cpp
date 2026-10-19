#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

int i,num[i], valor;

printf("Coloque a quantidade de números desejada: ");
scanf("%d",&i);

while(i>0){
	printf("\n\ndigite um número: ");
	scanf("%d", &valor);
	i--;
	
	if(valor>0){
		printf("é POSITIVO");
}
		else{
			if(valor==0){
				printf("é ZERO");}
			else{
				printf("é NEGATIVO");
		}
	}
	if(valor%2==0){
		printf(" e PAR");
	}
	else{
		printf(" e IMPAR");
	}
}
	
	
	

return 0;
}

