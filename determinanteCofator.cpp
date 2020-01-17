// progama que calcula o determinante de uma matriz de N ordem
// obs: o algoritmo em quest�o pode ser aplicado para matrizes de qualquer ordem, os limites para a ordem da matriz adv�m da capacidade da linguagem C++
// Visualizando o determinante de uma matriz atrav�s dos met�dos dos cofatores

// incluindo as bibliotecas padr�o do C++ para fazer o progama funcionar
#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <cmath>
#include <iomanip>

using namespace std;

// tamanho m�ximo das matrizes suportado pela capacidade da linguaguem sem que ocorra um erro l�gico
#define TAM 20

// prot�tipo fun��o que mostra a matriz digitada na tela
void mostraMatriz(int[][TAM], int);

// prot�tipo fun��o respons�vel por calcular o determinante da matriz
int determinante(int[][TAM], int);

// prot�tipo fun��o auxiliar que ser� usada para calclular o determinante
int cofator(int[][TAM], int, int, int);

// fun��o principal respons�vel pelo front-end
int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
	int matriz[TAM][TAM]; // inicializando a matriz com a ordem m�xima permitida e com lixo de mem�ria
	int ordem; // vari�vel que permite ao usu�rio especificar a ordem da matriz
	int linha, coluna; // vari�veis auxiliares para preencher as linhas e as colunas da matriz
	
	cout << "<<<<<PROGAMA QUE CALCULA O DETERMINANTE DE UMA MATRIZ>>>>>\n\n" << endl;
	
	cout << "Informe a ordem da matriz(m�ximo 20): ";
	cin >> ordem;
	
	// mecanismo de seguran�a que garante que o usu�rio n�o insire uma ordem inv�lida
	while(ordem <= 0 || ordem > TAM)
	{
		cout << "\nA ordem da matriz n�o � aceita, informe novamente(m�ximo 20): " << endl;
		cin >> ordem;
	}
	
	cout << endl;
	system("pause");
	system("cls");
	
	cout << "Informe os elementos da matriz:\n\n" << endl;
	
	// estrutura de repeti��o for aninhada para preencher os elementos da matriz
	for(linha = 0; linha <= ordem - 1; linha++)
	{
		for(coluna = 0; coluna <= ordem - 1; coluna++)
			cin >> matriz[linha][coluna];
		cout << endl;
	}
	
	cout << endl;
	system("pause");
	system("cls");
	
	// chamada da fun��o que mostrar� a matriz digitada na tela
	cout << "A matriz digitada foi:\n\n" << endl;
	mostraMatriz(matriz, ordem);
	
	// chamada da fun��o que mostra o determinante da matriz digitada
	cout << "\n\nO determinante da matriz � " << determinante(matriz,ordem) << endl;
	
	cout << endl;
	system("pause");
	system("cls");
	
	return 0;
}

void mostraMatriz(int matriz[][TAM], int ordem)
{
	// vari�veis auxiliares para mostrar as linhas e colunas onde os elementos da matriz est�o armazenados na mem�ria
	int linha;
	int coluna;
	
	// mostra a ordem da matriz
	cout << "Ordem: " << ordem << "\n\n" << endl;
	
	// mostra a matriz
	for(linha = 0; linha <= ordem - 1; linha++)
	{
		for(coluna = 0; coluna <= ordem - 1; coluna++)
			cout << setw(3) << matriz[linha][coluna];;
		cout << endl;
	}
		
	return;
}

int determinante(int matriz[][TAM], int ordem)
{
	int det = 0; // vari�vel que ter� o valor do determinante
	int coluna; // primeira coluna escolhida para calcular as matrizes de cofatores e, consequentemente, o determinante da matriz
	
	// se a ordem for 1, imprime o elemento unit�rio, se n�o calcula usando o cofator
	if(ordem == 1)
		det = matriz[0][0];
	else
	{
		for(coluna = 0; coluna <= ordem - 1; coluna++)
			det += matriz[0][coluna] * cofator(matriz, ordem, 0, coluna);
	}
	
	return det;
}

int cofator(int matriz[][TAM], int ordem, int linha, int coluna)
{
	int matrizAux[TAM][TAM]; //matriz auxiliar do cofator
	// vari�veis auxiliares que permitir�o armazenar elementos na matriz do cofator
	int n = ordem - 1;
	int x = 0, y = 0;
	int i, j;
	
	// estrutura de repeti��o for aninhada em que podemos usar para preencher a matriz auxiliar
	for(i = 0; i <= ordem - 1; i++)
	{
		for(j = 0; j <= ordem - 1; j++)
		{
			if(i != linha && j != coluna)
			{
				matrizAux[x][y] = matriz[i][j];
				y++;
				if(y >= n)
				{
					x++;
					y = 0;
				}
			}
		}
	}
	
	return pow(-1, linha + coluna) * determinante(matrizAux, n);
}