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
    ~Matriz(){
        DEL();
    }
    Matriz(){
        NF=0;
        NC=0;
        M = NULL;
    }
    Matriz(Matriz& P){
        NF=P.NF;
        NC=P.NC;
        M = new int* [NF];
        asignarmemoria(P);
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

    //////////      //////////      //////////

    void DEL(){
        for(int i=0;i<NF;i++){
            delete [] M[i];
        }
        delete [] M;
    }
    void asignarmemoria(Matriz& P){
        for(int i=0;i<NF;i++){
            M[i] = new int[NC];
        }
        for(int i=0;i<NF;i++){
            for(int j=0;j<NC;j++){
                M[i][j] = P.M[i][j];
            }
        }
    }

    //////////      //////////      //////////

    friend ostream& operator << (ostream& medio, const Matriz& P){
        if(P.NC==0 && P.NF==0){
            medio << "MATRIZ NULA" << endl;
        }else{
        for(int i=0;i<P.NF;i++){
            for(int j=0;j<P.NC;j++){
                medio << P.M[i][j] << "  ";
            }
            medio << endl;
            medio << endl;
        }
        }
        return medio;
    }
    Matriz operator =(Matriz& P){
        DEL();
        NF=P.NF;
        NC=P.NC;
        M = new int* [NF];
        asignarmemoria(P);
        return (*this);
    }
    Matriz operator +(const Matriz& P){
        Matriz res(NF,NC);
        if(NF==P.NF && NC==P.NC){
            for(int i=0;i<NF;i++){
                res.M[NF][NC]=M[NF][NC]+P.M[NF][NC];
            }
        }else{
            cout << "NO SUMA" << endl;
        }
        return res;
    }
//    Matriz operator -(){
//    }
//    Matriz operator *(){
//    }
//    Matriz operator (){
//    }
//    Matriz operator (){
//    }
//    Matriz operator (){
//    }
};

#endif // MATRIZ_H


//para que sirve const
