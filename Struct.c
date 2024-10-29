#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 50

struct Aluno{
	char nome[32];
	char telefone[32];
	char email[32];
	
};

struct Matricula{
	int numero_matricula;
	char nomeCurso[32];
	int coef;
	
	struct Aluno aluno;
};

struct Matricula matricula[TAM];

int tot_matricula = 0;

int pesq_matricula(int verif_matricula){
	 int i;
	 for(i = 0; i < tot_matricula; i++){
		 if (matricula[i].numero_matricula == verif_matricula){
			 return i;
		 }
	 } 
	 return -1;
}

void inserir_Aluno(){
	struct Matricula copia_matricula;
	
	
	printf("Insira o numero de matricula do aluno: ");
	scanf("%d", &copia_matricula.numero_matricula);
	if (pesq_matricula(copia_matricula.numero_matricula) != -1){
		printf("Matricula já existe!!");
		return;
	}
	
	printf("Nome Do Aluno: ");
	scanf(" %[^\n]", copia_matricula.aluno.nome);
	printf("Telefone: ");
	scanf(" %[^\n]", copia_matricula.aluno.telefone);
	printf("Email: ");
	scanf(" %[^\n]", copia_matricula.aluno.email);
	printf("Nome Do Curso:");
	scanf(" %[^\n]", copia_matricula.nomeCurso);
	do {
		printf("Coeficiente de rendimento(0-100): ");
		scanf("%d", &copia_matricula.coef);
	} while(copia_matricula.coef < 0 || copia_matricula.coef > 100);
	

	//teste
}



















int menu() {
	int op;
	system("@cls||clear");  // LIMPA A TELA
	printf("\n\nSISTEMA XXYYZZ\n\n");
	printf("1 - Inserir\n");
	printf("2 - Pesquisar por número\n");
	printf("3 - Pesquisar por nome\n");
	printf("4 - Atualizar\n");
	printf("5 - Maior\n");
	printf("6 - Excluir\n");
	printf("7 - Listar\n");
	printf("0 - Sair\n");
	do {
		printf("Escolha sua opção: ");
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
				// SAIR. NÃO PRECISA FAZER NADA
				break;
			case 1:
				// INSERIR
				inserir_Aluno();
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
				printf ("\n\nOpçãoo inválida!\n\n");
		}

		system("PAUSE");  // Windows
	} while (op != 0);
	
	return 0;
}