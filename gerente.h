#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cliente.h"
#ifndef GERENTE_H
#define GERENTE_H

typedef struct Gerente
{
    char login[12];
    char senha[7];
} Gerente;

Gerente gerente = {"Coleguinha", "batata"};

//faz a comparação dos dados de entrada de login
//essa entrada vai ser feita via main
//função finalizada e testada
int loginGerente(char *login, char *senha)
{
    if (strcmp(login, gerente.login) == 0)
    {
        if (strcmp(senha, gerente.senha) == 0)
        {
            printf("Login realizado com sucesso!\n");
            int mostraMenu();
            return 0;
        }
        else
        {
            printf("Senha incorreta, tente novamente!");
            return 1;
        }
    }
    else
    {
        printf("Login inexistente, tente novamente. \n");
        return 1;
    }
}

//printa o menu do gerente
//função finalizada e testada
int mostraMenuGerente(void)
{
    printf("\n----------Menu Gerente--------\n");
    printf("Digite [0] para sair\n");
    printf("Digite [1] para Cadastrar um cliente\n");
    printf("Digite [2] para Excluir um cliente\n");
    printf("Digite [3] para editar clientes\n");
    printf("Digite [4] para listar os clientes da agência\n");
    printf("Digite [5] para ativar a conta\n");
    return 0;
}

//Solicita os dados do cliente e colocar em um struct cliente e retorna o cliente
//função finalizada
struct Cliente entradaDadosCliente()
{
    struct Cliente cliente;
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
    return cliente;
}

//ajusta a questao da lista ligada
int cadastraCliente(struct Cliente cliente)
{

    struct Cliente *novo;
    struct Cliente *ultimo;
    int retorno = 0;
    novo = (struct Cliente *)malloc(sizeof(struct Cliente));
    if (novo == NULL)
    {
        retorno = 1;
    }
    else
    {
        *novo = cliente;
        novo->proximo = NULL; //o novo é o fim da lista

        if (agencia.inicio == NULL)
        {
            agencia.inicio = novo;
        }
        else
        {
            ultimo = agencia.inicio;

            while (ultimo->proximo != NULL)
            {
                ultimo = ultimo->proximo;
            }
            novo->proximo = NULL;
            ultimo->proximo = novo;
        }
    }
    return retorno;
}

//função teoricamente finalizada e inutil
int ativaConta(struct Cliente cliente)
{
        cliente.contacorrente.ativo = 1;
        cliente.contacorrente.numeroConta = rand() % 10000;
        cliente.contacorrente.saldo = 0;
        printf("Sua conta foi ativada, o número é: %d \n", cliente.contacorrente.numeroConta);
        cliente.contapoupanca.ativo = 1;
        cliente.contapoupanca.numeroConta = rand() % 10000;
        cliente.contapoupanca.saldo = 0;
        printf("Sua conta foi ativada, o número é: %d \n", cliente.contapoupanca.numeroConta);
        cliente.contaespecial.ativo = 1;
        cliente.contaespecial.numeroConta = rand() % 10000;
                cliente.contaespecial.saldo = 0;
        printf("Sua conta foi ativada, o número é: %d \n", cliente.contaespecial.numeroConta);

}

//função finalizada e testada
int listaClientes()
{
    struct Cliente *atual;
    atual = agencia.inicio;
    printf("----Lista todos os clientes cadastrados--\n\n");
    while (atual != NULL)
    {
        printf("\n----------Lista de clientes----------\n");
        printf("Nome : %s \n", atual->nome);
        printf("CPF : %s \n", atual->cpf);
        printf("RG : %s \n", atual->rg);
        printf("Numero da conta corrente: %d\nSaldo da Conta corrente: %.2f\nStatus da conta corrente: %d\n", atual->contacorrente.numeroConta, atual->contacorrente.saldo, atual->contacorrente.ativo);
        printf("Numero da conta poupança: %d\nSaldo da Conta poupança: %.2f\nStatus da conta poupança: %d\n", atual->contapoupanca.numeroConta, atual->contapoupanca.saldo, atual->contapoupanca.ativo);
        printf("Numero da conta especial: %d\nSaldo da Conta especial: %.2f\nStatus da conta especial: %d\n", atual->contaespecial.numeroConta, atual->contaespecial.saldo, atual->contaespecial.ativo);
        printf("------------------------------------------\n");
        atual = atual->proximo;
    }
    return 0;
}
// função finalizada e testada
int editaCliente()
{
    printf("\n----------Edição de dados do cliente--------\n");
    struct Cliente *atual;
    atual = agencia.inicio;

    printf("Digite seu CPF:\n");
    char cpf[12];
    scanf("%s", &*cpf);
 
    while(atual != NULL){
        if(strcmp(cpf, atual->cpf) == 0){
            *atual = entradaDadosCliente(*atual);
        }
        atual = atual->proximo;
    }
    printf("Edição concluída.");
    return 0;
}

int excluirCliente()
{
    printf("\n----------Digite o CPF do cliente para exclui-lo----------\n");

    struct Cliente *atual;
    atual = agencia.inicio;

    struct Cliente *anterior;
    anterior = agencia.inicio;

    

    char entradaCPF[12];
    scanf("%s", &*entradaCPF);


    while (atual != NULL)
    {
        printf("entrou no while da função");

        if (strcmp(entradaCPF, atual->cpf) == 0)
        {   
            printf("entrou no if da função");
            atual->proximo = atual->proximo->proximo;
        }
        atual = atual->proximo;
    }
}
#endif