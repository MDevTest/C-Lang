//Nome: Matheus Alves Novais
//RA: 2312930
//Analise E Desenvolvimento De Sistema
//UTFPR - Cornélio Procópio

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Funcao preenche vetor
int preenche_vetor(int vetor[], int tamanho){
    int i, j, gabvetor[200];
    srand(time(NULL));
    //Preenche vetor
    for(i = 0; i <= tamanho; i++){
        vetor[i] = rand() % 999;
        gabvetor[i] = vetor[i];
    }
    //Verificador de numeros repetidos
    for(i = 0; i <= tamanho; i++){
        for(j = 0; j <= tamanho; j++){
            if(gabvetor[i] == vetor[j]){
                vetor[j] = rand() % 999;
            }   
        }           
    }
    //Mostra vetor na tela
    printf("\nExemplo de vetor");
    for(i = 0; i <= tamanho; i++){        
        printf("\n%d", vetor[i]);
    }
}
//Funcao verifica triangular
int verifica_triangular(int n, int vetor[]){
    int i, a;
    
    for(i = 1; i * (i + 1) * (i + 2) <= n;i++){
        if(i * (i + 1) * (i + 2) == n){
            a = 1;
        }else{
            a = 0;
        }
        vetor[i] = a;
        if(vetor[i] == 1){
            printf("\n%d e o produto de %d * %d * %d",n, i, (i + 1), (i + 2));

        }
    }    
    return a;
}
//Funcao main
int main(){
    int i, tamanho = 200, vetor[200], vetor2[200];
    preenche_vetor(vetor,tamanho);
    printf("\nPara saber quais valores sao trinagulares continue");
    system("pause");
    system("cls");
    printf("\nSaida de tela");
    for(i = 0; i < tamanho; i++){
        verifica_triangular(vetor[i],vetor2);
    }
    return 0;
}