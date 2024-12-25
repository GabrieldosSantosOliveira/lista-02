#include<stdio.h>
 
int main(){
    int n;
    int quantidade_de_divisores =0;
    scanf("%d", &n);
    if(n < 0){
        printf("Numero invalido!\n");
    }else{
    int i =1;
    while (i <=n)
    {
        if((n % i) == 0){
            quantidade_de_divisores++;
        }
        i++;
    }
 
    if(quantidade_de_divisores == 2){
        printf("PRIMO\n");
    }else{
        printf("NAO PRIMO\n");
 
    }
    }
    return 0;
}