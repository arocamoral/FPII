#include "matriz.h"

int main (){
    srand (time(NULL));
    Matriz A,B(A),C(4,5);
    Matriz D(3,2);

    D = C;
    cout << A << endl << B << endl << C << endl << D;
    return 0;
}



