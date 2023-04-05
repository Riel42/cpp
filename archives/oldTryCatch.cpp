#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

double divisao(double a, double b){
	if(b == 0){
		throw "Erro: o divisor não pode ser igual a zero!";
	}

	return a/b;
}

int main(){
	
	vector<int> valor(3);
	double x, y;

	try{
		valor.at(3) = 8; //Vai gerar um erro (o erro é que a terceira posição do vetor é o índice 2)

		cout << valor[5] << endl;
	}
	catch(exception& erro){
		cout << "Você não pode inserir um valor num vetor numa posição não existente!\nTipo de erro: ";
		cout << erro.what() << endl << endl;	
	}

	cin >> x >> y;

	try{
		cout << divisao(x,y) << endl;
	}
	catch(const char* e){
		cout << e << endl;
	}


}


