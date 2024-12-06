typedef struct {
    int id;
    int idLivro;
    int idUsuario;
    char dataEmprestimo[11];
} Emprestimo;

Emprestimo emprestimos[MAX_LIVROS];
int numEmprestimos = 0;

int verificarDisponibilidade(int idLivro) {
    for (int i = 0; i < numLivros; i++) {
        if (acervo[i].id == idLivro && acervo[i].numExemplares > 0) {
            return 1;
        }
    }
    return 0;
}

void emprestarLivro(int idLivro, int idUsuario, char dataEmprestimo[]) {
    if (verificarDisponibilidade(idLivro)) {
        Emprestimo novoEmprestimo;
        novoEmprestimo.id = numEmprestimos + 1;
        novoEmprestimo.idLivro = idLivro;
        novoEmprestimo.idUsuario = idUsuario;
        strcpy(novoEmprestimo.dataEmprestimo, dataEmprestimo);
        emprestimos[numEmprestimos] = novoEmprestimo;
        numEmprestimos++;
        for (int i = 0; i < numLivros; i++) {
            if (acervo[i].id == idLivro) {
                acervo[i].numExemplares--;
                break;
            }
        }
    } else {
        printf("Livro não disponível para empréstimo.\n");
    }
}
