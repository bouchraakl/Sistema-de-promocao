
//As bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>//faz com que a fun��o printf() mostre na tela os caracteres da L�ngua Portuguesa

int main()
{
    //Faz refer�ncia � todos os aspectos da localiza��o
    setlocale(LC_ALL,"");

    //Declara�ao de vari�veis
    float valor_produto , discount ;
    int forma_de_pagamento ;

    printf("===== Sistema Para Promo��o  =====\n");

    // Entrada de dados do usu�rio
    printf("\nDigite o valor do produto: R$ ");
    scanf("%f" , & valor_produto);

    //Op��o
    printf("\n1 - A vista em dinheiro ou chque ");
    printf("\n2 - A vista com cart�o de cr�dito ");
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
        printf("Pre�o normal de etiqueta sem juros");
        printf("\nO valor do produto sem desconto, pagamento em 2 vezes  :R$ %2.f " ,discount );
        break;
    case 4 :
        discount = valor_produto + (valor_produto * 0.10);
        printf("Pre�o de etiqueta com acr�scimo");
        printf("\nValor do produto com acr�scimo de 10%, pagamento em 3 vezes :R$ %2.f" , discount);
        break;
    default :
        printf("Op��o Inv�lida");


    }



    return 0;
}
