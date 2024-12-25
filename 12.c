#include<stdio.h>
int main(){
    int n, anterior, atual;
    scanf("%d", &n);
    int i =0;
    int quantidade_atual = 0;
    int maior =0;
    while (i < n)
    {
        scanf("%d", &atual);
        if(i != 0){
 
         if(atual > anterior){
            quantidade_atual++;
 
         }else {
            quantidade_atual =0;
         }
         if(quantidade_atual > maior){
            maior = quantidade_atual;
         }
        }
        anterior = atual;
        i++;
    }
    printf("O comprimento do segmento crescente maximo e: %d\n", maior +1);
    return 0;
}