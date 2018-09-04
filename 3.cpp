#include<iostream>
using namespace std;

int main()
{
	int mes;

	cout << "Digite o mes em algarismos para saber se é de alta ou baixa temporada: ";
	cin >> mes;

	if (mes == 01 || mes== 02 || mes == 12 || mes == 06 || mes == 07) {
		cout << "Mes de alta temporada!\n";
	}
	else {
		cout << "Mes de baixa temporada!\n";
	}


	system("pause");
	return 0;
}