#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
     long long int number;
    FILE*arquivof, *pares, *impares;


    if((arquivof = fopen("numeros.txt","r"))== NULL)
    {
        printf("Arquivo não pode ser lido");
        return 1;
    }

    if((pares = fopen("pares.txt","w"))== NULL || (impares = fopen("impares.txt","w"))== NULL)
    {
        printf("Arquivo não pode ser escrito");
        fclose(arquivof);
        return 1;
    }

    else
    {
        while (fscanf(arquivof, "%lld", &number) == 1)
        {
            if (number % 2 == 0)
            {
                fprintf(pares, "%lld\n", number); // Write even number to even.txt
            }
            else
            {
                fprintf(impares, "%lld\n", number); // Write odd number to odd.txt
            }

        }
         fclose(arquivof);
    fclose(pares);
    fclose(impares);

    printf("Operação  concluida");
    }
    return 0;
}
