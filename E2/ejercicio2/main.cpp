#include "Char.h"

int main (){
    srand (time(NULL));

    //Ejemplo de funcionamiento

     Matriz<Char> M(4,5);
     MatrizD<Char> D(4);
     MatrizT<Char> T(4);
     MatrizE<Char> E(5);
     cout<<"T=\n"<<T<<"D=\n"<<D<<"M=\n"<<M<<"E=\n"<<E;
     cout<<"(T+D)*M*E = "<<endl<<(T+D)*M*E;
     MatrizI<Char> I1(4),I2(5);
     if(I1*M*I2==M) cout<<"Producto correcto"<<endl;
     else cout<<"Algo ha ido mal"<<endl;

    return 0;
}

//no se generan numeros float
