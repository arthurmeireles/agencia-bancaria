#include <stdio.h>
#include <string.h>

struct Cliente{
  char nome[255];
  char cpf[11];
  float saldo;
  int ContaCorrente;
  int ContaESpecial;
  char senha[10];
};

struct Gerente{
  int login;
  char senha;
};

struct Agencia{
  struct Gerente gerente;
  struct Cliente clientes[100];
};

int main(void) {

  struct Agencia agencia;
  agencia.gerente.login = 12345;
  agencia.gerente.senha = "batata";



  int contadorClientes = 0; 

  while(1>0){
    printf("Deseja entrar como Gerente ou como Cliente? \nDigite [1] para entrar como gerente.\nDigite [2] para entrar como cliente.\n");

    int entradaUser;

    scanf("%d", &entradaUser);

    if(entradaUser == 1){
      
      printf("Digite seu login: \n");
      int loginEntrada;
      scanf("%d", &loginEntrada);
        
        if(loginEntrada == agencia.gerente.login){

          printf("Digite sua senha: \n");

          char senhaEntrada[7];
          scanf("%s", &senhaEntrada);

          printf("%s", senhaEntrada);

          printf("%d", strcmp(senhaEntrada, agencia.gerente.senha));


          // if(strcmp(senhaEntrada, agencia.gerente.senha) == 0){
          //   printf("----------Menu Gerente--------\n");
          //   printf("Digite [1] para Cadastrar um cliente\n");
          //   printf("Digite [2] para Excluir um cliente\n");
          //   printf("Digite [3] para consultar saldo\n");

          //   int entradaMenuGerente;
          //   scanf("%d", &entradaMenuGerente);
            

            // if(entradaMenuGerente == 01){
            //   printf("Digite o nome do cliente: \n");
            //   agencia.clientes[contadorClientes];              
            // }
          //}
        }
        else{
            printf("Login inexistente: \n");
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
