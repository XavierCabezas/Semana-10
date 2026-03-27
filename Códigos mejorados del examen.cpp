//CÓDIGO QUE HICE EN EXAMEN
#include <iostream>

using namespace std;

int main (){
	
	int x = 10
	int y = 10
	
	cin>> "x+y">>endl;
	cout<<"suma es igual a: "<< x+y<<endl;
	cin>> "x*y">>
	cout<< "multiplicación es igual a "<<x*y<<endl;
	cin >> "x-y">>
	cout<<"resta es igual a: "<<x-y<<endl;
	
	return 0;
}

//CÓDIGO MEJORADO

#include <iostream>

using namespace std;


int main() {
	
	int x;
	int y;

	cout<<"Ingrese el valor 1"<<endl;
	cin>>x;

	
	cout<<"Ingrese el valor 2"<<endl;
	cin>>y;

	
	cout<<"Suma "<<x+y<<endl;
	cout<<"Resta "<<x-y<<endl;
	cout<<"Multiplicacion "<<x*y<<endl;
	 
	 return 0;
}
	
//En el código que yo hice, me equivoqué porque no le puse al usuario que ingrese sus propios 2 números, sino que los fijé yo. Aparte me confundí con la estructura y no separé los cout y los cin. Tuve que haber organizado mejor las ideas en vez de escribirlas en un código sin sentido. 


////////////////////////////////////////////////////////////////////////////////////////////////////


//CÓDIGO QUE HICE EN EXAMEN 
#include <iostream>
using namespace std; 


int main (){
	
	cin>>"ingrese un número">>endl;
	
}

//CÓDIGO MEJORADO
int num;
	cout<<"Ingrese un numero"<<endl;
	cin>>num;
	
	for(int i = 1; i<=num;i++){
		cout<<i<<" -> "<<i*i<<endl;
	}
	
	
	return 0;
}

//En el código que hice en el examen, no logré completar el código debido al poco tiempo que me quedaba. Me demoré mucho haciendo las otras preguntas. De igual manera, en lo que escribí, usé cin en vez de cout primero y eso me hizo equivocarme desde el inicio. 

