#include <iostream>
using namespace std;

int main(){
	int vet[15], i, multpl_2 = 0;
	
	for (i = 0; i < 15; i++){
		cout << "Digite o " << i + 1 << "§ n£mero inteiro: ";
		cin >> vet[i];
		
		if (vet[i] == 2){
			multpl_2++;
		}
	}
	
	cout << "A quantidade de n£meros iguais a 2 ‚: " << multpl_2 << endl;
	
	cout << "Os n£meros m£ltiplos de 3 sÆo: ";
	for (i = 0; i < 15; i++){
		if (vet[i] % 3 == 0){
			cout << vet[i] << " ";
		}
	}
	
	cout << "\nAs posi‡äes que possuem elementos multiplos de 2: ";
	for (i = 0; i < 15; i++){
		if (vet[i] % 2 == 0){
			cout << i << " ";
		}
	}
	
	cout << "fim do programa";
}
