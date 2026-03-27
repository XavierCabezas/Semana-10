#include <iostream>

using namespace std;

int main() {
    int n_ ;
	int num;
	int mayor;
	int menor;

    cout << "cantidad de numeros: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        cout << "ingresar el numero: " << i << ": ";
        cin >> n_;

        if (i == 1) {
            mayor = n_;
            menor = n_;
        } else {
            if (n_ > mayor) {
                mayor = n_;
            }
            if (n_ < menor) {
                menor = n_;
            }
        }
    }

    cout << endl;
    cout << "El mayor es: " << mayor << endl;
    cout << "El menor es: " << menor << endl;

    return 0;
}
	
//Big 0 = O(n) ya que debido a que se pide que el usuario inrese una cantidad de números "n", entonces el tiempo va a aumentar dependiendo de la cantidad de números ingresados.
