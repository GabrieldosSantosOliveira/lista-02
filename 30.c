#include<stdio.h>
 
int main(){
    int primeira_linha, ultima_linha, i;
    scanf("%d%d", &primeira_linha, & ultima_linha);
    for(i = primeira_linha; i <= ultima_linha; i++){
       int k;
       for(k = 0; k < i + 1; k++){
            int n = i;
            int primeiro_fatorial = 1;
            for(; n > 0; n--){
                primeiro_fatorial = primeiro_fatorial * n;
            }
            int l = k;
            int segundo_fatorial = 1;
            for(; l > 0; l--){
                segundo_fatorial = segundo_fatorial * l;
            }
            int p = (i -k);
            int terceiro_fatorial = 1;
            for(; p > 0; p--){
                terceiro_fatorial = terceiro_fatorial * p;
            }
            int valor = primeiro_fatorial/( segundo_fatorial * terceiro_fatorial);
 
            if(!((k+1) < i + 1)){
            printf("%d", valor);
            }else{
            printf("%d,", valor);
 
            }
       }
       printf("\n");
    }
    return 0;
}