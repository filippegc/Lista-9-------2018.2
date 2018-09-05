#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");
	const char EUROSIGN = 128;
	float euro, dolar, real;
	char opc;

	cout << "Digite o valor da cotação do Euro: ";
	cin >> euro;
	cout << endl;
	cout << "Digite o valor da cotação do Dolar: ";
	cin >> dolar;

	cout << "Digite uma opção abaixo para conversão: " << endl;

	cout << "a) Converter de Real para Euro" << endl;
	cout << "b) Converter de Real para Dólar" << endl;
	cout << "c) Converter de Euro para Dólar" << endl;
	cout << "d) Converter de Euro para Real" << endl;
	cout << "e) Converter de Dólar para Euro" << endl;
	cout << "f) Converter de Dólar para Real" << endl;

	cout << endl << endl;
	cout << "Opção: ";
	cin >> opc;

	if (opc == 'a') {
		cout << "Digite a quantidade de reais: ";
		cin >> real;
		euro = real * euro;
		cout << endl << "O valor total é de " << euro << " euros." << endl;
	}
	else if (opc == 'b') {
		cout << "Digite a quantidade de reais: ";
		cin >> real;
		dolar = real * dolar;
		cout << endl << "O valor total é de " << dolar << " dólares." << endl;
	}
	else if (opc == 'c') {
		cout << "Digite a quantidade de euros: ";
		cin >> euro;
		dolar = euro / dolar;
		cout << endl << "O valor total é de " << dolar << " dólares." << endl;
	}
	else if (opc == 'd') {
		cout << "Digite a quantidade de euros: ";
		cin >> euro;
		real = euro / real;
		cout << endl << "O valor total é de " << real << " reais." << endl;
	}
	else if (opc == 'e') {
		cout << "Digite a quantidade de dólares: ";
		cin >> dolar;
		dolar = euro * dolar;
		cout << endl << "O valor total é de " << real << " reais." << endl;
	}
	else if (opc == 'f') {
		cout << "Digite a quantidade de reais: ";
		cin >> real;
		dolar = dolar/real ;
		cout << endl << "O valor total é de " << dolar << " reais." << endl;
	}
	else {
		cout << "Opção inválida! " << endl;
	}

	system("pause");
	return 0;
}