#include<stdio.h>
 
int main(){
    int n;
    scanf("%d", &n);
    int i = 1;
    int j = 1;
    int k =1 ;
    while(i <= n){
        while(j <= n){
            while(k <= n){
                double hipotenusa = i * i;
                double catetos  = (j * j) + (k * k);
                if(hipotenusa == catetos && j < k){
                    printf("hipotenusa = %d, catetos %d e %d\n", i, j, k);
                }
                k++;
            }
            j++;
            k = 1;
        }
        j =1;
    i++;
    }
    return 0;
}