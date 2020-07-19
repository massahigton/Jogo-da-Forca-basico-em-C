#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main(){

char resposta[20];
int erros;
int acertos;
char letra;
int i, j;
int max;

setlocale (LC_ALL, "portuguese");

printf("************ Jogo da Forca ************\n");
printf("************** Jogador 1 **************\n\n");
printf("Utilize apenas letras minúsculas.\n");
printf("Máximo de 20 letras\n\n");

letra = ' '; max = 1;
for (i = 1; i <= 20; i++) {

resposta[i] = ' ';
}

erros = 0; acertos = 0;

printf("Digite a palavra secreta: ");

scanf (" %s", resposta);
max = strlen (resposta);

system("clear||cls");


printf("************ Jogo da Forca ************\n");
printf("************** Jogador 2 **************\n\n");
printf("Utilize apenas letras minúsculas.\n");
printf("Limite de 6 erros. Palavra de até 20 letras\n\n");

while ((erros <6) && acertos <max){

    printf("Digite uma letra: ");
    scanf (" %c", &letra);

    j = 0;
    for (i = 0; i <= max; i++){
        if (resposta[i] == letra){
            acertos++; j++;
            printf ("\nAcertos: %d - Erros: %d\n",acertos, erros);
         }

         if (j <= 0){

             erros++;
         }
         if ( erros >= 6){

          printf ("derrota com %d erros \n", erros);
         }
          else if (acertos >= max){

            printf("ganhou!");
             printf ("vitoria com %d acertos\n", acertos);
          } 

     }
   }
      return (0);
}
