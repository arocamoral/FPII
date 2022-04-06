#include "matriz.h"

int main (){
    srand (time(NULL));
    Matriz A,B(A),C(4,3);
    Matriz D(2,3);
    int T=2;


    //cout << C << endl << D << endl;
    //D = C;
    A = C * T;
    //A = C * D;

//    bool aux = D != C;
//    cout << aux << endl;
//    if(aux == true){
//        cout << "CIERTO" << endl;
//    }else{
//        cout << "FALSO" << endl;
//    }
    cout << C << endl << T << endl << A << endl;
    return 0;
}


// !(A==B) no reconoce ==
//operador *= doesn't work
