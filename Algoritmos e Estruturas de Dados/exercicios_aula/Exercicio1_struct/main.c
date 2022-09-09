#include <stdio.h>
#include <stdlib.h>

// Construir uma struct para representar livros
    // Leia 5 livros
    // Imprima os dados de cada livro

//
#define QTD 5 // quantidade de livros a serem cadastrados
//
struct livro {
    char titulo[50];
    char autor[50];
    char editora[50];
    int ano;
    int pags;
    char isbn[14];
    int cadastro;
};
typedef struct livro Livros;
//
Livros CadastrarLivro ();
void DadosLivro (Livros livros[], int i);
void MostrarLivro (Livros livros[]);
//

int main()
{
    Livros livros[QTD];

    // Cadastrar todos os livros
    for (int i=0; i<QTD; i++) {
        system("cls||clear");
        printf("=== CADASTRO LIVRO %d ===\n", (i+1));
        livros[i] = CadastrarLivro();
    }

    // Mostrar dados do livro
    char continuar;
    do {
        MostrarLivro(livros);

        printf("\n\nContinuar(S/N)? ");
        fflush(stdin);
        scanf("%c", &continuar);
    } while (continuar=='s' || continuar=='S');

    printf("\n");
    return 0;
}

Livros CadastrarLivro () {
    Livros aux_livro;

    printf("Titulo: ");
    fflush(stdin);
    gets(aux_livro.titulo);
    printf("Autor: ");
    fflush(stdin);
    gets(aux_livro.autor);
    printf("Editora: ");
    fflush(stdin);
    gets(aux_livro.editora);
    printf("Ano publicado: ");
    scanf("%d", &aux_livro.ano);
    printf("N%c paginas: ", 248);
    scanf("%d", &aux_livro.pags);
    printf("ISBN (13 digitos): ");
    fflush(stdin);
    gets(aux_livro.isbn);

    aux_livro.cadastro = 1;

    return aux_livro;
}

void DadosLivro (Livros livros[], int i) {

    printf("=== LIVRO %d ===\n", (i+1));
    printf("Titulo: %s\n", livros[i].titulo);
    printf("Autor: %s\n", livros[i].autor);
    printf("Editora: %s\n", livros[i].editora);
    printf("Ano publicado: %d\n", livros[i].ano);
    printf("N%c paginas: %d\n", 248, livros[i].pags);
    printf("ISBN: %s\n", livros[i].isbn);
}

void MostrarLivro (Livros livros[]) {
    int escolha;

    system("cls||clear");
    printf("Qual livro deseja ver? ");
    scanf("%d", &escolha);
    if (livros[(escolha-1)].cadastro == 1)
        DadosLivro(livros, (escolha-1));
    else
        printf("\nLivro nao cadastrado!!!");
}
