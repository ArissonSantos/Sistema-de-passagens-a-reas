struct Cliente {
    char nome[50];
    int idade;
    char email[50];
    char telefone[20];
    char endereco[100];
    char uf[3];
};

struct Empresa {
    char nome[50];
    char enderecoEletronico[50];
    char email[50];
    char telefone[20];
    char endereco[100];
    char uf[3];
};

struct Prestadores {
    char prestador1[10];
    char prestador2[10];
    char prestador3[10];
};

struct Servico {
    char companhia[10];
    char origem[10];
    char destino[10];
    double preco;
};
    struct Servico servicos[] = {
        {"AZUL", "RJ", "SP", 525.0},
        {"AZUL", "P. Alegre", "Floripa", 500.0},
        {"LATAM", "SP", "DUBAI", 13750.0},
        {"LATAM", "BH", "UBERABA", 565.0},
        {"GOL", "SP", "MIAMI", 8750.0},
        {"GOL", "BSB", "SP", 1250.0}
    };

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void salvarDadosCompra(struct Empresa empresa, char *tipo, struct Cliente cliente, float valor) {
    FILE *arquivo;
    arquivo = fopen("dados_compras.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        exit(1);
    }

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    fprintf(arquivo, "%s - %s - %s - %.2f - %d - %s - %s - %s - %s - %d/%d/%d\n",
            empresa.nome, tipo, cliente.nome, valor, cliente.idade, cliente.email, cliente.telefone, cliente.endereco, cliente.uf,
            tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);

    fclose(arquivo);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void comprarPassagensGol() {
	struct tm tm;
	time_t t = time(NULL);
    tm = *localtime(&t);
    
    int escolhaGol;
    do {
    	system("cls");
        printf("Escolha a opção de voo pela Gol:\n");
        printf("1. Voo interestadual entre Brasília e São Paulo por R$1250,00\n");
        printf("2. Voo internacional por R$8750,00\n");
        printf("3. Voltar\n");
        printf("Escolha: ");
        scanf("%d", &escolhaGol);

        struct Cliente cliente;
        struct Empresa empresa = {"Gol", "www.voegol.com.br", "contato@voegol.com.br", "0800 704 0465", "Fortaleza", "CE"};

        switch (escolhaGol) {
            case 1:
                printf("Você escolheu um voo interestadual pela Gol entre Brasília e São Paulo por R$1250,00.\n");
                float distancia = 1000; 
                float preco = distancia * 1.25;

                printf("Por favor, insira seus dados:\n");
                printf("Nome: ");
                scanf("%s", cliente.nome);
                printf("Idade: ");
                scanf("%d", &cliente.idade);
                printf("E-mail: ");
                scanf("%s", cliente.email);
                printf("Telefone: ");
                scanf("%s", cliente.telefone);
                printf("Endereço: ");
                scanf("%s", cliente.endereco);
                printf("UF: ");
                scanf("%s", cliente.uf);
                
                salvarDadosCompra(empresa, "Voo Interestadual", cliente, preco);
                
                printf("\nVocê escolheu um voo interestadual entre Brasília e São Paulo por R$1250,00.\n");
                printf("Dados do passageiro:\n");
                printf("Nome: %s\n", cliente.nome);
                printf("Idade: %d\n", cliente.idade);
                printf("E-mail: %s\n", cliente.email);
                printf("Telefone: %s\n", cliente.telefone);
                printf("Endereço: %s\n", cliente.endereco);
                printf("UF: %s\n", cliente.uf);
                printf("Data da compra: %d/%d/%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
                getch();
                
                
                break;
            case 2:
                printf("Você escolheu um voo internacional entre São Paulo e Miami pela Gol por R$8750,00.\n");
                float distancia_int = 7000; 
                float preco_int = distancia_int * 1.25;
                
                printf("Por favor, insira seus dados:\n");
                printf("Nome: ");
                scanf("%s", cliente.nome);
                printf("Idade: ");
                scanf("%d", &cliente.idade);
                printf("E-mail: ");
                scanf("%s", cliente.email);
                printf("Telefone: ");
                scanf("%s", cliente.telefone);
                printf("Endereço: ");
                scanf("%s", cliente.endereco);
                printf("UF: ");
                scanf("%s", cliente.uf);
                

                salvarDadosCompra(empresa, "Voo Internacional", cliente, preco_int);
                
                printf("\nVocê escolheu um voo internacional entre São Paulo e Miami pela Gol por R$8750,00.\n");
                printf("Dados do passageiro:\n");
                printf("Nome: %s\n", cliente.nome);
                printf("Idade: %d\n", cliente.idade);
                printf("E-mail: %s\n", cliente.email);
                printf("Telefone: %s\n", cliente.telefone);
                printf("Endereço: %s\n", cliente.endereco);
                printf("UF: %s\n", cliente.uf);
                printf("Data da compra: %d/%d/%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
                getch();
                break;
        }
    } while (escolhaGol != 3);
}

void comprarPassagensLatam() {
	struct tm tm;
	time_t t = time(NULL);
    tm = *localtime(&t);
    
    int escolhaLatam;
    do {
        system("cls");
        printf("Escolha a opção de voo pela LATAM:\n");
        printf("1. Voo intermunicipal entre Belo Horizonte e Uberaba por R$563,00\n");
        printf("2. Voo internacional entre São Paulo e Dubai por R$13750,00\n");
        printf("3. Voltar\n");
        printf("Escolha: ");
        scanf("%d", &escolhaLatam);

        struct Cliente cliente;
        struct Empresa empresa = {"Latam", "www.latamairlines.com.br", "informacoes.agencias@latam.com", "0300 570 5700", " São Paulo, São Paulo", "SP"};

        switch (escolhaLatam) {
            case 1:
                printf("Você escolheu um voo intermunicipal entre Belo Horizonte e Uberaba pela LATAM por R$563,00.\n");
                float distancia = 450; 
                float preco = distancia * 1.25;

                printf("Por favor, insira seus dados:\n");
                printf("Nome: ");
                scanf("%s", cliente.nome);
                printf("Idade: ");
                scanf("%d", &cliente.idade);
                printf("E-mail: ");
                scanf("%s", cliente.email);
                printf("Telefone: ");
                scanf("%s", cliente.telefone);
                printf("Endereço: ");
                scanf("%s", cliente.endereco);
                printf("UF: ");
                scanf("%s", cliente.uf);
                
                salvarDadosCompra(empresa, "Voo Intermunicipal", cliente, preco);
                
                printf("\nVocê escolheu um voo intermunicipal entre Belo Horizonte e Uberaba pela LATAM por R$563,00.\n");
                printf("Dados do passageiro:\n");
                printf("Nome: %s\n", cliente.nome);
                printf("Idade: %d\n", cliente.idade);
                printf("E-mail: %s\n", cliente.email);
                printf("Telefone: %s\n", cliente.telefone);
                printf("Endereço: %s\n", cliente.endereco);
                printf("UF: %s\n", cliente.uf);
                printf("Data da compra: %d/%d/%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
                getch();
                
                
                break;
            case 2:
                printf("Você escolheu um voo internacional entre São Paulo e Dubai pela LATAM por R$13750,00.\n");
                float distancia_int = 7000; 
                float preco_int = distancia_int * 1.25;
                
                printf("Por favor, insira seus dados:\n");
                printf("Nome: ");
                scanf("%s", cliente.nome);
                printf("Idade: ");
                scanf("%d", &cliente.idade);
                printf("E-mail: ");
                scanf("%s", cliente.email);
                printf("Telefone: ");
                scanf("%s", cliente.telefone);
                printf("Endereço: ");
                scanf("%s", cliente.endereco);
                printf("UF: ");
                scanf("%s", cliente.uf);
				
                salvarDadosCompra(empresa, "Voo Internacional", cliente, preco_int);
                
                printf("Você escolheu um voo internacional entre São Paulo e Dubai pela LATAM por R$13750,00.\n");
                printf("Dados do passageiro:\n");
                printf("Nome: %s\n", cliente.nome);
                printf("Idade: %d\n", cliente.idade);
                printf("E-mail: %s\n", cliente.email);
                printf("Telefone: %s\n", cliente.telefone);
                printf("Endereço: %s\n", cliente.endereco);
                printf("UF: %s\n", cliente.uf);
                printf("Data da compra: %d/%d/%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
                getch();
                break;
        }
    } while (escolhaLatam != 3);
}

void comprarPassagensAzul() {
	struct tm tm;
	time_t t = time(NULL);
    tm = *localtime(&t);
    
    
    int escolhaAzul;
    do {
        system("cls");
        printf("Escolha a opção de voo pela Azul:\n");
        printf("1. Voo intermunicipal entre Porto Alegre e Florianópolis por R$500,00\n");
        printf("2. Voo interestadual entre Rio de Janeiro e São Paulo por R$525,00\n");
        printf("3. Voltar\n");
        printf("Escolha: ");
        scanf("%d", &escolhaAzul);

        struct Cliente cliente;
        struct Empresa empresa = {"Azul", "www.voeazul.com.br", "site@voeazul.com", "11 4003-1118", " São Paulo, São Paulo", "SP"};

        switch (escolhaAzul) {
            case 1:
                printf("Você escolheu um voo intermunicipal pela Azul entre Porto Alegre e Florianópolis por R$500,00.\n");
                float distancia = 400; 
                float preco = distancia * 1.25;

                printf("Por favor, insira seus dados:\n");
                printf("Nome: ");
                scanf("%s", cliente.nome);
                printf("Idade: ");
                scanf("%d", &cliente.idade);
                printf("E-mail: ");
                scanf("%s", cliente.email);
                printf("Telefone: ");
                scanf("%s", cliente.telefone);
                printf("Endereço: ");
                scanf("%s", cliente.endereco);
                printf("UF: ");
                scanf("%s", cliente.uf);
                
                salvarDadosCompra(empresa, "Voo Intermunicipal", cliente, preco);
                
                printf("Você escolheu um voo intermunicipal pela Azul entre Porto Alegre e Florianópolis por R$500,00.\n");
                printf("Dados do passageiro:\n");
                printf("Nome: %s\n", cliente.nome);
                printf("Idade: %d\n", cliente.idade);
                printf("E-mail: %s\n", cliente.email);
                printf("Telefone: %s\n", cliente.telefone);
                printf("Endereço: %s\n", cliente.endereco);
                printf("UF: %s\n", cliente.uf);
                printf("Data da compra: %d/%d/%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
                getch();
                
                
                break;
            case 2:
                printf("Você escolheu um voo interestadual pela Azul entre Rio de Janeiro e São Paulo por R$525,00.\n");
                float distancia_int = 420; 
                float preco_int = distancia_int * 1.25;
                
                printf("Por favor, insira seus dados:\n");
                printf("Nome: ");
                scanf("%s", cliente.nome);
                printf("Idade: ");
                scanf("%d", &cliente.idade);
                printf("E-mail: ");
                scanf("%s", cliente.email);
                printf("Telefone: ");
                scanf("%s", cliente.telefone);
                printf("Endereço: ");
                scanf("%s", cliente.endereco);
                printf("UF: ");
                scanf("%s", cliente.uf);
				
                salvarDadosCompra(empresa, "Voo Interestadual", cliente, preco_int);
                
                printf("Você escolheu um voo interestadual pela Azul entre Rio de Janeiro e São Paulo por R$525,00.\n");
                printf("Dados do passageiro:\n");
                printf("Nome: %s\n", cliente.nome);
                printf("Idade: %d\n", cliente.idade);
                printf("E-mail: %s\n", cliente.email);
                printf("Telefone: %s\n", cliente.telefone);
                printf("Endereço: %s\n", cliente.endereco);
                printf("UF: %s\n", cliente.uf);
                printf("Data da compra: %d/%d/%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
                getch();
                break;
        }
    } while (escolhaAzul != 3);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void trocarServicos(struct Servico *a, struct Servico *b) {
    struct Servico temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSortServicos(struct Servico servicos[], int tamanho) {
    int trocou, i;

    do {
        trocou = 0;

        for (i = 0; i < tamanho - 1; i++) {
            if (servicos[i].preco > servicos[i + 1].preco) {
                trocarServicos(&servicos[i], &servicos[i + 1]);
                trocou = 1;
            }
        }
    } while (trocou);
}

void listarTiposServicosOrdemCrescente() {
	
    int i;
    int tamanho = sizeof(servicos) / sizeof(servicos[0]);

    bubbleSortServicos(servicos, tamanho);

    printf("\nTipos de Serviços em Ordem Crescente de Preço:\n\n");

    for (i = 0; i < tamanho; i++) {
        printf("%s de %s para %s: R$ %.2f\n", servicos[i].companhia, servicos[i].origem, servicos[i].destino, servicos[i].preco);
    }
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void trocarEmpresas(struct Empresa *a, struct Empresa *b) {
    struct Empresa temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSortEmpresas(struct Empresa empresas[], int tamanho) {
    int trocou;

    do {
        trocou = 0;

        if (strcmp(empresas[0].nome, empresas[1].nome) > 0) {
            trocarEmpresas(&empresas[0], &empresas[1]);
            trocou = 1;
        }

        if (strcmp(empresas[1].nome, empresas[2].nome) > 0) {
            trocarEmpresas(&empresas[1], &empresas[2]);
            trocou = 1;
        }

    } while (trocou);
}

void listarPrestadoresServicos() {
	int i = 0;
    struct Empresa empresas[3] = {
        {"GOL", "www.voegol.com.br", "contato@voegol.com.br", "0800 704 0465",
         "Fortaleza", "CE"},
        {"LATAM", "www.latamairlines.com.br", "informacoes.agencias@latam.com", "0300 570 5700",
         "São Paulo, São Paulo", "SP"},
        {"AZUL", "www.voeazul.com.br", "site@voeazul.com", "11 4003-1118",
         "São Paulo, São Paulo", "SP"}
    };

    bubbleSortEmpresas(empresas, 3);

    printf("Prestadores de Serviços em Ordem Crescente:\n");
    for (i = 0; i < 3; i++) {
        printf("\n%d. Nome: %s\n", i + 1, empresas[i].nome);
        printf("   Endereço Eletrônico: %s\n", empresas[i].enderecoEletronico);
        printf("   E-mail: %s\n", empresas[i].email);
        printf("   Telefone: %s\n", empresas[i].telefone);
        printf("   Endereço: %s\n", empresas[i].endereco);
        printf("   UF: %s\n", empresas[i].uf);
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void voosNacionais(struct Prestadores *prestadores) {
    printf("Voos Nacionais:\n");
    printf("1. %s\n", prestadores->prestador1);
    printf("2. %s\n", prestadores->prestador2);
    printf("3. %s\n", prestadores->prestador3);
}

void voosInternacionais(struct Prestadores *prestadores) {
    printf("Voos Internacionais:\n");
    printf("1. %s\n", prestadores->prestador1);
    printf("2. %s\n", prestadores->prestador2);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void listarPrestadoresServicoTipoEspecifico() {
	
    struct Prestadores prestadores;
    strcpy(prestadores.prestador1, "GOL");
    strcpy(prestadores.prestador2, "LATAM");
    strcpy(prestadores.prestador3, "AZUL");

    int opcao;
    int continuar = 1;

    do {
        printf("\nMenu:\n");
        printf("1. Voos Nacionais\n");
        printf("2. Voos Internacionais\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
            	system("cls");
                voosNacionais(&prestadores);
                break;
            case 2:
            	system("cls");
                voosInternacionais(&prestadores);
                break;
            case 3:
                printf("Retornando para o menu do admin.\n");
                system("cls");
                continuar = 0;
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

        if (continuar) {
            printf("\n4. Sair: ");
            scanf("%d", &opcao);

            if (opcao == 4) {
                system("cls");
            }
            
        }

    } while (continuar);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int compararClientes(const void *a, const void *b) {
    return strcmp(((struct Cliente *)a)->nome, ((struct Cliente *)b)->nome);
}

void listarClientesOrdemCrescente() {
	int i;
    FILE *arquivo;
    arquivo = fopen("dados_compras.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    struct Cliente clientes[100]; 
    int numClientes = 0;

    while (fscanf(arquivo, "%*[^-] - %*[^-] - %49s", clientes[numClientes].nome) == 1) {

        fscanf(arquivo, "%*[^\n]");
        
        for ( i = 0; clientes[numClientes].nome[i]; i++) {
            clientes[numClientes].nome[i] = toupper(clientes[numClientes].nome[i]);
        }    

        fgetc(arquivo);

        numClientes++;
    }

    fclose(arquivo);
        for ( i = 0; clientes[numClientes].nome[i]; i++) {
            clientes[numClientes].nome[i] = toupper(clientes[numClientes].nome[i]);
        }
    qsort(clientes, numClientes, sizeof(struct Cliente), compararClientes);

	printf("\nNomes dos clientes em ordem alfabética crescente:\n");
    for ( i = 0; i < numClientes; i++) {
        printf("%s\n", clientes[i].nome);
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void listarClientesEstadoEspecifico(char *inputUF) {
    FILE *arquivo;
    arquivo = fopen("dados_compras.txt", "r");
    int i;

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    struct Cliente cliente;
    int encontrouClientes = 0;

    printf("\nClientes da UF %s:\n", inputUF);
    printf("----------------------------\n");

    char linha[100];

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        if (sscanf(linha, "%*[^-] - %*[^-] - %49[^-] - %*f - %*d - %*s - %*s - %*31[^-] - %2s - %*d/%*d/%*d",
                   cliente.nome, cliente.uf) == 2) {
                   	
            for (i = 0; cliente.uf[i]; i++) {
                cliente.uf[i] = toupper(cliente.uf[i]);
            }

            
            if (cliente.uf[strlen(cliente.uf) - 1] == '\n') {
                cliente.uf[strlen(cliente.uf) - 1] = '\0';
            }

            if (strcmp(cliente.uf, inputUF) == 0) {
                encontrouClientes = 1;
                printf("Nome: %s\n", cliente.nome);
                printf("UF: %s\n", cliente.uf);
                printf("----------------------\n");
            }
        }
    }

    fclose(arquivo);

    if (!encontrouClientes) {
        printf("Nenhum cliente encontrado para o estado %s.\n", inputUF);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void trocar(struct Servico *a, struct Servico *b) {
    struct Servico temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(struct Servico servicos[], int tamanho) {
	
	int i, j;
	
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (servicos[j].preco < servicos[j + 1].preco) {
                trocar(&servicos[j], &servicos[j + 1]);
            }
        }
    }
}

void estadoServicoMaisCaro() {

    int tamanho = sizeof(servicos) / sizeof(servicos[0]);

   
    bubbleSort(servicos, tamanho);

    printf("\nEstados onde estão registrados os serviços mais caros:\n");

	int i;
    for (i = 0; i < tamanho; i++) {
        printf("%s de %s para %s: R$ %.2f\n", servicos[i].companhia, servicos[i].origem, servicos[i].destino, servicos[i].preco);
    }

}
