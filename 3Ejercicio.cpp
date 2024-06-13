#include <iostream>
using namespace std;

int main(){
	int n, i,suma;
	cout << "JAAAIngresa la cantidad de numeros: ";
	cin >> n;
	i = 1;
	suma = 0;
	
	while (i<=n){
		suma = suma + i;
		i++;
	}
	cout <<"La suma de los " << n << "primeros numeros multiplos de son: " << suma << endl;
	return 0;
}
