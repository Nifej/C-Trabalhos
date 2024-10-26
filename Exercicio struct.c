#include <stdio.h>

struct tip_endereco{
	char rua[50];
	char bairro[50];
	int num;
};


struct tip_pessoa{
		char nome[32];
		int cadastro;
		char cpf[32];
		
		struct tip_endereco endereco;
	};

struct tip_pessoa pessoa[2];


int main(){
	
	int i;
	for(i=0;i<2;i++){
		printf("Dados Da pessoa Numero %d\n", i+1);
		printf("Nome: ");
		fgets(pessoa[i].nome, 32, stdin);
		printf("Cadastro: ");
		scanf("%d", &pessoa[i].cadastro);
		getchar();
		printf("CPF: ");
		fgets(pessoa[i].cpf, 32, stdin);
		
		printf("\n");
		
		printf("ENDERECO DA PESSOA %d\n", i+1);
		printf("Rua:  ");
		fgets(pessoa[i].endereco.rua, 32, stdin);
		printf("bairro: ");
		fgets(pessoa[i].endereco.bairro, 32, stdin);
		printf("numero:  ");
		scanf("%d", &pessoa[i].endereco.num);
		getchar();
		
		system("cls");
	}
	
	system("cls");
	
 	for(i=0;i<2;i++){
	printf("DADOS DA PESSOA %d -----------------\n", i+1);
	printf("NOME: %s", pessoa[i].nome);
	printf("CADASTRO: %d", pessoa[i].cadastro);
	printf("\nCPF: %s", pessoa[i].cpf);
	printf("ENDERECO ---------------------------\n");
	printf("RUA: %s", pessoa[i].endereco.rua);
	printf("BAIRRO: %s", pessoa[i].endereco.bairro);
	printf("NUMERO: %d\n", pessoa[i].endereco.num);
	printf("\n");
	
	
	
	}
	
	
	return 0;
}