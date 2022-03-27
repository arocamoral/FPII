#ifndef MATRIZ_H
#define MATRIZ_H

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Matriz
{
private:
    int **M;
    int NF,NC;
public:
    Matriz(){
        NF=0;
        NC=0;
        M = NULL;
    }
    Matriz(const Matriz& A) {
        NF=A.NF;
        NC=A.NC;
        M = new int* [NF];
        for(int i=0;i<NF;i++){
            M[i] = new int[NC];
        }
        for(int i=0;i<NF;i++){
            for(int j=0;j<NC;j++){
                M[i][j] = A.M[i][j];
            }
        }
    }
    Matriz(int N, int n){
        NF = N;
        NC = n;
        M = new int*[NF];
        for(int i=0;i<NF;i++){
            M[i] = new int[NC];
        }
        for(int i=0;i<NF;i++){
            for(int j=0;j<NC;j++){
                M[i][j] = rand()% 10;
            }
        }
    }
    ~Matriz() {
        for(int i=0;i<NF;i++){
            delete [] M[i];
        }
        delete [] M;
    }
    friend ostream& operator << (ostream& medio, const Matriz& A){
        if(A.NC==0 && A.NF==0){
            medio << "MATRIZ NULA" << endl;
        }else{
        for(int i=0;i<A.NF;i++){
            for(int j=0;j<A.NC;j++){
                medio << A.M[i][j] << "  ";
            }
            medio << endl;
            medio << endl;
        }
        }
        return medio;
    }
    Matriz operator =(const Matriz& P){
        for(int i=0;i<NF;i++){
            delete [] M[i];
        }
        delete [] M;
        NF=P.NF;
        NC=P.NC;

        M = new int* [NF];
        for(int i=0;i<NF;i++){
            M[i] = new int[NC];
        }
        for(int i=0;i<NF;i++){
            for(int j=0;j<NC;j++){
                M[i][j] = P.M[i][j];
            }
        }
        return (*this);
    }
};

#endif // MATRIZ_H
