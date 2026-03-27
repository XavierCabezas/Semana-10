#include <iostream>



using namespace std;



int main() {
    int num;

    cout << "cantidad de num: ";
    cin >> num;
    int n_[num];
    for (int i = 0; i < num; i++) {
        cout << "ingresar numero " << i + 1 << ": ";
        cin >> n_[i];
    }
    cout << endl;
    cout << "las parejas:" << endl;

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            if (i != j) {
                cout << "(" << n_[i] << ", " << n_[j] << ")" << endl;
            }
        }
    }



    return 0;
}

//Big O = O (n2) "n al cuadrado". Esto es debido a que el usuario ingresa una n cantidad de números y se haen operaciones n*n para encontrar todas las combinaciones posibles.