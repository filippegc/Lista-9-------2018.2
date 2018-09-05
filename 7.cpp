#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");
	const char EUROSIGN = 128;
	float euro, dolar, real;
	char opc;

	cout << "Digite o valor da cota��o do Euro: ";
	cin >> euro;
	cout << endl;
	cout << "Digite o valor da cota��o do Dolar: ";
	cin >> dolar;

	cout << "Digite uma op��o abaixo para convers�o: " << endl;

	cout << "a) Converter de Real para Euro" << endl;
	cout << "b) Converter de Real para D�lar" << endl;
	cout << "c) Converter de Euro para D�lar" << endl;
	cout << "d) Converter de Euro para Real" << endl;
	cout << "e) Converter de D�lar para Euro" << endl;
	cout << "f) Converter de D�lar para Real" << endl;

	cout << endl << endl;
	cout << "Op��o: ";
	cin >> opc;

	if (opc == 'a') {
		cout << "Digite a quantidade de reais: ";
		cin >> real;
		euro = real * euro;
		cout << endl << "O valor total � de " << euro << " euros." << endl;
	}
	else if (opc == 'b') {
		cout << "Digite a quantidade de reais: ";
		cin >> real;
		dolar = real * dolar;
		cout << endl << "O valor total � de " << dolar << " d�lares." << endl;
	}
	else if (opc == 'c') {
		cout << "Digite a quantidade de euros: ";
		cin >> euro;
		dolar = euro / dolar;
		cout << endl << "O valor total � de " << dolar << " d�lares." << endl;
	}
	else if (opc == 'd') {
		cout << "Digite a quantidade de euros: ";
		cin >> euro;
		real = euro / real;
		cout << endl << "O valor total � de " << real << " reais." << endl;
	}
	else if (opc == 'e') {
		cout << "Digite a quantidade de d�lares: ";
		cin >> dolar;
		dolar = euro * dolar;
		cout << endl << "O valor total � de " << real << " reais." << endl;
	}
	else if (opc == 'f') {
		cout << "Digite a quantidade de reais: ";
		cin >> real;
		dolar = dolar/real ;
		cout << endl << "O valor total � de " << dolar << " reais." << endl;
	}
	else {
		cout << "Op��o inv�lida! " << endl;
	}

	system("pause");
	return 0;
}