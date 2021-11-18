#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int vet[12], X, Y, i;

	for (i = 0; i < 12; i++){
		cout << "Digite um N£mero Inteiro Para a " << i << "¦ Posi‡Æo: ";
		cin >> vet[i];
	}

	cout << "Digite um n£mero de 0 … 11 para X: ";
	cin >> X;

	cout << "Digite um n£mero de 0 … 11 para Y: ";
	cin >> Y;

	cout << "A soma de " << vet[X] << " e " << vet[Y] << " ‚: " << vet[X] + vet[Y];
}

