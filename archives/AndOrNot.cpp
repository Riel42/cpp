#include <iostream>
using namespace std;
int main(){
	int x;

	cin >> x;

	if ((x >= 3 && x <= 10) || (x >= 12 && x < 15) || (x >= 20 && x < 30)){
		cout << "Valor aceito" << endl;
	}
	else{
		cout << "Valor não aceito :/" << endl;
	}
}
