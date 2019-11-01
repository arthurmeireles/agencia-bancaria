#include <stdio.h>

struct Cliente{
  char nome[255];
  char cpf[11];
  float saldo;
  int ContaCorrente;
  int ContaESpecial;
  char senha[10];
};

struct Gerente{
  char nome[11];
  int login;
  char senha;
};

struct Agencia{
  Gerente gerente[1];
  Cliente clientes[100];
};

int main(void) {
  struct Agencia agencia;
  struct Gerente gerente;
  gerente.nome[11] = "Coleguinha";
  gerente.login = 12345;
  gerente.senha[]
  int contadorClientes = 0; 

  while(1>0){
    printf("Deseja entrar como Gerente ou como Cliente? \nDigite [1] para entrar como cliente.\nDigite [2] para entrar como cliente.");

    int entradaUser;

    scanf("%d", &entradaUser);

    if(entradaUser == 1){
      
      printf("Digite seu login");
      int loginEntrada;
      scanf("%d", &loginEntrada);
        
        if(loginEntrada == gerente.login){

          printf("Digite sua senha");
          char senhaEntrada[6];
          scanf("%s", &senhaEntrada);

          if(senhaEntrada == gerente.senha){
            printf("----------Menu Gerente--------\n");
            printf("Digite [1] para Cadastrar um cliente\n");
            printf("Digite [2] para Excluir um cliente\n");
            printf("Digite [3] para consultar saldo\n");

            int entradaMenuGerente;
            scanf("%d", &entradaMenuGerente);
            

            if(entradaMenuGerente == 01){
              printf("Digite o nome do cliente:\n")
              agencia.cliente[contadorClientes]              
            }
          }
        }
    }

    if(entradaUser == 2){
      printf("----------Menu Usuario--------\n");
      printf("Digite [1] para depositar\n");
      printf("Digite [2] para sacar\n");
      printf("Digite [3] para consultar saldo\n");
    }

  }

  return 0;
}
