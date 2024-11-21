#include <stdio.h>
#include <string.h>

#define MAX_LIVROS 100

typedef struct {
    int id;
    char titulo[100];
    char autor[100];
    int anoPublicacao;
    int numExemplares;
} Livro;

Livro acervo[MAX_LIVROS];
int numLivros = 0;

void cadastrarLivro(char titulo[], char autor[], int anoPublicacao, int numExemplares) {
    Livro novoLivro;
    novoLivro.id = numLivros + 1;
    strcpy(novoLivro.titulo, titulo);
    strcpy(novoLivro.autor, autor);
    novoLivro.anoPublicacao = anoPublicacao;
    novoLivro.numExemplares = numExemplares;
    acervo[numLivros] = novoLivro;
    numLivros++;
}
