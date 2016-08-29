#include<stdio.h>
#include<string.h>

char criptografa_abc(char s[])
{   int i; //Contador i
    char chave[] ={'abcdefghijklmnopqrstuvxyz'} ;
    int n = strlen(chave)
    int m = strlen(s)
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