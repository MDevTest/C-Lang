//Nome: Matheus Alves Novais
//RA: 2312930
//Analise E Desenvolvimento De Sistema
//UTFPR - Cornélio Procópio

#include <Stdio.h>
#include <stdlib.h>

struct eq{
    int codigoequipamento;
    char equipamento[30];
    float potencia;
    float consumonomes;
    int tempoativo;
}

typedef struct eq equipamento;

equipamento * alocavet(int);
equipamento * realocavet(equipamento *, int);
void preenche(equipamento[]);
void relatorio(equipamento[]);

int cont;
int total;

int main(){
    char q;
    int i;
    equipamento * V;

    system("cls");
    cont = 5;
    V = alocavet(cont);
    preenche(V);
    printf("\nDeseja ver o relatorio? S/n");
    scanf("%s",&q);
    if(q == "S" || q == "s"){
        system("cls");
        relatorio(V);
        system("pause");
        exit(0);
    }else if(q == "N" || q == "n"){
        system("cls");
        printf("\nFim do programa");
        system("pause");
        exit(0);
    }else{
        system("cls");
        printf("\nErro de parametros");
        system("pause");
        exit(0);
    }
    relatorio(V);

    free(V);
    return 0;
}
void preenche(equipamento vet[]){
    int i = 0;
    char q;
    do{
        vet[i].codigoequipamento = i + rand() + 1;
        printf("\nNome do Equipamento:");
        fflush(stdin);
        gets(vet[i].equipamento);
        do{
            printf("\nPotencia do equipamento:");
            scanf("%f",&vet[i].potencia);
        }while(vet[i].potencia >= 1 || vet[i].potencia <= 10000);
        do{
            printf("\nTempo de atividade registrada do equipamento:");
            scanf("%d",&vet[i].tempoativo);
        }while(vet[i].tempoativo >= 1 || vet[i].tempoativo <= 10000);
        vet[i].consumonomes = vet[i].potencia * (vet[i].tempoativo / 60.0 * 30.0 / 1000.0);
        printf("\n\nDeseja realizar novo cadastro? S/n");
        scanf("%s",&q);
        system("cls");
        total = i;
    }while(q == "S" || q == "s");
}
void relatorio(equipamento vet[]){
    int i = 0;
    printf("\nRelatorio de equipamentos");
    for(i = 0; i < total; i++){
        printf("\n=========================");
        printf("\nCodigo......: %d",vet[i].codigoequipamento);
        printf("\nEquipamento.: %s",vet[i].equipamento);
        printf("\nPotencia....: %2.2f",vet[i].potencia);
        printf("\nTempo ativo.: %d",vet[i].tempoativo);
        printf("\nConsumo.....: %2.2f",vet[i].consumonomes);
    }
}
equipamento * alocavet(int tam){
    equipamento *vet;
    if(malloc(tam * sizeof(equipamento)) == NULL){
        printf("\nNao ha memoria disponivel");
        exit(0);
    }
    vet = malloc(tam * sizeof(equipamento));
    return vet;
}
equipamento * realocavet(equipamento *vet, int tam){
    if(realloc(vet,tam * sizeof(equipamento)) == NULL){
        printf("\nNao ha memoria disponivel");
        exit(0);
    }
    vet = realloc(vet,tam * sizeof(equipamento));
    return vet;
}
preenche