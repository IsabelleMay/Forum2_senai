void devolverLivro(int idEmprestimo) {
    for (int i = 0; i < numEmprestimos; i++) {
        if (emprestimos[i].id == idEmprestimo) {
            for (int j = 0; j < numLivros; j++) {
                if (acervo[j].id == emprestimos[i].idLivro) {
                    acervo[j].numExemplares++;
                    break;
                }
            }
            // Remover o empréstimo do registro (opcional)
            emprestimos[i] = emprestimos[numEmprestimos - 1];
            numEmprestimos--;
            break;
        }
    }
}
