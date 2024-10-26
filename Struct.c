#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu() {
	int op;
	system("@cls||clear");  // LIMPA A TELA
	printf("\n\nSISTEMA XXYYZZ\n\n");
	printf("1 - Inserir\n");
	printf("2 - Pesquisar por n�mero\n");
	printf("3 - Pesquisar por nome\n");
	printf("4 - Atualizar\n");
	printf("5 - Maior\n");
	printf("6 - Excluir\n");
	printf("7 - Listar\n");
	printf("0 - Sair\n");
	do {
		printf("Escolha sua op��o: ");
		scanf(" %d", &op);
	} while(op < 0 || op > 7);
	return op;
}

int main() {
	int op;
	do {
		op = menu();
		switch ( op ) {
			case 0:
				// SAIR. N�O PRECISA FAZER NADA
				break;
			case 1:
				// INSERIR
				break;
			case 2:
				// PESQUISAR POR CODIGO/MATRICULA
				break;
			case 3:
				// PESQUISAR POR NOME
				break;
			case 4:
				// ATUALIZAR
				break;
			case 5:
				// MAIOR
				break;
			case 6:
				// EXCLUIR
				break;
			case 7:
				// LISTAR
				break;
			default:
				printf ("\n\nOp��oo inv�lida!\n\n");
		}

		system("PAUSE");  // Windows
	} while (op != 0);
	
	return 0;
}