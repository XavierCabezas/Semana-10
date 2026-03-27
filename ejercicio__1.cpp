#include <iostream>

using namespace std;

int main (){
	
	int num_1;
	int num_2;
	int num_3;
	
	cout<<"ingrese primer numero: ";
	cin >> num_1; 
	
	cout<<"ingrese segundo numero: ";
	cin>> num_2;
	
	cout<<"ingrese tercer num: ";
	cin>> num_3;
	
	int promedio = (num_1 + num_2 + num_3) / 3;
	cout<< "el promedio es: "<<promedio<<endl;
	
	return 0;
	
	
	
}

//Big O sería constante, o sea, O(1) debido a que es fijo el num de cálculos sin importar el tamaño.