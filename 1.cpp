#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");
	int num;
	cout << "Digite um n� para saber se ele � divisivel por 3: ";
	cin >> num;

	if (num % 3 == 0)
	{
		cout << "Este n�  eh divisivel por 3!" << endl;
	}
	else {
		cout << "Este n� NAO eh divisivel por 3!" << endl;
	}

	system("pause");
	return 0;
}