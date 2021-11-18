#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n, cont = 1;
	
	do{
		cout << "Digite um n£mero: ";
		cin >> n;
		
		if (n != 0){
			cont *= n;
		}

	}while (n != 0);
	
	cout << "O produto dos n£meros ‚: " << cont;
}