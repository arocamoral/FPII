#include "matriz.h"

int main (){
    srand (time(NULL));
    Matriz A,B(A),C(1,2);
    Matriz D(2,3);


    //cout << C << endl << D << "FIN" << endl;
    //D = C;
    A = C * D;

//    bool aux = D == C;
//    if(aux == true){
//        cout << "SON IGUALES" << endl;
//    }else{
//        cout << "DIFERENTES" << endl;
//    }
    cout << C << endl << D << endl << A << endl;
    return 0;
}



// =+ no devuelve resultado, void, se vuelca en A
// != es !(A==B) literalmente, booleanos
