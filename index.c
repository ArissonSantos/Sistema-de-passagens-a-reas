#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include "funcoes.h"

int main() {
    setlocale(LC_ALL, "Portuguese");

    int escolha;
    int escolhaAdmin;
    int companhia;
    																													
    do {
        system("cls");
        printf("Bem-vindo! Escolha uma op��o:\n");
        printf("1. Cliente\n");
        printf("2. Administrador\n");
        printf("3. Sair\n");
        printf("Escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                system("cls");
                printf("Voc� entrou como cliente.\n");
                do {
                    printf("Escolha a companhia a�rea para comprar suas passagens:\n");
                    printf("1. Gol\n");
                    printf("2. LATAM\n");
                    printf("3. Azul\n");
                    printf("4. Voltar para o menu anterior\n");
                    printf("Escolha: ");
                    scanf("%d", &companhia);

                    switch (companhia) {
                        case 1:
                            comprarPassagensGol();
                            break;

                        case 2:
                            comprarPassagensLatam();
                            break;

                        case 3:
                            comprarPassagensAzul();
                            break;

                        case 4:
                            printf("Voltando para o menu anterior.\n");
                            break;

                        default:
                            printf("Op��o inv�lida para companhia a�rea.\n");
                    }
                } while (companhia != 4);
                break;

            case 2:

                do {
                	system("cls");
                	printf("Voc� entrou como administrador.\n");
                    printf("\nOp��es do administrador:\n");
                    printf("1. Listar todos os tipos de servi�os em ordem crescente de valor\n");
                    printf("2. Listar todos os prestadores de servi�os\n");
                    printf("3. Listar os prestadores de servi�o de um determinado tipo\n");
                    printf("4. Listar todas os clientes em ordem crescente\n");
                    printf("5. Listar os clientes de um determinado estado\n");
                    printf("6. Apresentar o(s) estado(s) onde est� registrado o servi�o mais caro\n");
                    printf("7. Retornar ao menu anterior\n");
                    printf("Escolha: ");
                    scanf("%d", &escolhaAdmin);

                    switch (escolhaAdmin) {
                        case 1:
                        	system("cls");
                            listarTiposServicosOrdemCrescente();
                            getch();
                            break;

                        case 2:
                        	system("cls");
                            listarPrestadoresServicos();
                            getch();
                            break;

                        case 3:
                        	system("cls");
                            listarPrestadoresServicoTipoEspecifico();
                            getch();
                            break;

                        case 4:
                        	system("cls");
                            listarClientesOrdemCrescente();
                            getch();
                            break;

					   	case 5:
					   		system("cls");
						    printf("Digite o estado para listar os clientes: ");
						    char estado[3];
						    scanf("%s", estado);
						    listarClientesEstadoEspecifico(estado);
						    getch();
					    break;	

                        case 6:
                            system("cls");
                            estadoServicoMaisCaro();
                            getch();
                            break;

                        case 7:
                        	system("cls");
                            printf("Voltando para o menu anterior.\n");
                            getch();
                            break;

                        default:
                        	system("cls");
                            printf("Op��o inv�lida para administrador.\n");
                            getch();
                    }
                } while (escolhaAdmin != 7);
                break;

            case 3:
                printf("Saindo do programa. Obrigado!\n");
                break;

            default:
                printf("Escolha inv�lida. Por favor, escolha 1, 2 ou 3.\n");
        }
    } while (escolha != 3);

    return 0;
}

