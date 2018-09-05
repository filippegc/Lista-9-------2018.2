#include<iostream>
using namespace std;

int main()
{
	int valor, notas100, notas50, notas20, notas10, notas5, notas1;

	cout << "Digite o valor que desejas sacar: ";
	cin >> valor;

	notas100 = valor / 100; // divide o valor pela quantidade de notas
	valor = valor % 100; // valor %= 100; //gera o mod (%)
	cout << "A qtd de notas de 100 eh de: " << notas100 << endl;
	
	notas50 = valor / 50; // usa o mod(%) gerado pelo anterior
	valor %= 50; // valor = valor %50 / gera o mod a ser usado no próximo
	cout << "A qtd de notas de 50 eh de: " << notas50 << endl;


	notas20 = valor / 20;
	valor %= 20;
	cout << "A qtd de notas de 20 eh de: " << notas20 << endl;

	notas10 = valor / 10;
	valor %= 10;
	cout << "A qtd de notas de 10 eh de: " << notas10 << endl;

	notas5 = valor / 5;
	valor %= 5;
	cout << "A qtd de notas de 5 eh de: " << notas5 << endl;

	notas1 = valor / 1;
	valor %= 1;
	cout << "A qtd de notas de 1 eh de: " << notas1 << endl;

	system("pause");
	return 0;
}
