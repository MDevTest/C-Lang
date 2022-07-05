//Nome: Matheus Alves Novais - RA 2312930
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *gabarito;
    FILE *prova;
    int ra[30][31];
    int gab[30];
    int i, j;
    char s;
    j = 0;

    system("cls");
    gabarito = fopen("gabarito.txt", "r");
    if (gabarito == NULL)
    {
        printf("\nErro de abertura/gravacao do arquivo");
    }
    prova = fopen("prova.txt", "r");
    if (prova == NULL)
    {
        printf("\nErro de abertura/gravacao do arquivo");
    }
    for (i = 0; i < 30; i++)
    {
        fscanf(gabarito, "%d", &gab[i]);
    }
    for (i = 0; i < 30; i++)
    {
        fscanf(prova, "%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d", &ra[i][0],&s,&ra[i][1],&s,&ra[i][2],&s,&ra[i][3],&s,&ra[i][4],&s,&ra[i][5],&s,&ra[i][6],&s,&ra[i][7],&s,&ra[i][8],&s,&ra[i][9],&s,&ra[i][10],&s,&ra[i][11],&s,&ra[i][12],&s,&ra[i][13],&s,&ra[i][14],&s,&ra[i][15],&s,&ra[i][16],&s,&ra[i][17],&s,&ra[i][18],&s,&ra[i][19],&s,&ra[i][20],&s,&ra[i][21],&s,&ra[i][22],&s,&ra[i][23],&s,&ra[i][24],&s,&ra[i][25],&s,&ra[i][26],&s,&ra[i][27],&s,&ra[i][28],&s,&ra[i][29],&s,&ra[i][30],&s,&ra[i][31]);       
    }
    for (i = 0; i < 30; i++)
    {
        printf("\nRA: %d", ra[i][0]);
        for (j = 1; j < 31; j++)
        {
            printf(";%d", ra[i][j]);
        }
    }
    fclose(gabarito);
    fclose(prova);
    return 0;
}