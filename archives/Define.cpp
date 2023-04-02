#include <iostream>

using namespace std;

#define pi 3.14159; //Defino um comando global chamado PI que contém o valor 3.14159 
#define oi cout << "Olá, mundo!\n";

int variavelGlobal = 500;
int a = 3;

int main(){

	int a = 30;
	cout << pi;
	cout << endl;
	oi;
	cout << variavelGlobal << endl;
	cout << a << endl; //as variáveis locais tem maior prioridade do que as variáveis globais
	return 0;
}
