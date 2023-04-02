//C++ --> A linguagem do Batman

#include <iostream>
using namespace std;

int main(){
	int inteiro = 10;
	char letra = 'B';
	double reais = 3.14159;
	bool booleano = true; // 1 = verdadeiro; 0 = falso
	string texto = "Batman";

	cout << inteiro << endl << letra << endl << reais << endl << booleano << endl << texto << endl;

	cout << "A soma entre inteiro e reais deu: " << inteiro+reais << endl;
	
	cout << "Agora digite um valor" << endl;

	cin >>  reais;

	cout << "Você digitou o número: " << reais << endl;

	return 0;
}
