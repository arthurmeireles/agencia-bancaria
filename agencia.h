#include <stdio.h>
#include <string.h>
#ifndef AGENCIA_H
#define AGENCIA_H

struct Agencia{
  struct Cliente *inicio;
  struct Gerente *gerente;
};
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
  float chequeespecial;
};
  
//instancia a agencia
struct Agencia agencia;
#endif
