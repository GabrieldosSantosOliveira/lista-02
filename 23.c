#include<stdio.h>
#define N 5
int main(){
    
    int lucro_menor_10=0;
    int lucro_maior_10=0;
    int lucro_maior_20 =0;
    unsigned long int mais_vendida =0;
    unsigned long int codigo_mais_vendido =0;
    float maior_lucro =0;
    unsigned long int codigo_maior_lucro =0;
    float valor_total_de_compra =0;
    float valor_total_de_venda =0;
     
     
     
     unsigned long int codigo;
        float preco_de_compra;
        float preco_de_venda;
        int numero_de_vendas;
    while(scanf("%lu%f%f%d", &codigo, &preco_de_compra,&preco_de_venda, &numero_de_vendas) != EOF){
       
        valor_total_de_compra += preco_de_compra * numero_de_vendas;
        valor_total_de_venda += preco_de_venda * numero_de_vendas;
        float lucro = ((preco_de_venda - preco_de_compra) * 100)/ preco_de_compra;
 
        if(lucro < 10.0){
        lucro_menor_10++;
        }
        if(lucro > 10.0 && lucro < 20.0){
            lucro_maior_10++;
        }
 
        if(lucro > 20.0){
     lucro_maior_20++;
        }
        if(numero_de_vendas > mais_vendida){
            mais_vendida = numero_de_vendas;
            codigo_mais_vendido = codigo;
        } 
        float porcentagem_lucro = (((preco_de_venda * numero_de_vendas) - (preco_de_compra * numero_de_vendas)) * 100);
      
        if(lucro > maior_lucro){
            maior_lucro = lucro;
            codigo_maior_lucro = codigo;
        }
 
    }
        float porcentagem_lucro = ((valor_total_de_venda - valor_total_de_compra) * 100)/ valor_total_de_compra;
    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", lucro_menor_10);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", lucro_maior_10);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", lucro_maior_20);
    printf("Codigo da mercadoria que gerou maior lucro: %lu\n", codigo_maior_lucro);
    printf("Codigo da mercadoria mais vendida: %lu\n", codigo_mais_vendido);
    printf("Valor total de compras: %.2f, valor total de vendas: %.2f e percentual de lucro total: %.2f%%\n", valor_total_de_compra, valor_total_de_venda, porcentagem_lucro);
    return 0;
}