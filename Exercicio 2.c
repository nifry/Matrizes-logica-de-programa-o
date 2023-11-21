#include<stdio.h>
#include<stdlib.h>

int main () {

system("cls || clear");

char alunos[3][200]; // dois alunos
float notas[3][3]; // tres notas para cada um dos dois alunos
float somaNotas = 0;
int i, j;
float media[3];

for ( i = 0; i < 3; i++){
    printf("\nDigite o nome do aluno:");    
    gets(alunos[i]);

        for ( j = 0; j < 3; j++){
            printf("\nDigite a nota do aluno:");
            scanf("%f", &notas[i][j]);
            
            somaNotas += notas[i][j];
            }

    media[i] = somaNotas / j;
    somaNotas = 0;     
            fflush(stdin);
}
//fflush (studin); // para Vs code e Dev c++ (windows).
// setbuf(stdin, 0); // para OnlineGDB (Linux).

printf("Exibindo os dados dos alunos... \n");

for ( i = 0; i < 3; i++){
    printf("\nNome do aluno: %s \n", alunos[i]);

        for ( j = 0; j < 3; j++){
            printf("Nota: %.1f \n", notas[i][j]);
        }   
        printf("Média do aluno: %.1f \n", media[i][j]);
}


    return 0;
}