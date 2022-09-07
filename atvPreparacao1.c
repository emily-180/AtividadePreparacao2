#include <stdio.h>
#include <string.h>
int existeGene(char DNA[100], int n){
	int i, op=-1;
	for(i=0; i<n-2;i++)
		if(DNA[i]=='A' && DNA[i+1]=='T' && DNA[i+2]=='G')
			op = i;
	return op;
}
int main(){
	char DNA[100];
	int tamanho, i, res;
	printf("Digite uma base: ");
	fflush(stdin);  //limpar buffer do teclado
	gets(DNA);
	strupr(DNA);	//uppercase
	tamanho=strlen(DNA);
	res = existeGene(DNA, tamanho);
	if(res != -1)
		printf("Existe!");			
	else
		printf("Inexistente!!");
	return 0;
}
