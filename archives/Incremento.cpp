#include <iostream>

using namespace std;

int main(){
	
	int N, M;

	N = 0;
	M = 10;

	N++;
	cout << N << endl;	
	
	N+=100;
	cout << N << endl;

	N*=2;
	cout << N << endl;

	//M++ --> M = M + 1
	//++M --> M = 1 + M

	cout << ++M << endl; //Vai imprimir 11, pq ele primeiro incrementa e depois mostra a variável
	cout << M++ << endl; //Vai imprimir 11 de novo, pq ele primeiro mostra a variável e depois incrementa

	cout << M << endl; //Agora o valor vale 12
}
