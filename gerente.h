//Função de editar
// Função de Excluir
// Função de adicionar
// função de ativar a conta
//função para mostrar o menu
// função de receber dados para cadastro e edição


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <agencia.h>

struct Gerente{
  char login[12];
  char senha[7];
};


struct Gerente gerente;
agencia.gerente.login = "coleguinha";
agencia.gerente.senha = "batata";


//faz a comparação dos dados de entrada de login
//essa entrada vai ser feita via main
int loginGerente(char* login, char* senha){   
    if (strcmp(login, gerente.login) == 0){
        if (strcmp(senha, gerente.senha) == 0){
            printf("Login realizado com sucesso!");
            mostraMenu();
            return 0;
        }
        else{
            printf("Senha incorreta, tente novamente!");
            return 1;
        }
    }
    else{
        printf("Login inexistente, tente novamente. \n");
        return 1;
    }
}

//printa o menu do gerente
int mostraMenuGerente(){
    printf("\n----------Menu Gerente--------\n");
    printf("Digite [0] para sair\n");
    printf("Digite [1] para Cadastrar um cliente\n");
    printf("Digite [2] para Excluir um cliente\n");
    printf("Digite [3] para editar clientes\n");
    printf("Digite [4] para listar os clientes da agência\n");
    printf("Digite [5] para ativar a conta\n");
}
 
 //Solicita os dados do cliente e colocar em um struct cliente e retorna o cliente
 //função finalizada
struct Cliente entradaDadosCliente(struct Cliente cliente){

    printf("\n----------Cadastro de Clientes----------\n");

    printf("Digite o nome do cliente: \n");
    scanf("%s", &*cliente.nome);

    printf("Digite o rg do cliente: \n");
    scanf("%s", &*cliente.rg);

    printf("Digite o CPF do cliente: \n");
    scanf("%s", &*cliente.cpf);

    printf("Digite uma senha de até 6 digitos: \n");
    scanf("%s", &*cliente.senha);

    //inicializa o saldo em zero
    cliente.contacorrente.saldo = 0;
    cliente.contaespecial.saldo = 0;
    cliente.contapoupanca.saldo = 0;
    //0 quer dizer que nao está ativa
    cliente.contacorrente.ativo = 0;
    cliente.contaespecial.ativo = 0;
    cliente.contapoupanca.ativo = 0;

    return cliente;
}

//ajusta a questao da lista ligada
int cadastraCliente(struct Cliente cliente){

    struct Cliente *novo;
    struct Cliente *ultimo;
    int retorno = 0;
    novo = (struct Cliente*)malloc(sizeof(struct Cliente));
    if(novo== NULL){
        retorno = 1;
    }
    else{
        novo = cliente;
        novo->proximo = NULL;//o novo é o fim da lista

        if(inicio == NULL){
            agencia->inicio = novo;
        }
        else{
            ultimo = agencia->inicio;

        
            while (ultimo->proximo != NULL){
                ultimo = ultimo->proximo;
            }
            ultimo->proximo = novo;
        }
    }
    return retorno;
}

//função teoricamente finalizada
int ativaConta(struct Cliente cliente){
    printf("\n----------Ativação de contas----------\n");
    printf("Qual tipo de conta pretende ativar? \n");
    printf("Digite [1] para ativar a conta corrente \n");
    printf("Digite [2] para ativar a conta poupança \n");
    printf("Digite [3] para ativar a conta especial \n");
    int entrada;
    scanf("%d", &entrada);
                  
    if (entrada == 1){
        cliente.contacorrente.ativo = 1;
        cliente.contacorrente.numeroConta = rand() % 100000;
        printf("Sua conta foi ativada, o número é: %d \n", cliente.contacorrente.numeroConta);
    }
    if (entrada == 2){
        cliente.contapoupanca.ativo = 1;
        cliente.contapoupanca.numeroConta = rand() % 100000;
        printf("Sua conta foi ativada, o número é: %d \n", cliente.contapoupanca.numeroConta);
    }
    if (entrada == 3){
        cliente.contaespecial.ativo = 1;
        cliente.contaespecial.numeroConta = rand() % 100000;
        printf("Sua conta foi ativada, o número é: %d \n", cliente.contaespecial.numeroConta);
    }    
}


//função finalizada
int listaClientes(){
    struct Cliente *atual;
    atual = agencia.inicio;
    printf("----Lista todos os clientes cadastrados--\n\n");
    while (atual != NULL) {
        printf("\n----------Lista de clientes----------\n");
        printf("Nome : %s \n", atual->nome);
        printf("CPF : %s \n", atual->cpf);
        printf("RG : %s \n", atual->rg);
        printf("\n-------------------------------------------------\n");

        printf("Numero da conta corrente: %d\nSaldo da Conta corrente: %.2f\nStatus da conta corrente: %d\n", atual->contacorrente.numeroConta, atual->contacorrente.saldo, atual->contacorrente.ativo);
        printf("\n-------------------------------------------------\n");

        printf("Numero da conta poupança: %d\nSaldo da Conta poupança: %.2f\nStatus da conta poupança: %d\n", atual->contapoupanca.numeroConta, atual->contapoupanca.saldo, atual->contapoupanca.ativo);
        printf("\n-------------------------------------------------\n");

        printf("Numero da conta especial: %d\nSaldo da Conta especial: %.2f\nStatus da conta especial: %d\n", atual->contaespecial.numeroConta, atual->contaespecial.saldo, atual->contaespecial.ativo);
        printf("------------------------------------------\n");
        atual = atual->proximo;
    }
    return 0;
}

int editaCliente(){
    printf("\n----------Edição de dados do cliente--------\n");
    cliente = buscarCliente();
    entradaDadosCliente(cliente);
    printf("Edição concluída.");
}