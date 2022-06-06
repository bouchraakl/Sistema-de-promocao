
//As bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>//faz com que a função printf() mostre na tela os caracteres da Língua Portuguesa

int main()
{
    //Faz referência à todos os aspectos da localização
    setlocale(LC_ALL,"");

    //Declaraçao de variáveis
    float valor_produto , discount ;
    int forma_de_pagamento ;

    printf("===== Sistema Para Promoção  =====\n");

    // Entrada de dados do usuário
    printf("\nDigite o valor do produto: R$ ");
    scanf("%f" , & valor_produto);

    //Opção
    printf("\n1 - A vista em dinheiro ou chque ");
    printf("\n2 - A vista com cartão de crédito ");
    printf("\n3 - Em 2x sem juros ");
    printf("\n4 - Em 3x com juros\n ");
    printf("\nEscolha a forma de pagamento : ");
    scanf("%d" , & forma_de_pagamento);


    switch (forma_de_pagamento) {
    case 1 :
        discount = valor_produto - (valor_produto*0.10);
        printf("Ganhou 10%% de desconto!");
        printf(" \nO valor com o disconto :R$ %2.f" , discount );
        break;
    case 2 :
        discount = valor_produto - (valor_produto*0.05);
        printf("Ganhou 5%% de desconto");
        printf("\nO valor com o disconto :R$ %2.f" , discount);
        break;
    case 3 :
        discount == valor_produto;
        printf("Preço normal de etiqueta sem juros");
        printf("\nO valor do produto sem desconto, pagamento em 2 vezes  :R$ %2.f " ,discount );
        break;
    case 4 :
        discount = valor_produto + (valor_produto * 0.10);
        printf("Preço de etiqueta com acréscimo");
        printf("\nValor do produto com acréscimo de 10%, pagamento em 3 vezes :R$ %2.f" , discount);
        break;
    default :
        printf("Opção Inválida");


    }



    return 0;
}
