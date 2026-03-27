#include <iostream>


using namespace std;


int main() {
    int n_ = 0;
	int contador = 0;
    cout << "ingresar numero: ";
    cin >> n_;
    while (n_ > 1) {
        int anterior = n_;
        n_ = n_ / 2;
        cout << anterior << " / 2 = " << n_ << endl;
        contador++;
    }

    cout << endl;
    cout << "las veces que se dividio: " << contador << endl;

    return 0;
}

//Big O = O(log n). Esto es debido a que n decrece de manera n/2...n/2m. Haciendo que la funcion sea log n.