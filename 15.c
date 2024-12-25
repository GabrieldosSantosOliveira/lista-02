#include<stdio.h>
 
int main(){
    float n1, n2,n3;
    float maior =0;
    float menor =0;
 
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    
     maior = n1;
     menor = n1;
     if(n2> maior){
        maior = n2;
    }
    if(n3> maior){
        maior = n3; 
    }
    if(n2< menor){
        menor = n2;
    }
    if(n3< menor){
        maior = n3; 
    }
    float soma = n1+n2+n3;
    printf("%.2f, %.2f, %.2f\n", menor, soma - (maior + menor) , maior);
       
    return 0;
}