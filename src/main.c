#include <stdio.h>

int a[5];
int n;

int resto(int a, int b){        //funcao para calculo do resto da divisao entre 2 inteiros
   
    if (a % b == 0){
        return 1;
    }
    else{
        return 0;   
    }
}

int main() {

  int i, t, k=0, j;

  for(j=0; j<=4; j++){
	scanf("%d", &(a[j]));   //leitura dos 5 primeiros numeros == periodicidades
  }
	scanf("%d", &n);        //leitura do sexto numero == qtde de iteracoes a serem realizadas

  for(i=0; i<n; i++) {
   
	t = 0;                  //zera a flag que verifica se alguma tarefa esta sendo executada

    for(k=0; k<=4; k++){
       
          if (resto((i+1), a[k])){

              t = 1;            //alguma tarefa esta sendo executada
              printf("%d", k);

          }
    }
   
	  if (t == 0){          //se nenhuma tarefa for executada, imprimir "-"
	      printf("-\n");   
          }

	  else{
	      printf("\n");		  
	  }
  }

  return 0;
}
