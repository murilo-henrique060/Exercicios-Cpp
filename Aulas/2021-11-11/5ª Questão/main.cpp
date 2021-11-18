#include <iostream>
using namespace std;

int main(){
	int vet[10], i, j, menor;

	for (i = 0; i < 10; i++){
		cout << "Digite o " << i + 1 << "§ N£mero: ";
		cin >> vet[i];
	}

	for (i = 9; i > 0; i--){
		for (j = 0; j < i ; j++){
<<<<<<< HEAD
			cout << j;
=======
>>>>>>> 1f2884755847df41363ebf0de6d5891b8af8edbe
			if (vet[j] < vet[i]){
				menor = vet[j];
				vet[j] = vet[i];
				vet[i] = menor;
			}
		}
	}

	cout << "Vetor Ordenado: ";
	for (i = 0; i < 10; i++){
		cout << vet[i] << " ";
	}

	cout << "fim do programa";
}
