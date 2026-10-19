#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

int i, num[i], n, cont=0;

printf("Coloque a quantidade de números a serem digitados: ");
scanf("%i", &n);

for(i=0;i<n; i++){
	printf("Coloque um número: ");
	scanf("%i", &num[i]);
	
	if(num[i]>num[0]){
		cont++;
	}
}
printf("%d números são maiores que o primeiro digitado", cont);

return 0;
}

