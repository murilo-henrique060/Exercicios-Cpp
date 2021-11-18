#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	float n, maior = 0, menor = 0;

	for (i = 0; i < 15; i++){
		cout << "Digite o " << i + 1 << "§ N£mero real:";
		cin >> n;

		if ((i == 0) || (n > maior)){
			maior = n;
		}

		if ((i == 0) || (n < menor)){
			menor = n;
		}

	}

	cout << "O Maior N£mero Digitado foi: " << maior << endl;
	cout << "O Menor N£meo Digitado foi:" << menor << endl;
}