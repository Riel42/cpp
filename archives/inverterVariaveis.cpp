#include <iostream>
using namespace std;
int main(){
	int num = 10, valor = 20;

	cout << num << endl;

	//num *= -1; --> Inverter o valor de forma tradicional

	cout << -num << endl; //Assim também deixa o valor negativo

	cout << num << endl; //Mas o valor de num não mudou para negativo

	num *= -1;
	cout << -num << endl; // -(-n) = n

	valor = -valor; //variável recebe o valor dela negativo
	cout << valor << endl;

	return 0;
}
