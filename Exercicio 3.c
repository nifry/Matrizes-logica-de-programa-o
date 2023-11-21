#include<stdio.h>
#include<stdlib.h>

int main () {

char diciplina[3][300];
float notas[3][2];
float somaNotas = 0;
float media[3];
int i, j;

for ( i = 0; i < 3; i++){
     printf("Digite o nome da diciplina:");
     gets(diciplina[i]);

      for (j = 0; j < 2; j++){
            printf("Digite sua nota:");
            scanf("%f", &notas[i][j]);
            somaNotas += notas[i][j];
      }     
            media = somaNotas / j;
            somaNotas = 0;

          if (media >= 7)
          {
            printf("Aprovado");
          }if (media > 5 && media < 7)
          {
            printf("Recuperacao");
          }else {
             printf("Reprovado");   
          }                    
            
  }
 

for ( i = 0; i < 3; i++){
    printf("Diciplina: %s \n", diciplina[i]);
    
        for (j = 0; j < 2; j++){
        printf("Notas: %.1f \n", notas[i][j]);
    }    
    printf("Media: %.1f \n", media[i][j]);
}

    return 0;
}