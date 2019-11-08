#include <stdio.h>
#include <string.h>
#include <gerente.h>

struct Agencia{
  struct Cliente *inicio;
  struct Gerente gerente;
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