#define MAX_USUARIOS 100

typedef struct {
    int id;
    char nome[100];
    char endereco[100];
    int numIdentificacao;
} Usuario;

Usuario usuarios[MAX_USUARIOS];
int numUsuarios = 0;

void cadastrarUsuario(char nome[], char endereco[], int numIdentificacao) {
    Usuario novoUsuario;
    novoUsuario.id = numUsuarios + 1;
    strcpy(novoUsuario.nome, nome);
    strcpy(novoUsuario.endereco, endereco);
    novoUsuario.numIdentificacao = numIdentificacao;
    usuarios[numUsuarios] = novoUsuario;
    numUsuarios++;
}
