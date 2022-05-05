#ifndef MATRIZ_H
#define MATRIZ_H

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Matriz{
protected:
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
    Matriz(const Matriz& P){
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
        NF = 0;
        NC = 0;
    }
    void asignarmemoria(const Matriz& P){
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
    }

    //////////      //////////      //////////

    friend ostream& operator <<(ostream& medio, const Matriz& P){
        if(P.NC==0 && P.NF==0){
            medio << "MATRIZ NULA" << endl;
        }else{
            for(int i=0;i<P.NC;i++) medio << "   -";
            medio << endl;
            for(int i=0;i<P.NF;i++){
                medio << " |";
                for(int j=0;j<P.NC;j++) medio << " " << P.M[i][j] << " |";

                medio << endl;
                for(int i=0;i<P.NC;i++) medio << "   -";

                medio << endl;
            }
        }
        return medio;
    }
    Matriz operator =(const Matriz& P){
        DEL();
        asignarmemoria(P);
        return (*this);
    }
    bool operator ==(const Matriz& P){
        bool condicion = false;
        if(NF==P.NF && NC==P.NC){
            condicion = true;
            for(int i=0;i<NF;i++){
                for(int j=0;j<NC;j++){
                    if(M[i][j] != P.M[i][j]){
                        condicion = false;
                    }
                }
            }
        }
        return condicion;
    }
    bool operator !=(const Matriz& P){
        bool condicion = false;
        if(NF==P.NF && NC==P.NC){
            condicion = true;
            for(int i=0;i<NF;i++){
                for(int j=0;j<NC;j++){
                    if(M[i][j] != P.M[i][j]){
                        condicion = false;
                    }
                }
            }
        }
        return !condicion;
    }
    Matriz operator +(const Matriz& P){
        Matriz res;
        if(NF==P.NF && NC==P.NC){
            res = P;
            for(int i=0;i<NF;i++){
                for(int j=0;j<NC;j++){
                    res.M[i][j]+=M[i][j];
                }
            }
        }
        return res;
    }
    Matriz operator +=(const Matriz& P){
        if(NF==P.NF && NC==P.NC){
            for(int i=0;i<NF;i++){
                for(int j=0;j<NC;j++){
                    M[i][j]+=P.M[i][j];
                }
            }
        }else{
            cout << "Dimensiones de matrices diferentes" << endl;
        }
        return (*this);
    }
    Matriz operator -(const Matriz& P){
        Matriz res;
        if(NF==P.NF && NC==P.NC){
            res = P;
            for(int i=0;i<NF;i++){
                for(int j=0;j<NC;j++){
                    res.M[i][j]-=M[i][j];
                }
            }
        }
        return res;
    }
    Matriz operator -=(const Matriz& P){
        if(NF==P.NF && NC==P.NC){
            for(int i=0;i<NF;i++){
                for(int j=0;j<NC;j++){
                    M[i][j]-=P.M[i][j];
                }
            }
        }else{
            cout << "Dimensiones de matrices diferentes" << endl;
        }
        return (*this);
    }
    Matriz operator *(const Matriz& P){
        Matriz res(NF,P.NC);
        if(NC==P.NF){
            for(int i=0;i<NF;i++){
                for(int j=0;j<P.NC;j++){
                    res.M[i][j] = 0;
                    for(int h=0;h<NC;h++){
                        res.M[i][j]+=M[i][h]*P.M[h][j];
                    }
                }
            }
        }else{
            res.DEL();
        }
        return res;
    }
    Matriz operator *(const int &P){
        Matriz res(NF,NC);
        for(int i=0;i<NF;i++){
            for(int j=0;j<NC;j++){
                res.M[i][j]=M[i][j]*P;
            }
        }
        return res;
    }
};

class MatrizT:public Matriz{
public:
    MatrizT(int A):Matriz(A, A){
        if(A>2){
            for(int i=0;i<A-2;i++){
                for(int j=i+2;j<A;j++){
                    M[i][j] = 0;
                    M[j][i] = 0;
                }
            }
        }
    }
};

class MatrizD:public MatrizT{
public:
    MatrizD(int A):MatrizT(A){
        for(int i=0;i<A-1;i++){
            for(int j=i+1;j<i+2;j++){
                M[i][j] = 0;
                M[j][i] = 0;
            }
        }
    }
};

class MatrizE:public MatrizD{
public:
    MatrizE(int A):MatrizD(A){
        int aux = rand()% 10;
        for(int i=0;i<A;i++) M[i][i] = aux;
    }
};

class MatrizI:public MatrizE{
public:
    MatrizI(int A):MatrizE(A){
        for(int i=0;i<A;i++) M[i][i] = 1;
    }
};

#endif // MATRIZ_H
