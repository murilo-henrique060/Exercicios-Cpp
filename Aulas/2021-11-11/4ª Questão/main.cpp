#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, vetorOriginal[10], vetorInvertido[10];
	
	for (i = 0; i < 10; i++){
		cout << "Digite o " << i + 1 << "§ n£mero inteiro para o vetor original: ";
		cin >> vetorOriginal[i];
	}
	
	cout << "Vetor Original: ";
	
	for (i = 0; i < 10; i++){
		vetorInvertido[9 - i] = vetorOriginal[i];
		
		cout << vetorOriginal[i] << " ";
	}
	
	cout << "\nVetor Ivertido: ";
	
	for (i = 0; i < 10; i++){
		cout << vetorInvertido[i] << " "; 
	}
	
	cout << "fim do programa";
}
