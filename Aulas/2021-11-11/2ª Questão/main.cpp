#include <iostream>
using namespace std;

int main(){
	int i, vet_1[5], vet_2[5], vet_3[10];
	
	for (i = 0; i < 5; i++){
		cout << "Digite o " << i + 1 << "§ elemento do 1§ vetor: ";
		cin >> vet_1[i];
		
		cout << "Digite o " << i + 1 << "§ elemento do 2§ vetor: ";
		cin >> vet_2[i];
		
		vet_3[i * 2] = vet_1[i];
		vet_3[i * 2 + 1] = vet_2[i];
	}
	
	cout << "A intercala‡Æo dos vetores 1 e 2 ‚: ";
	
	for (i = 0; i < 10; i++){
		cout << vet_3[i] << ", ";
	}
	
	cout << "fim do programa.";
}
