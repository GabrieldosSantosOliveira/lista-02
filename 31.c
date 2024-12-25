#include<stdio.h>
 
int finobacci(int first, int second, int position){
    int i, x, y, k;
    x = first;
    y = second;
    if(position == 1){
        return first;
    }else if(position == 2){
        return second;
    }
    for(i = 2; i < position; i++){
      k = x + y;
      x = y;
      y = k;
    }
    
    return k;
}
 
int main(){
    int i, n, first, second, k;
    int valido =0;    
    scanf("%d%d%d", &n, &first,&second);
    for(i =1; i<= n; i++){
        scanf("%d", &k);
        if(k == finobacci(first, second, i)){
            printf("OK\n");
        }else{
            valido = -1;
            printf("Nao e Fibonacci\n");
            break;
        }
    }
    if(valido == 0){
        printf("A serie informada e de Fibonacci\n");
    }
    return 0;
}