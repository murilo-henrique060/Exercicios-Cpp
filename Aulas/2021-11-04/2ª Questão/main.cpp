#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n;
	int i, j;

	cout << "Digite Um n£mero real: ";
	cin >> n;

	for (i = 0; i < 20; i++){
		for (j = 0; j < 10; j++){
			cout << (j + 1) + i * 10 << " = " << n * ((j + 1) + i * 10) << " ";  // 200 = (9 + 1) + i * 10
		}
		cout << endl;
	}

	cout << "fim do programa" << endl;
}