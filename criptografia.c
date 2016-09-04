#include<stdio.h>
#include<string.h>

/*
criptografa_abc => retorna uma string

A função basicamente tem a ideia de usar uma chave 'abcdefghijklmnopqrstuvxyz'
Que a principio a primeira letra vira a ultima
a => z
b => y
Percorrendo o laço, pela metade e percorrendo o numero n, sendo o valor do tamanho da chave
o numero m, o valor do tamanho da palavra,
percorre m*(n/2) vezes o laço
Analisando se é o i-esimo termo, colocando o ultimo menos o i-esimo - 1
E o contrário também é válido, assim percorrendo apenas metade das vezes a chave.
*/
char criptografa_abc(char s[])
{   int i; //Contador i
    char chave[] ="abcdefghijklmnopqrstuvxyz";
    int n = strlen(chave);
    int m = strlen(s);
    char *criptografado= malloc(m * sizeof(char));
    for(i=0;i<n/2;i++)
        {
            for(j=0;j<strlen(s);j++)
                {
                    if(s[j] == chave[i])
                    {
                        criptografado[j] = chave[n-i-1];
                    }
                    if(s[j] == chave[n-i-1])
                    {
                        criptografado[j] = chave[i];
                    }
                }
        }
}



int main(){

    char v = {'vagabunda'};

    printf("%s e criptografado: %s",v,criptografa_abc(v));

}