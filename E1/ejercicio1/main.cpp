#include "matriz.h"

int main (){

    srand (time(NULL));

    //Ejemplo de funcionamiento

    Matriz M(4,5);
    MatrizD D(4);
    MatrizT T(4);
    MatrizE E(5);
    cout<<"T=\n"<<T<<"D=\n"<<D<<"M=\n"<<M<<"E=\n"<<E;
    cout<<"(T+D)*M*E = "<<endl<<(T+D)*M*E;
    MatrizI I1(4),I2(5);
    if(I1*M*I2==M) cout<<"Producto correcto"<<endl;
    else cout<<"Algo ha ido mal"<<endl;

    return 0;
}

