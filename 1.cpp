#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");
	int num;
	cout << "Digite um nº para saber se ele é divisivel por 3: ";
	cin >> num;

	if (num % 3 == 0)
	{
		cout << "Este nº  eh divisivel por 3!" << endl;
	}
	else {
		cout << "Este nº NAO eh divisivel por 3!" << endl;
	}

	system("pause");
	return 0;
}