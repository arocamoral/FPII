#include "Char.h"

int main (){
    srand (time(NULL));

    //////////      //////////      //////////

     Matriz<Char> M(4,5);
     MatrizD<Char> D(4);
     MatrizT<Char> T(4);
     MatrizE<Char> E(5);
//     Matriz<Char> M(2,3);
//     MatrizE<Char> E(3);
     cout<<"T=\n"<<T<<"D=\n"<<D<<"M=\n"<<M<<"E=\n"<<E;
     cout<<"(T+D)*M*E = "<<endl<<(T+D)*M*E;
     //cout<<"M=\n"<<M<<"E=\n"<<E<<"M*E = "<<endl<<M*E;
     MatrizI<Char> I1(4),I2(5);
     //cout<<I1<<endl<<I2<<endl<<I1*M*I2<<endl<<M<<endl;
     if(I1*M*I2==M) cout<<"Producto correcto"<<endl;
     else cout<<"Algo ha ido mal"<<endl;
    //cout << E << endl << "" << endl;
    return 0;
}

//hacer destructores
//no se generan numeros float
