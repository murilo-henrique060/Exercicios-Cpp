#include <iostream>
using namespace std;

int main(){
	int i, neg = 0, numeros[20], soma = 0;
	
	for (i = 0; i < 20; i++){
		cout << "Digite o " << i + 1 <<"§ n£mero: ";
		cin >>  numeros[i];
		
		if (numeros[i] > 0){
			soma += numeros[i];
		}
		else if (numeros[i] < 0){
			neg++;
		}
	}
	
 	cout << "Soma dos n£meros positivos digitados: " << soma << endl;
 	cout << "Quantidade de n£meros negativos digitados: " << neg;
}
