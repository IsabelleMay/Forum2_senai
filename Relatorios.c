void gerarRelatorioLivrosEmprestados() {
    printf("Livros Emprestados:\n");
    for (int i = 0; i < numEmprestimos; i++) {
        printf("ID Empréstimo: %d, ID Livro: %d, ID Usuário: %d, Data Empréstimo: %s\n",
               emprestimos[i].id, emprestimos[i].idLivro, emprestimos[i].idUsuario, emprestimos[i].dataEmprestimo);
    }
}

void gerarHistoricoEmprestimos(int idUsuario) {
    printf("Histórico de Empréstimos do Usuário %d:\n", idUsuario);
    for (int i = 0; i < numEmprestimos; i++) {
        if (emprestimos[i].idUsuario == idUsuario) {
            printf("ID Empréstimo: %d, ID Livro: %d, Data Empréstimo: %s\n",
                   emprestimos[i].id, emprestimos[i].idLivro, emprestimos[i].dataEmprestimo);
        }
    }
}

void gerarEstatisticasAcervo() {
    printf("Estatísticas do Acervo:\n");
    for (int i = 0; i < numLivros; i++) {
        printf("ID Livro: %d, Título: %s, Autor: %s, Ano: %d, Exemplares Disponíveis: %d\n",
               acervo[i].id, acervo[i].titulo, acervo[i].autor, acervo[i].anoPublicacao, acervo[i].numExemplares);
    }
}
