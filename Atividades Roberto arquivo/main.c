#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE*arquivof;
    long long int a=1,b=1,c,i;
    if((arquivof=fopen("numeros.txt","w"))==NULL)
    {
        printf("Erro de abertura\n");
    }
    else
    {
        printf("1\n");
        printf("1\n");
        fprintf(arquivof,"1\n1\n");
        for(i=1; i<63; i++)
        {
            c=a+b;
            a=b;
            b=c;
            printf("%lld\n",b);
            fprintf(arquivof,"%lld\n",b);
        }
    }

    fclose(arquivof);
    return 0;
}
