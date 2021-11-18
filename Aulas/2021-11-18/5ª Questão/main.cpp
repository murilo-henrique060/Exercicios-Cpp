#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int vet[40], i;

	for (i = 0; i < 40; i++){
		cout << "Digite o " << i + 1 << "º Número: ";
		cin >> vet[i];
	}

	cout << "Vetor sem Números negativos: ";

	for (i = 0; i < 40; i++){
		if (vet[i] < 0){
			vet[i] = 0;
		}

		cout << vet[i] << " ";
	}
}

