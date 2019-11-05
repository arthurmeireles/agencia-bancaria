#include <stdio.h>
#include <string.h>

struct ContaCorrente{
  int numeroConta;
  int ativo;
  float saldo;
};
struct ContaPoupanca{
  int numeroConta;
  int ativo;
  float saldo;
};
struct ContaEspecial{
  int numeroConta;
  int ativo;
  float saldo;
  float chequeespecial;
};
struct Cliente{
  char nome[255];
  char rg[12];
  char cpf[12];
  char senha[7];
  struct ContaCorrente contacorrente;
  struct ContaPoupanca contapoupanca;
  struct ContaEspecial contaespecial;
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

//numero que uso para colocar nas contas
int numeroCoontas = 1000;

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
      int entrada = 1;
      while(entrada != 0){
        printf("----------Menu Usuario--------\n");
        printf("Digite [0] para sair\n");
        printf("Digite [1] para depositar\n");
        printf("Digite [2] para sacar\n");
        printf("Digite [3] para consultar saldo\n");

        scanf("%d", &entrada);
        if(entrada == 1){
          printf("------Depósito------");
          printf("Em qual tipo de conta quer depositar?");
          printf("Digite [1] para depositar na conta corrente\n");
          printf("Digite [2] para depositar na conta poupanca\n");
          printf("Digite [3] para depositar na conta especial\n");
          scanf("%d", &entrada);
          if(entrada == 1){
            printf("Digite o número da sua conta:\n");
            int entradaConta;
            scanf("%d", &entradaConta);
            for(int i=0; i<contadorClientes; i++){
              if(entradaConta==agencia.clientes[i].contacorrente.numeroConta){
                if(agencia.clientes[i].contacorrente.ativo == 1){
                  printf("Digite o valor a ser depositado: \n");
                  float entradaValor;
                  scanf("%f", &entradaValor);
                  agencia.clientes[i].contacorrente.saldo += entradaValor; 
                  printf("\nValor depositado\n");
                }
                else{
                  printf("Solicite o ativamento da conta antes de depositar");
                }
              }
            }
          }
          if(entrada == 2){
            printf("Digite o número da sua conta:\n");
            int entradaConta;
            scanf("%d", &entradaConta);
            for(int i=0; i<contadorClientes; i++){
              if(entradaConta==agencia.clientes[i].contapoupanca.numeroConta){
                if(agencia.clientes[i].contapoupanca.ativo == 1){
                  printf("Digite o valor a ser depositado: \n");
                  float entradaValor;
                  scanf("%f", &entradaValor);
                  agencia.clientes[i].contapoupanca.saldo += entradaValor; 
                  printf("\nValor depositado\n");
                }
                else{
                  printf("Solicite o ativamento da conta antes de depositar\n");
                }
              }
            }

          }
          if(entrada == 3){
            printf("Digite o número da sua conta:\n");
            int entradaConta;
            scanf("%d", &entradaConta);
            for(int i=0; i<contadorClientes; i++){
              if(entradaConta==agencia.clientes[i].contaespecial.numeroConta){
                if(agencia.clientes[i].contaespecial.ativo == 1){
                  printf("Digite o valor a ser depositado: \n");
                  float entradaValor;
                  scanf("%f", &entradaValor);
                  agencia.clientes[i].contaespecial.saldo += entradaValor; 
                  printf("\nValor depositado\n");
                }
                else{
                  printf("Solicite o ativamento da conta antes de depositar\n");
                }
              }
            }
          }
        }
        if(entrada == 2){
          printf("------Saque------");
          printf("De qual tipo de conta quer sacar?");
          printf("Digite [1] para sacar da conta corrente\n");
          printf("Digite [2] para sacar da conta poupanca\n");
          printf("Digite [3] para sacar da conta especial\n");

          scanf("%d", &entrada);
          if(entrada == 1){
            printf("Digite o número da sua conta:\n");
            int entradaConta;
            scanf("%d", &entradaConta);
            for(int i=0; i<contadorClientes; i++){
              if(entradaConta==agencia.clientes[i].contacorrente.numeroConta){
                if(agencia.clientes[i].contacorrente.ativo == 1){
                  printf("Digite o valor a ser sacado: \n");
                  float entradaValor;
                  scanf("%f", &entradaValor);
                  if (entradaValor<=agencia.clientes[i].contacorrente.saldo){
                    agencia.clientes[i].contacorrente.saldo= agencia.clientes[i].contacorrente.saldo - entradaValor;
                    printf("Saque realizado");
                  }
                  else{
                    printf("ERRO: voce não tem o valor disponivel");
                  }
                }
              }
            }
          }

          if(entrada == 2){
            printf("Digite o número da sua conta:\n");
            int entradaConta;
            scanf("%d", &entradaConta);
            for(int i=0; i<contadorClientes; i++){
              if(entradaConta==agencia.clientes[i].contapoupanca.numeroConta){
                if(agencia.clientes[i].contapoupanca.ativo == 1){
                  printf("Digite o valor a ser sacado: \n");
                  float entradaValor;
                  scanf("%f", &entradaValor);
                  if (entradaValor<=agencia.clientes[i].contapoupanca.saldo){
                    agencia.clientes[i].contapoupanca.saldo= agencia.clientes[i].contapoupanca.saldo - entradaValor;
                    printf("Saque realizado");
                  }
                  else{
                    printf("ERRO: voce não tem o valor disponivel");
                  }
                }
              }
            }
          }

          if(entrada == 3){
            printf("Digite o número da sua conta:\n");
            int entradaConta;
            scanf("%d", &entradaConta);
            for(int i=0; i<contadorClientes; i++){
              if(entradaConta==agencia.clientes[i].contaespecial.numeroConta){
                if(agencia.clientes[i].contaespecial.ativo == 1){
                  printf("Digite o valor a ser sacado: \n");
                  float entradaValor;
                  scanf("%f", &entradaValor);
                  agencia.clientes[i].contaespecial.saldo= agencia.clientes[i].contaespecial.saldo - entradaValor;
                  printf("Saque realizado");
                }
              }
            }
          }


        }
        if(entrada == 3){
          printf("\n-----Consulta de saldo-----\n");
          printf("Digite seu CPF: \n");
          char entradaCPF[12];
          scanf("%s", &*entradaCPF);
          for(int i = 0; i<contadorClientes; i++){
            if(strcmp(entradaCPF, agencia.clientes[i].cpf)==0){
              printf("Saldos referentes a este CPF");
              printf("Saldo da conta corrente: %.2f\n", agencia.clientes[i].contacorrente.saldo);
              printf("Saldo da conta poupança: %.2f\n", agencia.clientes[i].contapoupanca.saldo);
              printf("Saldo da conta especial: %.2f\n", agencia.clientes[i].contaespecial.saldo);
            }
          }
        }
      }
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

