//Nome: Matheus Alves Novais
//RA: 2312930
//Analise E Desenvolvimento De Sistema
//UTFPR - Cornélio Procópio

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void verifica_situacao(int);

//Funcao corrige prova
int corrige_prova(int gabarito[], int prova[]){
    int a, i;
    for(i = 0; i < 30; i++){
        if(prova[i+1] == gabarito[i]){
            a++;
        }
    }
    return a;
}
//Funcao main
int main(){
    int gabarito[30] = {1,2,3,5,4,1,2,3,5,4,1,2,3,5,4,1,2,3,5,4,1,2,3,5,4,1,2,3,5,4};
    int prova[31];
    int RA, a, i;
    char situacao[10];
    //Entrada de dados
    for(i = 0; i < 31; i++){
        scanf("%d", &prova[i]);
    }
    RA = prova[0];
    //Saida de dados para a tela
    system("cls");
    printf("\n\nGabarito...: {1,2,3,5,4,1,2,3,5,4,1,2,3,5,4,1,2,3,5,4,1,2,3,5,4,1,2,3,5,4}");
    printf("\nRespostas..: {");
    for(i = 1; i <= 30; i++){
        printf("%d", prova[i]);
        if(i < 30){
            printf(",");
        }else{
            printf("}");
        }    
    }
    printf("\nRA.........: %d", RA);
    printf("\nAcertos....: %d", corrige_prova(gabarito,prova));
    verifica_situacao(a);
    system("pause");
    return 0;
}
//Funcao de verificacao se Aprovado ou Reprovado
void verifica_situacao(int acertos){
    if(acertos < 15){
        printf("\nResultado..: Reprovado\n");
    }else{
        printf("\nResultado..: Aprovado\n");
    }
}