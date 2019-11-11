#include <stdio.h>
#include <string.h>
#include "gerente.h"
#include "agencia.h"
#include "cliente.h"

int main(void)
{
  // cria o ciclo da agencia
  while (1 > 0)
  {
    printf("Deseja entrar como Gerente ou como Cliente? \n");
    printf("Digite [1] para entrar como gerente.\n");
    printf("Digite [2] para entrar como cliente.\n");


    // pega a opção de entrada
    int entradaUser;
    scanf("%d", &entradaUser);

    if (entradaUser == 1)
    {
      char login[12];
      char senha[7];
      printf("Digite seu login:\n");
      scanf("%s", &*login);
      printf("Digite seu senha:\n");
      scanf("%s", &*senha);

      int retorno = loginGerente(login, senha);
      
      if(retorno == 0){
        int entradaMenuGerente = 1;
        while (entradaMenuGerente != 0)
        {
          mostraMenuGerente();

          scanf("%d", &entradaMenuGerente);

          //função finalizada com sucesso
          if (entradaMenuGerente == 1)
          {
            struct Cliente cliente;
            cliente = entradaDadosCliente(cliente);
            cadastraCliente(cliente);
            printf("Cadastro realizado com sucesso!");
          }

          //função finalizada com sucesso
          if (entradaMenuGerente == 4)
          { 
            listaClientes();
          }

          if (entradaMenuGerente == 2)
          {
            excluirCliente();
          }

          if (entradaMenuGerente == 3)
          {
            editaCliente();
          }

          if (entradaMenuGerente == 5)
          {
            //funçao
          }

        } //fecha o while do gerente
      }
    } //fecha o if de comparação da senha

    // if (entradaUser == 2)
    // {
    //   int entradaDeposito;
    //   int entrada = 1;
    //   while (entrada != 0)
    //   {

    //     scanf("%d", &entrada);
    //     if (entrada == 1)
    //     {

    //       mostraMenuOpcoes(entrada);

    //       scanf("%d", &entradaDeposito);
    //       if (entradaDeposito == 1)
    //       {
    //         depositarContaCorrente();
    //       }
    //       if (entradaDeposito == 2)
    //       {
    //         depositarContaPoupanca();
    //       }
    //       if (entradaDeposito == 3)
    //       {
    //         depositarContaEspecial();
    //       }
    //     }
    //     if (entrada == 2)
    //     {
    //       mostraMenuOpcoes(entrada);

    //       int entradaSaque;
    //       scanf("%d", &entradaSaque);
    //       if (entradaSaque == 1)
    //       {
    //         saqueContaCorrente();
    //       }

    //       if (entradaSaque == 2)
    //       {

    //       }

    //       if (entradaSaque == 3)
    //       {
    //         saqueContaEspecial();
    //       }
    //     }
    //     if (entrada == 3)
    //     { //função finalizada
    //       printf("\n-----Consulta de saldo-----\n");
    //       printf("Digite seu CPF: \n");
    //       char entradaCPF[12];
    //       scanf("%s", &*entradaCPF);
    //       consultarSaldo(entradaCPF);
    //     }
    //   }
    // }
    //entrada como gerente
  } //fecha if de comparação do login
  //finaliza o sistema
  return 0;
}