#include<stdio.h>
 
int main(){
    int n, inverso;
    scanf("%d", &n);
    if(n > 99999){
        printf("NUMERO INVALIDO\n");
        return 0;
    }
    if(n < 10){
        printf("PALINDROMO\n");
    }else if(n < 100){
        int second_digit = n % 10;
        int first_digit = n - first_digit;
        inverso = (second_digit * 10) + (first_digit /10);
        if(inverso == n){
            printf("PALINDROMO\n");
        } else {
            printf("NAO PALINDROMO\n");
        }
    } else if (n < 1000){
        int third_digit = n % 10;
        int second_digit = (n % 100) - third_digit;
        int first_digit = (n - third_digit) - first_digit;
 
        inverso = (first_digit / 100) + second_digit  + (third_digit * 100);
        if(inverso == n){
            printf("PALINDROMO\n");
        } else {
            printf("NAO PALINDROMO\n");
        }
    } else if(n < 10000){
        int fourth_digit = n % 10;
        int third_digit = (n % 100) - fourth_digit;
        int second_digit = ((n%1000) - fourth_digit) - third_digit;
        int first_digit = ((n - second_digit) - third_digit) - fourth_digit;
        inverso = (first_digit / 1000) + (second_digit / 10) + (third_digit* 10) + (fourth_digit * 1000);
        if(inverso == n){
            printf("PALINDROMO\n");
        }else{
            printf("NAO PALINDROMO\n");
        }
 
    }else if(n < 100000){
        int fifht_digit = n % 10;
        int fourth_digit = (n % 100) - fifht_digit;
        int third_digit = ((n%1000) - fifht_digit) - fourth_digit;
        int second_digit = (((n%10000) - fifht_digit) - fourth_digit) - third_digit;
        int first_digit = (((n - second_digit) - third_digit) - fourth_digit) - fifht_digit;        
        inverso = (first_digit / 10000) + (second_digit / 100) + third_digit + (fourth_digit * 100) + (fifht_digit * 10000);
        if(inverso == n){
            printf("PALINDROMO\n");
        }else{
            printf("NAO PALINDROMO\n");
        }
 
    }
    return 0;
}