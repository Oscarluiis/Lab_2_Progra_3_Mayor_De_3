#include <iostream>
using namespace std;

//Siempre se define al principio del programa

double encontrar_mayor(double, double, double);

int main() {

    double num_1, num_2, num_3;

        cout<<"Ingrese tres numero de tipo flotante (double) :";
        cout<<"\n";
        cin >> num_1 >> num_2 >> num_3;


        cout<<endl;
        cout<<"El mayor es :" << encontrar_mayor(num_1, num_2, num_3);

    return 0;


}

double encontrar_mayor(double x, double y, double z){
    double mayor = x;

    if(y>mayor){
        mayor = y;
    }
    if(z>mayor) {
        mayor = z;
    }
    return mayor;
}


