#include <iostream>

using namespace std;

int main()
{
	float valor = 220;
	int qtdDependentes;

	cout << "Informe a qtd de dependentes:\t";
	cout << "Menores de 10 anos: \n";
	cin >> qtdDependentes;
	valor += qtdDependentes * 80;

	cout << "Com idade entre 10 e 30 anoss: ";
	cin >> qtdDependentes;
	valor += qtdDependentes * 150;

	cout << "Com idade entre 31 e 60 anoss: ";
	cin >> qtdDependentes;
	valor += qtdDependentes * 195;

	cout << "Com idade maior de 60: ";
	cin >> qtdDependentes;
	valor += qtdDependentes * 250;


	system("pause");
	return 0;
}
