#include <iostream>
using namespace std;

int main(){
	int n, i,suma;
	cout << "Ingresa la cantidad de numeros: ";
	cin >> n;
	i = 1;
	suma = 0;
	
	while (i<=n){
		suma = suma + i;
		i++;
	}
	cout <<"La suma de los " << n << "primeros numeros es: " << suma << endl;
	return 0;
}
