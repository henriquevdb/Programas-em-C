#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

int i, num[i], par=0, n,  impar=0, total;

printf("Coloque a quantidade de números a serem digitados: ");
scanf("%i", &n);

for(i=0; i<n; i++){
	printf("Coloque um número: ");
	scanf("%i", &num[i]);
	
	if(num[i]%2==0){
		par=par+num[i];
	}
	else{
		impar=impar+num[i];
	}
}
total=par+impar;
printf("A soma dos pares são: %d\nA soma dos impares são %d\nE a soma de ambos são %d", par, impar, total);

return 0;
}

