#include<stdio.h>
 
int main(){
    int n;
    int i =0;
    int fatorial =1;
    scanf("%d", &n);
    int n2 =n;
    while(i < n2){
    fatorial *= n;  
    i++;
    n--;
    }
    printf("%d! = %d\n", n2, fatorial);
    return 0;
}