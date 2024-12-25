#include<stdio.h>
 
int main(){
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    if((n1%2) == 1){
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    }else {
        int i =0;
        while(i < n2){
            printf("%d ", n1);
            n1+=2;
            i++;
        }
        printf("\n");
    }
    return 0;
}