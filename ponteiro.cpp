#include <stdio.h>
#include <cstdio>

int main(void){
  //v_num é a variável que
  //será apontada pelo ponteiro
  int v_num = 10;
  //declaração de variável ponteiro
  int *ptr;

  //atribuindo o endereço da variável v_num ao ponteiro
  ptr = &v_num;

  printf("Utilizando ponteiros\n\n");
  printf("Conteúdo da variável v_num: %d\n", v_num); //Conteúdo real da variável
  printf("Endereço da variável v_num: %x \n", &v_num);  //Local de alocação na memória
  printf("Conteúdo da variável ponteiro ptr: %x", ptr); //Conteúdo da variável ponteiro

  //getch();
  return(0);
}