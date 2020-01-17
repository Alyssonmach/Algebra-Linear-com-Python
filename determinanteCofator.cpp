// progama que calcula o determinante de uma matriz de N ordem
// obs: o algoritmo em questão pode ser aplicado para matrizes de qualquer ordem, os limites para a ordem da matriz advém da capacidade da linguagem C++
// Visualizando o determinante de uma matriz através dos metódos dos cofatores

// incluindo as bibliotecas padrão do C++ para fazer o progama funcionar
#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <cmath>
#include <iomanip>

using namespace std;

// tamanho máximo das matrizes suportado pela capacidade da linguaguem sem que ocorra um erro lógico
#define TAM 20

// protótipo função que mostra a matriz digitada na tela
void mostraMatriz(int[][TAM], int);

// protótipo função responsável por calcular o determinante da matriz
int determinante(int[][TAM], int);

// protótipo função auxiliar que será usada para calclular o determinante
int cofator(int[][TAM], int, int, int);

// função principal responsável pelo front-end
int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
	int matriz[TAM][TAM]; // inicializando a matriz com a ordem máxima permitida e com lixo de memória
	int ordem; // variável que permite ao usuário especificar a ordem da matriz
	int linha, coluna; // variáveis auxiliares para preencher as linhas e as colunas da matriz
	
	cout << "<<<<<PROGAMA QUE CALCULA O DETERMINANTE DE UMA MATRIZ>>>>>\n\n" << endl;
	
	cout << "Informe a ordem da matriz(máximo 20): ";
	cin >> ordem;
	
	// mecanismo de segurança que garante que o usuário não insire uma ordem inválida
	while(ordem <= 0 || ordem > TAM)
	{
		cout << "\nA ordem da matriz não é aceita, informe novamente(máximo 20): " << endl;
		cin >> ordem;
	}
	
	cout << endl;
	system("pause");
	system("cls");
	
	cout << "Informe os elementos da matriz:\n\n" << endl;
	
	// estrutura de repetição for aninhada para preencher os elementos da matriz
	for(linha = 0; linha <= ordem - 1; linha++)
	{
		for(coluna = 0; coluna <= ordem - 1; coluna++)
			cin >> matriz[linha][coluna];
		cout << endl;
	}
	
	cout << endl;
	system("pause");
	system("cls");
	
	// chamada da função que mostrará a matriz digitada na tela
	cout << "A matriz digitada foi:\n\n" << endl;
	mostraMatriz(matriz, ordem);
	
	// chamada da função que mostra o determinante da matriz digitada
	cout << "\n\nO determinante da matriz é " << determinante(matriz,ordem) << endl;
	
	cout << endl;
	system("pause");
	system("cls");
	
	return 0;
}

void mostraMatriz(int matriz[][TAM], int ordem)
{
	// variáveis auxiliares para mostrar as linhas e colunas onde os elementos da matriz estão armazenados na memória
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
	int det = 0; // variável que terá o valor do determinante
	int coluna; // primeira coluna escolhida para calcular as matrizes de cofatores e, consequentemente, o determinante da matriz
	
	// se a ordem for 1, imprime o elemento unitário, se não calcula usando o cofator
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
	// variáveis auxiliares que permitirão armazenar elementos na matriz do cofator
	int n = ordem - 1;
	int x = 0, y = 0;
	int i, j;
	
	// estrutura de repetição for aninhada em que podemos usar para preencher a matriz auxiliar
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