void menuPrincipal() {
    int opcao;
    do {
        printf("Menu Principal:\n");
        printf("1. Cadastrar Livro\n");
        printf("2. Cadastrar Usuário\n");
        printf("3. Emprestar Livro\n");
        printf("4. Devolver Livro\n");
        printf("5. Gerar Relatório de Livros Emprestados\n");
        printf("6. Gerar Histórico de Empréstimos\n");
        printf("7. Gerar Estatísticas do Acervo\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1: {
                char titulo[100], autor[100];
                int anoPublicacao, numExemplares;
                printf("Título: ");
                scanf("%s", titulo);
                printf("Autor: ");
                scanf("%s", autor);
                printf("Ano de Publicação: ");
                scanf("%d", &anoPublicacao);
                printf("Número de Exemplares: ");
                scanf("%d", &numExemplares);
                cadastrarLivro(titulo, autor, anoPublicacao, numExemplares);
                break;
            }
            case 2: {
                char nome[100], endereco[100];
                int numIdentificacao;
                printf("Nome: ");
                scanf("%s", nome);
                printf("Endereço: ");
                scanf("%s", endereco);
                printf("Número de Identificação: ");
                scanf("%d", &numIdentificacao);
                cadastrarUsuario(nome, endereco, numIdentificacao);
                break;
            }
            case 3: {
                int idLivro, idUsuario;
                char dataEmprestimo[11];
                printf("ID do Livro: ");
                scanf("%d", &idLivro);
                printf("ID do Usuário: ");
                scanf("%d", &idUsuario);
                printf("Data de Empréstimo (dd/mm/yyyy): ");
                scanf("%s", dataEmprestimo);
                emprestarLivro(idLivro, idUsuario, dataEmprestimo);
                break;
            }
            case 4: {
                int idEmprestimo;
                printf("ID do Empréstimo: ");
                scanf("%d", &idEmprestimo);
                devolverLivro(idEmprestimo);
                break;
            }
            case 5:
                gerarRelatorioLivrosEmprestados();
                break;
            case 6: {
                int idUsuario;
                printf("ID do Usuário: ");
                scanf("%d", &idUsuario);
                gerarHistoricoEmprestimos(idUsuario);
                break;
            }
            case 7:
                gerarEstatisticasAcervo();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 0);
}
