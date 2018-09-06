	# include <iostream>

	using namespace std;

	int main()
	{
		setlocale(LC_ALL, "ptb");
		int mes;
		double mensalidade;

		cout << "Informe o mes em que a mensalidade está sendo paga: ";
		cin >> mes;


		if (mes == 2) {
			mensalidade = 100 * 1.05;
			cout << mensalidade << endl;
		}

		else if (mes == 3) {
			mensalidade = 100 * 1.05 * 1.05;
			cout << mensalidade << endl;
		}
		else if (mes == 4) {
			mensalidade = 100 * 1.05 * 1.05* 1.05;
			cout << mensalidade << endl;
		}
		else if (mes == 5) {
			mensalidade = 100 * 1.05 * 1.05* 1.05* 1.05;
			cout << mensalidade << endl;
		}
		else if (mes == 6) {
			mensalidade = 100 * 1.05 * 1.05* 1.05* 1.05* 1.05;
			cout << mensalidade << endl;
		}
		else if (mes == 7) {
			mensalidade = 100 * 1.05 * 1.05* 1.05* 1.05* 1.05* 1.05;
			cout << mensalidade << endl;
		}
		else if (mes == 8) {
			mensalidade = 100 * 1.05 * 1.05* 1.05 * 1.05* 1.05* 1.05* 1.05;
			cout << mensalidade << endl;
		}
		else if (mes == 9) {
			mensalidade = 100 * 1.05 * 1.05* 1.05* 1.05 * 1.05* 1.05* 1.05* 1.05;
			cout << mensalidade << endl;
		}
		else if (mes == 10) {
			mensalidade = 100 * 1.05 * 1.05* 1.05* 1.05* 1.05 * 1.05* 1.05* 1.05* 1.05;
			cout << mensalidade << endl;
		}
		else if (mes == 11) {
			mensalidade = 100 * 1.05 * 1.05* 1.05* 1.05* 1.05* 1.05 * 1.05* 1.05* 1.05* 1.05;
			cout << mensalidade << endl;
		}
		else if (mes == 12) {
			mensalidade = 100 * 1.05 * 1.05* 1.05* 1.05* 1.05* 1.05* 1.05 * 1.05* 1.05* 1.05* 1.05;
			cout << mensalidade << endl;
		}
		else {
			cout << "100" << endl;
		}




		/* 
		#include <iostream>
		#include <cmath>
		
		using namespace std;
		int main()
		{
			setlocale(LC_ALL,"ptb");
			int mes;
			float valor = 100;
		
		cout <<"Informe o mês do pagamento: ";
		cin>>mes;
		valor = valor *pow (1.05, mes-1);
		cout<< "O valor é de " << valor <<endl;
		system("pause");
		return 0;
		}
		
		*/

		system("pause");
		return 0;
	}
