#include "agencia.h"
#ifndef CLIENTE_H
#define CLIENTE_H

struct ContaCorrente{
  int numeroConta;
  int ativo;
  float saldo;
};
struct ContaPoupanca
{
  int numeroConta;
  int ativo;
  float saldo;
};
struct ContaEspecial
{
  int numeroConta;
  int ativo;
  float saldo;
};
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
int depositarContaCorrente(){
    struct Cliente *atual;
    atual = agencia.inicio;

    printf("Digite seu CPF:\n");
    char cpf[12];
    scanf("%s", &*cpf);
 
    while(atual != NULL){
        if(strcmp(cpf, atual->cpf) == 0){
            float entradaValor;
            printf("Digite o valor a ser depositado!\n");
            scanf("%f", &entradaValor);
            atual->contacorrente.saldo = atual->contacorrente.saldo + entradaValor;
        }
        atual = atual->proximo;
    }
  return 0;
}
int depositarContaPoupanca(){
    struct Cliente *atual;
    atual = agencia.inicio;

    printf("Digite seu CPF:\n");
    char cpf[12];
    scanf("%s", &*cpf);
 
    while(atual != NULL){
        if(strcmp(cpf, atual->cpf) == 0){
            float entradaValor;
            printf("Digite o valor a ser depositado!\n");
            scanf("%f", &entradaValor);
            atual->contapoupanca.saldo = atual->contapoupanca.saldo + entradaValor;
        }
        atual = atual->proximo;
    }
  return 0;
}
int depositarContaEspecial(){
    struct Cliente *atual;
    atual = agencia.inicio;

    printf("Digite seu CPF:\n");
    char cpf[12];
    scanf("%s", &*cpf);
 
    while(atual != NULL){
        if(strcmp(cpf, atual->cpf) == 0){
            float entradaValor;
            printf("Digite o valor a ser depositado!\n");
            scanf("%f", &entradaValor);
            atual->contaespecial.saldo = atual->contaespecial.saldo + entradaValor;
        }
        atual = atual->proximo;
    }
  return 0;
}
int mostraMenuOpcoes(int entrada){
  if(entrada == 1){
    printf("\n------Depósito------\n");
    printf("Em qual tipo de conta quer depositar?\n");
    printf("Digite [1] para depositar na conta corrente\n");
    printf("Digite [2] para depositar na conta poupanca\n");
    printf("Digite [3] para depositar na conta especial\n");
  }
  if(entrada == 2){
    printf("\n------Saque------\n");
    printf("De qual tipo de conta quer sacar?\n");
    printf("Digite [1] para sacar da conta corrente\n");
    printf("Digite [2] para sacar da conta poupanca\n");
    printf("Digite [3] para sacar da conta especial\n");
  }
  if(entrada == 3){

  }
  if(entrada == 4){

  }

}
int consultarSaldo(char* cpf){
  struct Cliente *atual;
  atual= agencia.inicio;  
  
  while(atual != NULL){
    if (strcmp(cpf, atual->cpf) == 0){
      printf("Saldos referentes a este CPF");
      printf("Saldo da conta corrente: %.2f\n", atual->contacorrente.saldo);
      printf("Saldo da conta poupança: %.2f\n", atual->contapoupanca.saldo);
      printf("Saldo da conta especial: %.2f\n", atual->contaespecial.saldo);
    }
    atual = atual->proximo;
  }
}

int saqueContaCorrente(){
    struct Cliente *atual;
    atual = agencia.inicio;

    printf("Digite seu CPF:\n");
    char cpf[12];
    scanf("%s", &*cpf);
 
    while(atual != NULL){
        if(strcmp(cpf, atual->cpf) == 0){
        printf("Digite o valor a ser sacado: \n");
        float entradaValor;
        scanf("%f", &entradaValor);
        if (entradaValor <= atual->contacorrente.saldo)
        {
          printf("Digite sua senha");
          char entradaSenha[7];
          scanf("%s", &*entradaSenha);


          if (strcmp(entradaSenha, atual->senha) == 0){
            atual->contacorrente.saldo = atual->contacorrente.saldo - entradaValor;
            printf("Saque realizado\n");
          }
          else{
            printf("Senha incorreta!\n");
          }

        }
        else
        {
          printf("ERRO: voce não tem o valor disponivel\n");
        }
      
    }
    atual = atual->proximo;
  }
 
}

int saqueContaPoupanca(){
    struct Cliente *atual;
    atual = agencia.inicio;

    printf("Digite seu CPF:\n");
    char cpf[12];
    scanf("%s", &*cpf);
 
    while(atual != NULL){
        if(strcmp(cpf, atual->cpf) == 0){
        printf("Digite o valor a ser sacado: \n");
        float entradaValor;
        scanf("%f", &entradaValor);
        if (entradaValor <= atual->contapoupanca.saldo)
        {
          printf("Digite sua senha");
          char entradaSenha[7];
          scanf("%s", &*entradaSenha);


          if (strcmp(entradaSenha, atual->senha) == 0){
            atual->contapoupanca.saldo = atual->contapoupanca.saldo - entradaValor;
            printf("Saque realizado\n");
          }
          else{
            printf("Senha incorreta!\n");
          }

        }
        else
        {
          printf("ERRO: voce não tem o valor disponivel\n");
        }
      
    }
    atual = atual->proximo;
  }
}
int saqueContaEspecial(){
    struct Cliente *atual;
    atual = agencia.inicio;

    printf("Digite seu CPF:\n");
    char cpf[12];
    scanf("%s", &*cpf);
 
    while(atual != NULL){
        if(strcmp(cpf, atual->cpf) == 0){
          
          printf("Digite o valor a ser sacado: \n");
          float entradaValor;
          scanf("%f", &entradaValor);
          
          printf("Digite sua senha\n");
          char entradaSenha[7];
          scanf("%s", &*entradaSenha);


          if (strcmp(entradaSenha, atual->senha) == 0){
            atual->contaespecial.saldo = atual->contaespecial.saldo - entradaValor;
            printf("Saque realizado\n");
          }
          else{
            printf("Senha incorreta!\n");
          }
      
    }
    atual = atual->proximo;
  }
}
//recebe um CPF por entrada busca e retorna um objeto Cliente
struct Cliente buscarCliente(char* cpf){
  struct Cliente cliente;
  struct Cliente *atual;
  atual = agencia.inicio;

  while(atual != NULL){
    if (strcmp(cpf, atual->cpf) == 0){
      cliente = *atual;
    }
    atual = atual->proximo;
  } 
  return cliente;
}
#endif