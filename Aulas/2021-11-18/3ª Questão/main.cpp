#include <iostream>
using namespace std;

int main(){
	int vet[16], i, troca;

	for (i = 0; i < 16; i++){
		cout << "Digite o " << i + 1 << "§ N£mero: ";
		cin >> vet[i];
	}

	cout << "Vetor Original: ";

	for (i = 0; i < 8; i++){
		troca = vet[i];
		vet[i] = vet[i + 8];
		vet[i + 8] = troca;
	}

	cout << "\nVetor Modificado: ";

	for (i = 0; i < 16; i++){
		cout << vet[i] << " ";
	}
}

