#include<stdio.h>
#define TAXA_DE_CRECIMENTO_PAIS_A 3.0
#define TAXA_DE_CRECIMENTO_PAIS_B 1.5
 
int main(){
    unsigned int pais_a, pais_b;
 
    scanf("%u", &pais_a);
    scanf("%u", &pais_b);
    int i = 0;
    while(1==1){
    pais_a += pais_a*(TAXA_DE_CRECIMENTO_PAIS_A / 100);
    pais_b += pais_b*(TAXA_DE_CRECIMENTO_PAIS_B / 100);
    if(pais_a >= pais_b){
        printf("ANOS = %d\n", i+1);
        break;
    }
    i++;
    }
    return 0;
}