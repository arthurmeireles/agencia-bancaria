#include <stdio.h>
#include <string.h>
#ifndef AGENCIA_H
#define AGENCIA_H

struct Agencia{
  struct Cliente *inicio;
  struct Gerente *gerente;
};

  
//instancia a agencia
struct Agencia agencia;
#endif
