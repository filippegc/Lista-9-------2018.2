#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");

	float salario, desconto=318.20;

	cout << "Digite o salário: ";
	cin >> salario;

	if (salario +0.11 < 318,20)
	{
		salario = salario * 0.89;
		cout << "O desconto é de R$" << desconto << "!" << endl;
	}
	cout << "O desconto é de R$" << desconto << "!" << endl;

	system("pause");
	return 0;
}
