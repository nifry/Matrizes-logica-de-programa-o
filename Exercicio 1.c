#include<stdio.h>
#include<stdlib.h>

int main () {

system("cls || clear");

char alunos[2][200]; // dois alunos
float notas[2][3]; // tres notas para cada um dos dois alunos
int i, j;

for ( i = 0; i < 2; i++){
    printf("\nDigite o nome do aluno:");    
    gets(alunos[i]);

        for ( j = 0; j < 3; j++){
            printf("\nDigite a nota do aluno:");
            scanf("%f", &notas[i][j]);
            fflush(stdin);
        }
}

//fflush (studin); // para Vs code e Dev c++ (windows).
// fetbuf(stdin, 0); // para OnlineGDB (Linux).

printf("Exibindo os dados dos alunos... \n");

for ( i = 0; i < 2; i++){
    printf("\nNome do aluno: %s \n", alunos[i]);

        for ( j = 0; j < 3; j++){
            printf("Nota: %.1f \n", notas[i][j]);
        }   
}

    return 0;
}