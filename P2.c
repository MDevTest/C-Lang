//Nome: Matheus Alves Novais
//RA: 2312930
//Analise E Desenvolvimento De Sistema
//UTFPR - Cornélio Procópio

#include <stdio.h>
#include <stdlib.h>

#define mes = 30;

typedef struct{
    int codigoequipamento;
    char equipamento[30];
    float potencia;
    int tempoativo;
    float consumonomes;
}equipamento;

equipamento mallocvetor(int);
equipamento reallocvetor(equipamento*, int);

int main(){
    int *v,tv = 1, i = 0, t = 5;
    char q;
    equipamento *e;
    e = mallocvetor(t);
    do{
        system("cls");
        v[i].codigo = rand(); % 100;
        printf("\nEquipamento:");
        fflush(stdin);
        scanf("\t%s", &v[i].equipamento);
        do{
            printf("\nPotencia em watts:");
            scanf("\t%f", &v[i].potencia);
        }while((v[i].potencia < 1) || (v[i].potencia >= 10000));
        do{
            printf("\nTempo de uso:");
            scanf("\t%d", &v[i].tempoativo);
        }while((v[i].tempoativo < 1) || (v[i].tempoativo >= 10000));
        v[i].consumonomes = (v[i].potencia * (v[i].tempoativo / 60.0 * 30.0) / 1000.0);


        printf("Deseja Adicionar mais algum equipamento?");
        scanf("\n%s",&q);   
        free(v);
        tv = tv + 1;
        i = i + 1;
        if(i == t - 1){
            t = t + 5;
            v = reallocvetor(v,t);
        }
    }while(q == 's' || q == 'S');
    exit(0);
}
equipamento* mallocvetor(int tv){
    equipamento* v
    v = malloc(tv * sizeof(equipamento));
    return v;
}
equipamento* reallocvetor(equipamento *v, int tv){
    v = realloc(v, tv * sizeof(equipamento));
    return v;
}
