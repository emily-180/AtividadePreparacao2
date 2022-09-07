#include <stdio.h>
#include "matrixlib.h"
int main(){
	int mat[100][100], lin,cols,i,j, quantPar=0, quantImpar=0;
	printf("Qtde de linhas e colunas:");
	scanf("%d%d",&lin,&cols);
	geraMatrix(mat,lin, cols);
	printMatrix(mat, lin, cols);
	for(i=0;i<cols;i++)
		for(j=0;j<lin;j++)
			if(mat[i][j]%2 == 0)
				quantPar++;
			else
				quantImpar++;
	printf("Quantidade de par: %d", quantPar);
	printf("Quantidade de impar: %d", quantImpar);	
}
