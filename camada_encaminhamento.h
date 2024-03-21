#ifndef CANADA_ENCAMINHAMENTO_H
#define CANADA_ENCAMINHAMENTO_H

#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <netinet/in.h>
#include <unistd.h>
#include <stdio.h>
#include <arpa/inet.h>
#include <time.h>

#include "camada_topologica.h"

void cria_tabelas(char tabela_encaminhamento[101][101][55], char tabela_curtos[101][2][55], char tabela_expedicao[101][2][5]);
void update_tabelas(Node* node,char tabela_encaminhamento[101][101][55], char tabela_curtos[101][2][55],char tabela_expedicao[101][2][5], int origem, int destino, char caminho[64]);
// void send_route(Node* node, char caminho[55], int destino);
// void send_all_routes(Node* node,char tabela_curtos[101][2][55]);
void imprimir_encaminhamento(char tabela_encaminhamento[101][101][55]);
void imprimir_curtos(char tabela_curtos[101][2][55]);
void imprimir_expedicao(char tabela_expedicao[101][2][5]);

#endif // CANADA_ENCAMINHAMENTO_H
