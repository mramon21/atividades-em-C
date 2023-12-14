#include <stdio.h>
#include <stdlib.h>

struct mercado{
    char produto[20];
    float preco;
};

struct mercado compras[5];

void dados(){
    int i;
    for(i=0; i<5; i++){
        printf("Insira o nome do produto: ");
        scanf("%s",compras[i].produto);
        printf("Insira o preço do produto: ");
        scanf("%f",&compras[i].preco);
    }
    printf("\n");
}

void mostrar(){
    int i;
    for(i=0; i<5; i++){
        printf("Produto: %s\n",compras[i].produto);
        printf("Preço: %.2f\n",compras[i].preco);
        printf("\n");
    }
}
float valorTotal(){
    float total=0.0;
    int i;
    for(i=0; i<5; i++){
        total += compras[i].preco;
    }
    return total;
}

void maisCaro(){
    int i, indiceCaro;
    float caro = compras[0].preco;
    for(i=0; i<5; i++){
        if(caro < compras[i].preco){
            caro = compras[i].preco;
            indiceCaro = i;
        }
    }
    printf("\nO produto mais caro é: %s. Custa: %.2f\n",compras[indiceCaro].produto, caro);
}

void maisBarato(){
    int i, indiceBarato;
    float barato = compras[0].preco;
    for(i=0; i<5; i++){
        if(barato > compras[i].preco){
            barato = compras[i].preco;
            indiceBarato = i;
        }
    }
    printf("\nO produto mais barato é: %s. Custa: %.2f\n",compras[indiceBarato].produto, barato);
}

int main(){
    
    dados();
    mostrar();
    float total = valorTotal();
    printf("O valor total é:R$ %.2f\n",total);
    maisCaro();
    maisBarato();

    return 0;
}