            int entradaMenuGerente = 1;

            while(entradaMenuGerente != 0){
              printf("\n----------Menu Gerente--------\n");
              printf("Digite [0] para sair\n");
              printf("Digite [1] para Cadastrar um cliente\n");
              printf("Digite [2] para Excluir um cliente\n");
              printf("Digite [3] para editar clientes\n");
              printf("Digite [4] para listar os clientes da agência\n");
              printf("Digite [5] para ativar a conta\n");

              scanf("%d", &entradaMenuGerente);

              if(entradaMenuGerente == 1){
                int feito = 0;
                for(int i = 0; i<=contadorClientes; i++){
                  if(strcmp(agencia.clientes[i].cpf, "00000000000")==0){
                    printf("\n----------Cadastro de Clientes----------\n");
                    printf("Digite o nome do cliente: \n");
                    scanf("%s", &*agencia.clientes[contadorClientes].nome);    
                    printf("Digite o rg do cliente: \n");
                    scanf("%s", &*agencia.clientes[contadorClientes].rg);
                    printf("Digite o CPF do cliente: \n");
                    scanf("%s", &*agencia.clientes[contadorClientes].cpf);
                    printf("Digite uma senha de até 6 digitos: \n");
                    scanf("%s", &*agencia.clientes[contadorClientes].senha);
                    printf("Cliente cadastrado\n");
                    agencia.clientes[contadorClientes].contacorrente.saldo = 0;
                    agencia.clientes[contadorClientes].contaespecial.saldo = 0;
                    agencia.clientes[contadorClientes].contapoupanca.saldo = 0;
                    //0 quer dizer que nao está ativa
                    agencia.clientes[contadorClientes].contacorrente.ativo = 0;
                    agencia.clientes[contadorClientes].contaespecial.ativo = 0;
                    agencia.clientes[contadorClientes].contapoupanca.ativo = 0;
                    feito++;
                  }
                }
                if(feito == 0){
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
                  printf("%d", contadorClientes);

                  agencia.clientes[contadorClientes].contacorrente.saldo = 0;
                  agencia.clientes[contadorClientes].contaespecial.saldo = 0;
                  agencia.clientes[contadorClientes].contapoupanca.saldo = 0;
                  //0 quer dizer que nao está ativa
                  agencia.clientes[contadorClientes].contacorrente.ativo = 0;
                  agencia.clientes[contadorClientes].contaespecial.ativo = 0;
                  agencia.clientes[contadorClientes].contapoupanca.ativo = 0;
                  printf("Cliente cadastrado\n");
                }
              }
              if(entradaMenuGerente == 4){
                printf("\n----------Lista de clientes----------\n");
                printf("%d", contadorClientes);
                for(int i = 0; i< contadorClientes; i++){
                  printf("Nome : %s \n", agencia.clientes[i].nome);
                  printf("CPF : %s \n", agencia.clientes[i].cpf);
                  printf("RG : %s \n", agencia.clientes[i].rg);
                  printf("-------------------------------------------------");
                  
                  printf("Numero da conta corrente: %d\nSaldo da Conta corrente: %.2f\nStatus da conta corrente: %d\n", agencia.clientes[i].contacorrente.numeroConta, agencia.clientes[i].contacorrente.saldo, agencia.clientes[i].contacorrente.ativo);
                  printf("-------------------------------------------------");
                  
                  printf("Numero da conta poupança: %d\nSaldo da Conta poupança: %.2f\nStatus da conta poupança: %d\n", agencia.clientes[i].contapoupanca.numeroConta, agencia.clientes[i].contapoupanca.saldo, agencia.clientes[i].contapoupanca.ativo);
                  printf("-------------------------------------------------");
                  
                  printf("Numero da conta especial: %d\nSaldo da Conta especial: %.2f\nStatus da conta especial: %d\n", agencia.clientes[i].contaespecial.numeroConta, agencia.clientes[i].contaespecial.saldo, agencia.clientes[i].contaespecial.ativo);



                  printf("------------------------------------------\n");
                }
              }
              if(entradaMenuGerente == 2){
                printf("\n----------Digite o CPF do cliente para exclui-lo----------\n");
                char entradaCPF[12];
                scanf("%s", &*entradaCPF);
                for (int i = 0; i<contadorClientes; i++){
                  if(strcmp(entradaCPF, agencia.clientes[i].cpf) == 0){
                    strcpy(agencia.clientes[i].nome,"Livre");
                    strcpy(agencia.clientes[i].cpf,"00000000000");
                    strcpy(agencia.clientes[i].rg,"000000000");
                    strcpy(agencia.clientes[i].senha,"000000");
                    printf("Usuario apagado com sucesso\n");
                  }
                }

              }
              if(entradaMenuGerente == 3){
                printf("\n----------Edição de dados do cliente--------\n");
                printf("Digite o CPF atual do cliente: \n");
                char entradaCPF[12];
                scanf("%s", &*entradaCPF);
                for (int i = 0; i<contadorClientes; i++){
                  if(strcmp(entradaCPF, agencia.clientes[i].cpf) == 0){
                    printf("Digite o novo CPF: \n");
                    scanf("%s", &*agencia.clientes[i].cpf);

                    printf("Digite o novo nome: \n");
                    scanf("%s", &*agencia.clientes[i].nome);

                    printf("Digite o novo RG: \n");
                    scanf("%s", &*agencia.clientes[i].rg);

                    printf("Digite a nova senha: \n");
                    scanf("%s", &*agencia.clientes[i].senha);

                    printf("Atualização dos dados concluida");

                  }
                }
              }
              if(entradaMenuGerente == 5){
                printf("\n----------Ativação de contas----------\n");
                printf("Digite seu CPF:\n");

                char entradaCPF[12];
                scanf("%s", &*entradaCPF);

                for (int i = 0; i<contadorClientes; i++){
                  if(strcmp(entradaCPF, agencia.clientes[i].cpf) == 0){
                    printf("Qual tipo de conta pretende ativar? \n");
                    printf("Digite [1] para ativar a conta corrente \n");
                    printf("Digite [2] para ativar a conta poupança \n");
                    printf("Digite [3] para ativar a conta especial \n");
                    int entrada;
                    scanf("%d", &entrada);
                      if(entrada == 1){
                        agencia.clientes[i].contacorrente.ativo = 1;
                        agencia.clientes[i].contacorrente.numeroConta = numeroCoontas++;
                        numeroCoontas++;
                        printf("Sua conta foi ativada, o número é: %d", agencia.clientes[i].contacorrente.numeroConta);
                      }
                      if(entrada == 2){
                        agencia.clientes[i].contapoupanca.ativo = 1;
                        agencia.clientes[i].contapoupanca.numeroConta = numeroCoontas++;
                        numeroCoontas++;
                        printf("Sua conta foi ativada, o número é: %d", agencia.clientes[i].contapoupanca.numeroConta);
                      }
                      if(entrada == 3){
                        agencia.clientes[i].contaespecial.ativo = 1;
                        agencia.clientes[i].contaespecial.numeroConta = numeroCoontas++;
                        numeroCoontas++;
                        printf("Sua conta foi ativada, o número é: %d", agencia.clientes[i].contaespecial.numeroConta);
                      }
                    
                  }
                }
              }
            }//fecha o while do gerente
          }//fecha o if de comparação da senha
          else{
            printf("senha incorreta!");
          }
        }//fecha if de comparação do login
        else{
          printf("Login inexistente: \n");
        }
    }
  }
//finaliza o sistema
  return 0;
}
