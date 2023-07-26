#include <stdio.h>
#include <string.h>
int main()
{
    int i = 68;
    char txt[7] = "001.txt";
    int tamanho[i];
    char c[15];
    FILE *entrada;
    entrada = fopen("elimina.txt", "r");
    
    
    while(!feof(entrada))
    {
        fscanf(entrada, "%s", c);
        printf("\n%s", c);
        remove(c);
    }

}