#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

int i, num=0, acima=0;
float notas=0, media, soma=0;

printf("Coloque quantas notas são: ");
scanf("%i", &num);

for(i=0;i<num;i++){
	printf("Coloque a sua nota: ");
	scanf("%f",&notas);
	soma=soma+notas;
	
	if(notas>6){
		acima++;
	}
}
media=soma/i;

printf("A media é: %.2f\n", media);
printf("%d das %d notas estão acima da média", acima, i);



return 0;
}

