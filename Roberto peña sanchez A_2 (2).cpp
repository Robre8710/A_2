
#include <iostream>
#include <cmath>

using namespace std;

double suma(double a, double b){
    return a + b;
}

double Resta(double a, double b){
    return a - b;
}

double Multiplicacion(double a, double b){
    return a * b;
}

double Division(double a, double b){
    return a / b;
}

int main(void){
    
    double n1, n2;
    int opcion;
    
    cout << "Ingrese el primer numero: " << endl;
    cin >> n1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> n2;
    
    cout << "\n1, Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "Ingrese la opcion que desea: " << endl;
    cin >> opcion;
    
    if (opcion == 1){
        cout << "La suma es: " << suma(n1, n2);
    }
    if (opcion == 2){
        cout << "La Resta es: " << Resta(n1, n2);
    }
    if (opcion == 3){
        cout << "La Multiplicacion es: " << Multiplicacion(n1, n2);
    }
    if (opcion == 4){
        cout << "La Division es: " << Division(n1, n2);
    }
    
    

    return 0;
}