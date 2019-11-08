#include <agencia.h>
#include <gerente.h>

struct Cliente{
  char nome[255];
  char rg[12];
  char cpf[12];
  char senha[7];
  struct ContaCorrente contacorrente;
  struct ContaPoupanca contapoupanca;
  struct ContaEspecial contaespecial;
  
  struct Cliente *proximo;
};

struct Cliente cliente;


int mostraMenuCliente(){
    printf("----------Menu Usuario--------\n");
    printf("Digite [0] para sair\n");
    printf("Digite [1] para depositar\n");
    printf("Digite [2] para sacar\n");
    printf("Digite [3] para consultar saldo\n");
}

Cliente buscarCliente(){

    return cliente;
}