#include <iostream>
using namespace std;

int main(){
	float soma = 0;
	int i;

	for (i = 1; i <= 50; i++){
		soma += (1 + (i - 1) * 2) / i;
		cout << 1 + (i - 1) * 2 << "/" << i << " ";// an = a1 + (n - 1) * r -> impar = 1 + (50 - 1) * 2
	}
	cout << "A soma vale: " << soma;
}