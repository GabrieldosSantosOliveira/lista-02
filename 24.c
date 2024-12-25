#include<stdio.h>
int main(){
    int n1,n2,n3;
   
    scanf("%d%d%d", &n1,&n2,&n3);
    int n1_anterior = n1;
    int n2_anterior = n2;
    int n3_anterior = n3;
    int i =2;
    int maior =0;
    int divide =0;
    int mmc = 1;
    while(1==1){
     if((n1%i) == 0){
       n1 =n1/i;
       divide++;
     }
     if((n2%i) == 0){
       n2 =n2/i;
       divide++;
     }
     if((n3%i) == 0){
       n3 =n3/i;
       divide++;  
     }
     if(divide > 0){
        printf("%d %d %d :%d\n", n1_anterior,n2_anterior,n3_anterior,i);
        mmc *= i;
        n1_anterior = n1;
        n2_anterior = n2;
        n3_anterior = n3;
     }else{
        i++;
     }
     if((n1+n2+n3) == 3){
      break;
     }
     divide =0;
    }
    printf("MMC: %d\n", mmc);
    return 0;
}