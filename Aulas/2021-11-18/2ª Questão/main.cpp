#include <iostream>
using namespace std;

int main(){
	int vet[10], i;

	cout << "Vetor com os 10 primeiros n�meros �mpares: ";

	for (i = 0; i < 10; i++){
		vet[i] = 1 + i * 2;

		cout << vet[i] << " ";
	}
}

