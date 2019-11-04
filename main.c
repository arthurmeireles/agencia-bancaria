#include <stdio.h>
#include <string.h>

struct Conta{
  char numeroConta[7];
  int ativo;
  float saldo;
  char tipoConta[20];
};
struct Cliente{
  char nome[255];
  char rg[12];
  char cpf[12];
  char senha[7];
  struct Conta contas[3];
  int contador;
};

struct Gerente{
  char login[6];
  char senha[7];
};

struct Agencia{
  struct Gerente gerente;
  struct Cliente clientes[100];
};

int main(void) {

//instancia a agencia
  struct Agencia agencia;
  strcpy(agencia.gerente.login, "12345");
  strcpy(agencia.gerente.senha, "batata");

//inicia o contador de clientes da agencia
  int contadorClientes = 0; 

// cria o ciclo da agencia
  while(1>0){
    printf("Deseja entrar como Gerente ou como Cliente? \nDigite [1] para entrar como gerente.\nDigite [2] para entrar como cliente.\n");
    
    // pega a opção de entrada
    int entradaUser;
    scanf("%d", &entradaUser);


    if(entradaUser == 2){
      printf("----------Menu Usuario--------\n");
      printf("Digite [1] para depositar\n");
      printf("Digite [2] para sacar\n");
      printf("Digite [3] para consultar saldo\n");
    }

    //entrada como gerente
    if(entradaUser == 1){
      
      printf("Digite seu login: \n");
      
      char loginEntrada[6];
      
      scanf("%s", &*loginEntrada);

      if(strcmp(loginEntrada, agencia.gerente.login) == 0){
          
          printf("Digite sua senha: \n");
          char senhaEntrada[11];
          scanf("%s", &*senhaEntrada);


          if(strcmp(senhaEntrada, agencia.gerente.senha) == 0){
            printf("\n----------Menu Gerente--------\n");
            printf("Digite [1] para Cadastrar um cliente\n");
            printf("Digite [2] para Excluir um cliente\n");
            printf("Digite [3] para consultar saldo\n");
            printf("Digite [4] para listar os clientes da agência\n");

            int entradaMenuGerente;
            scanf("%d", &entradaMenuGerente);
            

            if(entradaMenuGerente == 01){
              printf("\n----------Cadastro de Clientes----------\n");
             
              printf("Digite o nome do cliente: \n");
              scanf("%s", &*agencia.clientes[contadorClientes].nome);    

              printf("Digite o rg do cliente: \n");
              scanf("%s", &*agencia.clientes[contadorClientes].rg);

              printf("Digite o CPF do cliente: \n");
              scanf("%s", &*agencia.clientes[contadorClientes].cpf);

              printf("Digite uma senha de até 6 digitos: \n");
              scanf("%s", &*agencia.clientes[contadorClientes].senha);
              contadorClientes++;
            }

            if(entradaMenuGerente == 4){
              printf("\n----------Lista de clientes----------\n");
              for(int i = 0; i< contadorClientes; i++){
                printf("Nome : %s\n", agencia.clientes[i].nome);
                printf("CPF : %s\n", agencia.clientes[i].cpf);
                printf("RG : %s\n", agencia.clientes[i].rg);
                printf("Nome : %s\n", agencia.clientes[i].nome);
                printf("-------------------------------\n");
              }
              if(entradaMenuGerente == 2){
                  printf("\n----------Digite o CPF do cliente\n");
                  char entradaCPF[12];
                  scanf("%s", &entradaCPF[12]);
              }
            }

          //fecha o if de comparação da senha
          }
        }
      
        else{
          printf("Login inexistente: \n");
        }

//fecha o if de comparação do login 
    }



  }

//finaliza o sistema
  return 0;
}
