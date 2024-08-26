#include <stdio.h>
#include <string.h>

// Váriaveis globais: Podem ser usadas e modificadas em qualquer parte do código
struct Aluno{
  int matricula;
  char nome[30];
  char dt_nascimento[9];
  char curso[20];
  int turma;
  float nota1;
  float nota2;
  float media;
};

// Protótipo das funções, o * é um pointer
void cadastrarAluno(struct Aluno *, char);

int main(void) {
  // Structs: Registro
  struct Aluno aluno1, aluno2;
  //printf("Endereço de aluno 1 = %d\n", &aluno1);
  //printf("Endereço de aluno 2 = %d", &aluno2);
  struct Aluno *ptr;
  ptr = &aluno1;
  cadastrarAluno(ptr, '1');
  ptr = &aluno2;
  cadastrarAluno(ptr, '2');
  return 0;
}

void cadastrarAluno(struct Aluno *aluno, char num){
  printf("Digite a matrícula do aluno %c: ", num);
  scanf("%d", &aluno->matricula);while (getchar()!= '\n');
  printf("Digite o nome do Aluno %c: ", num);
  scanf("%29[^\n]s", &aluno->nome);while (getchar()!= '\n');
  printf("Digite a data de nascimento do aluno %c: ", num);
  scanf("%s", &aluno->dt_nascimento);while (getchar()!= '\n');
  printf("Digite o curso do aluno %c: ", num);
  scanf("%19[^\n]s", &aluno->curso);while (getchar()!= '\n');
  printf("Digite a turma do aluno %c: ", num);
  scanf("%d", &aluno->turma);while (getchar()!= '\n');
  printf("Digite a nota 1 do aluno %c: ", num);
  scanf("%f",&aluno->nota1);while (getchar()!= '\n');
  printf("Digite a nota 2 do aluno %c: ", num);
  scanf("%f",&aluno->nota2);while (getchar()!= '\n');
  printf("Media = %.2f\n", (aluno->nota1 + aluno->nota2)/2);
}