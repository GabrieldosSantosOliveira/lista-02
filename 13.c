#include<stdio.h>
 
int main(){
    int contador_par =0;
    int contador_impar =0;
    int soma_impar =0;
    int soma_par =0;
    int n;
    
    while(1==1){
        scanf("%d", &n);
        if(n == 0) break;
        if((n % 2) == 0){
            soma_par += n;
            contador_par+= 1;
         }else {
            soma_impar += n;
            contador_impar+= 1;
         }
    }
    double media_par = (double)soma_par / (double)  contador_par;
    double media_impar = (double)soma_impar / (double) contador_impar;
    if(contador_par ==0){
    printf("MEDIA PAR: %lf\n", 0.0);
 
   }else {
    printf("MEDIA PAR: %lf\n", media_par);
 
   }
    if(contador_impar == 0){
    printf("MEDIA IMPAR: %lf\n", 0.0);
 
    }else{
    printf("MEDIA IMPAR: %lf\n", media_impar);
    }
    return 0;
}