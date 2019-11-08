#include <stdio.h>
#include <string.h>
#include <gerente.h>
#include <agencia.h>
#include <cliente.h>



int main(void){

  //numero que uso para colocar nas contas
  int numeroCoontas = 1000;


  //inicia o contador de clientes da agencia
  int contadorClientes = 0;

  // cria o ciclo da agencia
  while (1>0){
    printf("Deseja entrar como Gerente ou como Cliente? \nDigite [1] para entrar como gerente.\nDigite [2] para entrar como cliente.\n");

    // pega a opção de entrada
    int entradaUser;
    scanf("%d", &entradaUser);

    if (entradaUser == 2)
    {
      int entradaDeposito;
      int entrada = 1;
      while (entrada != 0)
      {
  
        scanf("%d", &entrada);
        if (entrada == 1)
        {
          printf("\n------Depósito------\n");
          printf("Em qual tipo de conta quer depositar?\n");
          printf("Digite [1] para depositar na conta corrente\n");
          printf("Digite [2] para depositar na conta poupanca\n");
          printf("Digite [3] para depositar na conta especial\n");
          scanf("%d", &entradaDeposito);
          if (entradaDeposito == 1)
          {
            printf("Digite o número da sua conta:\n");
            int entradaConta;

            scanf("%d", &entradaConta);

            struct Cliente *atual;
            atual = agencia.inicio;

            for (atual.anterior == null)
            {
              if (entradaConta == atual->contacorrente.numeroConta)
              {
                if (atual->contacorrente.ativo == 1)
                {
                  printf("Digite o valor a ser depositado: \n");
                  float entradaValor;
                  scanf("%f", &entradaValor);
                  agencia.clientes[i].contacorrente.saldo += entradaValor;
                  printf("\nValor depositado\n");
                }
                else
                {
                  printf("Solicite o ativamento da conta antes de depositar\n");
                }
              }
            }
          }
          if (entradaDeposito == 2)
          {
            printf("Digite o número da sua conta:\n");
            int entradaConta;
            scanf("%d", &entradaConta);
            for (int i = 0; i < contadorClientes; i++)
            {
              if (entradaConta == agencia.clientes[i].contapoupanca.numeroConta)
              {
                if (agencia.clientes[i].contapoupanca.ativo == 1)
                {
                  printf("Digite o valor a ser depositado: \n");
                  float entradaValor;
                  scanf("%f", &entradaValor);
                  agencia.clientes[i].contapoupanca.saldo += entradaValor;
                  printf("\nValor depositado\n");
                }
                else
                {
                  printf("Solicite o ativamento da conta antes de depositar\n");
                }
              }
            }
          }
          if (entradaDeposito == 3)
          {
            printf("Digite o número da sua conta:\n");
            int entradaConta;
            scanf("%d", &entradaConta);
            for (int i = 0; i < contadorClientes; i++)
            {
              if (entradaConta == agencia.clientes[i].contaespecial.numeroConta)
              {
                if (agencia.clientes[i].contaespecial.ativo == 1)
                {
                  printf("Digite o valor a ser depositado: \n");
                  float entradaValor;
                  scanf("%f", &entradaValor);
                  agencia.clientes[i].contaespecial.saldo += entradaValor;
                  printf("\nValor depositado\n");
                }
                else
                {
                  printf("Solicite o ativamento da conta antes de depositar\n");
                }
              }
            }
          }
        }
        if (entrada == 2)
        {
          printf("\n------Saque------\n");
          printf("De qual tipo de conta quer sacar?\n");
          printf("Digite [1] para sacar da conta corrente\n");
          printf("Digite [2] para sacar da conta poupanca\n");
          printf("Digite [3] para sacar da conta especial\n");
          int entradaSaque;
          scanf("%d", &entradaSaque);
          if (entradaSaque == 1)
          {
            printf("Digite o número da sua conta:\n");
            int entradaConta;
            scanf("%d", &entradaConta);
            for (int i = 0; i < contadorClientes; i++)
            {
              if (entradaConta == agencia.clientes[i].contacorrente.numeroConta)
              {
                if (agencia.clientes[i].contacorrente.ativo == 1)
                {
                  printf("Digite o valor a ser sacado: \n");
                  float entradaValor;
                  scanf("%f", &entradaValor);
                  if (entradaValor <= agencia.clientes[i].contacorrente.saldo)
                  {
                    agencia.clientes[i].contacorrente.saldo = agencia.clientes[i].contacorrente.saldo - entradaValor;
                    printf("Saque realizado\n");
                  }
                  else
                  {
                    printf("ERRO: voce não tem o valor disponivel\n");
                  }
                }
              }
            }
          }

          if (entradaSaque == 2)
          {
            printf("Digite o número da sua conta:\n");
            int entradaConta;
            scanf("%d", &entradaConta);
            for (int i = 0; i < contadorClientes; i++)
            {
              if (entradaConta == agencia.clientes[i].contapoupanca.numeroConta)
              {
                if (agencia.clientes[i].contapoupanca.ativo == 1)
                {
                  printf("Digite o valor a ser sacado: \n");
                  float entradaValor;
                  scanf("%f", &entradaValor);
                  if (entradaValor <= agencia.clientes[i].contapoupanca.saldo)
                  {
                    agencia.clientes[i].contapoupanca.saldo = agencia.clientes[i].contapoupanca.saldo - entradaValor;
                    printf("Saque realizado\n");
                  }
                  else
                  {
                    printf("ERRO: voce não tem o valor disponivel \n");
                  }
                }
              }
            }
          }

          if (entradaSaque == 3)
          {
            printf("Digite o número da sua conta:\n");
            int entradaConta;
            scanf("%d", &entradaConta);
            for (int i = 0; i < contadorClientes; i++)
            {
              if (entradaConta == agencia.clientes[i].contaespecial.numeroConta)
              {
                if (agencia.clientes[i].contaespecial.ativo == 1)
                {
                  printf("Digite o valor a ser sacado: \n");
                  float entradaValor;
                  scanf("%f", &entradaValor);
                  agencia.clientes[i].contaespecial.saldo = agencia.clientes[i].contaespecial.saldo - entradaValor;
                  printf("Saque realizado \n");
                }
              }
            }
          }
        }
        if (entrada == 3)
        {
          printf("\n-----Consulta de saldo-----\n");
          printf("Digite seu CPF: \n");
          char entradaCPF[12];
          scanf("%s", &*entradaCPF);
          for (int i = 0; i < contadorClientes; i++)
          {
            if (strcmp(entradaCPF, agencia.clientes[i].cpf) == 0)
            {
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
    if (entradaUser == 1){





      int entradaMenuGerente = 1;
          while (entradaMenuGerente != 0){
            scanf("%d", &entradaMenuGerente);

            if (entradaMenuGerente == 1){
              //colocar a função
            }
            if (entradaMenuGerente == 4){
             listaClientes(); 
            }
            if (entradaMenuGerente == 2)
            {
              printf("\n----------Digite o CPF do cliente para exclui-lo----------\n");
              char entradaCPF[12];
              scanf("%s", &*entradaCPF);
              for (int i = 0; i < contadorClientes; i++)
              {
                if (strcmp(entradaCPF, agencia.clientes[i].cpf) == 0)
                {
                  strcpy(agencia.clientes[i].nome, "Livre");
                  strcpy(agencia.clientes[i].cpf, "00000000000");
                  strcpy(agencia.clientes[i].rg, "000000000");
                  strcpy(agencia.clientes[i].senha, "000000");
                  printf("Usuario apagado com sucesso\n");
                }
              }
            }

            if (entradaMenuGerente == 3){
              //função
            }
            
            if (entradaMenuGerente == 5){
              //funçao
            }

          } //fecha o while do gerente
        
        }   //fecha o if de comparação da senha
        else
        {
          printf("senha incorreta! \n");
        }
      } //fecha if de comparação do login
    }
  }
  //finaliza o sistema
  return 0;
}