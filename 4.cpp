#include <iostream>

using namespace std;

int main()
{
	int idade;
	float planoSaude;

	cout << "Informa tua idade para saber o valor a pagar: ";
	cin >> idade;

	if (idade == 0 || idade < 10) {
		planoSaude = 220 + 80;

		cout << "O valor total a pagar eh de: R$" << planoSaude << endl;
	}
	else if (idade == 10 || idade <= 30) {
		planoSaude = 220 + 150;

		cout << "O valor total a pagar eh de: R$" << planoSaude << endl;
	}
	else if (idade == 31 || idade <= 60) {
		planoSaude = 220 + 195;

		cout << "O valor total a pagar eh de: R$" << planoSaude << endl;
	}
	else if (idade > 60) {
		planoSaude = 220 + 250;

		cout << "O valor total a pagar eh de: R$" << planoSaude << endl;
	}
	else {
		cout << "Idade invalida!\n";
	}
	system("pause");
	return 0;
}