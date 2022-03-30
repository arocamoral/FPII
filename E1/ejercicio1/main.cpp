#include "matriz.h"

int main (){
    srand (time(NULL));
    Matriz A,B(A),C(4,5);
    Matriz D(3,2);


    cout << endl << B << endl << C << endl << D << "FIN" << endl;
    D = C;
    bool aux = (D == C);
    if(aux == true){
        cout << "SON IGUALES" << endl;;
    }else{
        cout << "DIFERENTES" << endl;
    }
    cout << C << endl << D << endl << A << endl;
    return 0;
}



