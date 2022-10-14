#include <stdio.h>
// Exercicio 1

//
struct Produto {
    char nome[80];
    double preco;
    int quantidade;
};
//
int tamanhoEstoque ();
void iniciarEstoque (struct Produto estoque[], int tam);
struct Produto cadastrarProduto ();
void printarEstoque (struct Produto estoque[], int tam);
void ordenaPreco (struct Produto vet[], int n);
void ordenaQuant (struct Produto vet[], int n);
//

int exercicio1(void)
{
    // Iniciar um estoque
    int tam = tamanhoEstoque();
    struct Produto estoque[tam];
    iniciarEstoque(estoque, tam);
    printarEstoque(estoque, tam);

    // Ordenar por preço
    ordenaPreco(estoque, tam);
    printarEstoque(estoque, tam);

    // Ordenar por quantidade
    ordenaQuant(estoque, tam);
    printarEstoque(estoque, tam);

    return 0;
}

// Função para definir tamanho do estoque
int tamanhoEstoque () {
    int tam;
    printf("Quantidade de produtos a cadastrar: ");
    scanf("%d", &tam);

    return tam;
}

// Função para cadastrar os produtos do estoque
void iniciarEstoque (struct Produto estoque[], int tam) {
    for (int i=0; i<tam; i++){
        system("cls||clear");
        printf("PRODUTO %03d\n", i+1);
        estoque[i]=cadastrarProduto();
    }
};

// Função para ler os dados de cada produto
struct Produto cadastrarProduto () {
    struct Produto cad_prod;

    printf("Nome: ");
    fflush(stdin);
    gets(cad_prod.nome);
    printf("Preco: R$ ");
    scanf("%lf", &cad_prod.preco);
    printf("Quantidade: ");
    scanf("%d", &cad_prod.quantidade);

    return cad_prod;
};

// Função para mostrar os produtos em estoque
void printarEstoque(struct Produto estoque[], int tam) {
    system("cls||clear");
    printf("| Nome do produto      | Preco (R$) | Qtd  |\n");
    for (int i=0; i<tam; i++){
        printf("| %20s |    %7.2f |  %3d |\n", estoque[i].nome, estoque[i].preco, estoque[i].quantidade);
    }
}

// Função para ordenar os produtos do estoque por Preço
void ordenaPreco (struct Produto vet[], int n) {
    struct Produto aux;
    for (int i=1; i<n; i++) {
        for (int j=i; (vet[j].preco<vet[j-1].preco && j>0); j--) {
            aux=vet[j];
            vet[j]=vet[j-1];
            vet[j-1]=aux;
        }
    }
}

// Função para ordenar os produtos do estoque por Quantidade
void ordenaQuant (struct Produto vet[], int n) {
    struct Produto aux;
    for (int i=1; i<n; i++) {
        for (int j=i; (vet[j].quantidade<vet[j-1].quantidade && j>0); j--) {
            aux=vet[j];
            vet[j]=vet[j-1];
            vet[j-1]=aux;
        }
    }
}
