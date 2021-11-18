#include <iostream>
using namespace std;

int main(){
	int vet[20], x, i;
	bool found = false;

	for (i = 0; i < 20; i++){
		cout << "Digite o " << i + 1 << " § N£mero: ";
		cin >> vet[i];
	}

	cout << "Digite Valor a ser proucurado: ";
	cin >> x;

	for (i = 0; i < 20; i++){
		if (vet[i] == x){
			cout << "O n£mero " << x << " est  na posi‡Æo " << i << " do vetor.\n";
			found = true;
		}
	}

	if (found == false){
		cout << "O n£mero " << x << " NÆo est  no vetor";
	}
}

