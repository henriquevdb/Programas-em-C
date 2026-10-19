#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

int i, num, N, maior, segundo;

printf("Coloque quantas valores são: ");
scanf("%i", &num);

for(i=0;i<num;i++){
	printf("Dê um número: ");
	scanf("%d", &N);
	
	if(N>=maior){
		segundo=maior;
		maior=N;
	}
	
}
if(maior==segundo){
	printf("Ambos os maiores são iguais: %d", segundo);
}
else{
	printf("O maior número é %d e o segundo maior é %d", maior, segundo);
}


return 0;
}

