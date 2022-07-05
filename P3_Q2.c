//Nome: Matheus Alves Novais - RA 2312930
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, i = 0, n, *v;
    v = malloc(10 * sizeof(int));
    FILE *p_arch;
    p_arch = fopen("Q2.txt", "w");
    if (p_arch == NULL)
    {
        printf("\nErro de abertura/gravacao do arquivo");
        return 0;
    }
    system("cls");
    printf("Para encerrar o programa digite 0\n");
    do
    {
        do
        {
            scanf("%d", &n);
        } while (n < 0);
        if (n != 0)
        {
            v[i] = n;
            i = i + 1;
            cont = i;
            if (i % 10 == 0)
            {
                v = realloc(v, (i + 10) * sizeof(int));
            }
        }
    } while (n != 0);
    if (i != 0)
    {
        for (i = 0; i < cont; i++)
        {
            fprintf(p_arch,"\n%d ", v[i]);
        }
    }
    fclose(p_arch);
    free(v);
    return 0;
}