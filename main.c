#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100




    typedef struct dados_aluno { // definir a estrutura dos alunos
    char codigo[10];
    int  disciplinas;
    int nome;
    char genero[1];
    char ano[MAX];
    }tipo_aluno;

    typedef struct dados_disciplina {  // definir a estrutura das disciplinas
    char sigla[4];
    char nome_disciplina[MAX];
    char quantidade_alunos[2];
    int conjunto_alunos;
    } tipo_disciplina;

    typedef struct dados_curso{ // definir a estrutura do curso
    int disciplinas;
    char  nome[MAX];
    } tipo_curso;


    void inserir_disciplinas(tipo_disciplina*m, int n,int i)
{
    printf("Quantas disciplinas estão disponiveis no isep ? \n"); scanf("%d",&n);
    for(i=0;i<n;i++){

    printf("nome_disciplina:");fgets((*m).nome_disciplina,MAX,stdin);
    printf("sigla:");fgets((*m).sigla,4,stdin);
    printf("quantidade_alunos:");fgets((*m).quantidade_alunos,MAX,stdin);
    printf("conjunto_alunos :");scanf("%d",&(*m).conjunto_alunos);getchar();

    }

}

void preencher_alunos(tipo_aluno*m, int n, int i)
{
    printf("Quantos alunos quer inserir na base de dados? \n"); scanf("%d",&n);

    for(i=0;i<n;i++){
    printf("codigo:");fgets((*m).codigo,10,stdin);
    printf("disciplinas:");scanf("%d",&(*m).disciplinas);getchar();
    printf("nome:");scanf("%d",&(*m).nome);getchar();
    printf("genero:");fgets((*m).genero,1,stdin);
    printf("ano:");fgets((*m).ano,MAX,stdin);
    }
}

       void definir_curso(tipo_curso*m)
    {
    printf("disciplinas:");scanf("%d",&(*m).disciplinas);getchar();
    printf("nome:");fgets((*m).nome,MAX,stdin);
}


int main(){
int n,int i;

preencher_alunos(n,i);
    return 0;

}
