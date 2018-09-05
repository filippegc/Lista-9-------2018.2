#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");

	float salario;

	cout << "Digite o salário: ";
	cin >> salario;

	if (salario >= 601.398)
	{
		cout << "O desconto é de R$318.20! " << endl;
	}
	else {
		salario = salario * 0.89;
		cout << "O desconto é de R$" << salario << "!" << endl;
	}

	system("pause");
	return 0;
}