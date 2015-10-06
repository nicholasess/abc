#include <stdio.h>
#include <stdlib.h>

typedef struct tree_info{
 char palavra[31]; // palavra
 char abrev[3]; // abreviação
 int cont; // contador de ocorrências
 int ganho; // ganho que a abreviação proporciona
 struct tree_info * esq;
 struct tree_info * dir;
} tree_info;

int main(void){
        FILE *fp;
        tree_info arvore;
        char aux[31], palavra[31];
        int cont = 0;
        int total = 0;

        /* Lê um nome para o arquivo a ser aberto: */

        if (!(fp = fopen("texto.txt","r")))  /* Caso ocorra algum erro na abertura do arquivo o programa será finalizado */
        {
                printf("Erro! Impossível abrir o arquivo!\n");
                exit(1);
        }

        /* abre novamente para a leitura  */
        fp = fopen("texto.txt","r");

        while(!feof(fp)){
             fscanf(fp, "%s", aux);

             printf("%s - ", aux);
             for(int i=0; i <= 30;i++){

                if(aux[i] != ' '){
                    cont++;
                }else{
                    printf("%d\n", cont);
                    cont = 0;
                }
             }
             printf("\n");

        }

        fclose(fp);
        return(0);
}