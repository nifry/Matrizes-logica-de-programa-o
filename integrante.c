#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {

setlocale(LC_ALL,"PORTUGUESE");

char banda [3][200];
char integrante[3][5][200];
int i = 0,j = 0;

for (i = 0; i < 3; i++) {
    printf("Digite o nome da %dº banda:\n", i+1);
        scanf("%s", &banda[i]);    
       
for (j= 0; j < 5; j++){
    printf("Digite o nome do %dº integrantes:\n", j+1);
        scanf("%s", &integrante[i][j]);
    
}
fflush(stdin);
}

printf("Exibindo os nomes das bandas e integrantes:");

for ( i = 0; i < 3; i++){
    printf("\n Os nomes das bandas:%s \n", banda[i]);
    
    for (j = 0; j < 5; j++){
       printf ("\n Os nomes dos integrantes das bandas:%s \n", integrante[i][j]);
    }
    
}

    return 0;
}