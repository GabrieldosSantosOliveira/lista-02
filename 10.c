#include<stdio.h>
 
int main(){
    int n;
     int total_de_posibilidades =0;
    scanf("%d", &n);
    int i =1;
    while(i <= 6){
       int complemento =0;
        complemento = n - i;
        if(complemento > 0 && i != complemento && complemento <=6){
            printf("D1: %d, D2: %d\n", i, complemento);
            total_de_posibilidades++;
        }
        i++;
    }
   
    if(total_de_posibilidades>0){
        printf("Ha %d possibilidades\n", total_de_posibilidades);
    }else{
        printf("Combinacao impossivel\n");
    }
    return 0;
 
}