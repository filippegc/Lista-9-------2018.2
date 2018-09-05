# include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");
	int mes;
	double mensalidade;

	cout << "Informe o mes em que a mensalidade está sendo paga: ";
	cin >> mes;


	if (mes == 02 || mes == 2) {
		mensalidade = 100 * 1.05 ;
		cout << mensalidade << endl;
	}

	else if (mes == 03 || mes == 3) {
		mensalidade = 100 * 1.05 * 1.05;
		cout << mensalidade << endl;
	}
	else if (mes == 04 || mes == 4) {
		mensalidade = 100 * 1.05 * 1.05* 1.05;
		cout << mensalidade << endl;
	}
	else if (mes == 05 || mes == 5) {
		mensalidade = 100 * 1.05 * 1.05* 1.05* 1.05;
		cout << mensalidade << endl;
	}
	else if (mes == 06 || mes == 6) {
		mensalidade = 100 * 1.05 * 1.05* 1.05* 1.05* 1.05;
		cout << mensalidade << endl;
	}
	else if (mes == 07 || mes == 7) {
		mensalidade = 100 * 1.05 * 1.05* 1.05* 1.05* 1.05* 1.05;
		cout << mensalidade << endl;
	}
	else if (mes == 08 || mes == 8) {
		mensalidade = 100 * 1.05 * 1.05* 1.05 * 1.05* 1.05* 1.05* 1.05;
		cout << mensalidade << endl;
	}
	else if (mes == 09 ||  mes == 9) {
		mensalidade = 100 * 1.05 * 1.05* 1.05* 1.05 * 1.05* 1.05* 1.05* 1.05;
		cout << mensalidade << endl;
	}
	else if (mes == 10 || mes == 10) {
		mensalidade = 100 * 1.05 * 1.05* 1.05* 1.05* 1.05 * 1.05* 1.05* 1.05* 1.05;
		cout << mensalidade << endl;
	}
	else if (mes == 11 || mes == 11) {
		mensalidade = 100 * 1.05 * 1.05* 1.05* 1.05* 1.05* 1.05 * 1.05* 1.05* 1.05* 1.05;
		cout << mensalidade << endl;
	}
	else if (mes == 12 || mes == 12) {
		mensalidade = 100 * 1.05 * 1.05* 1.05* 1.05* 1.05* 1.05* 1.05 * 1.05* 1.05* 1.05* 1.05;
		cout << mensalidade << endl;
	}
	else {
		cout << "100" << endl;
	}

	system("pause");
	return 0;
}