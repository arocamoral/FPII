#ifndef MATRIZ_H
#define MATRIZ_H

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

template <class T>
class Matriz{
protected:
    T **M;
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
        M = new T*[NF];
        for(int i=0;i<NF;i++){
            M[i] = new T[NC];
        }
        introducirdatos();
    }

    //////////      //////////      //////////

    void introducirdatos(){
        for(int i=0;i<NF;i++){
            for(int j=0;j<NC;j++){
                M[i][j] = rand()%10;
            }
        }
    }
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
        M = new T* [NF];
        for(int i=0;i<NF;i++){
            M[i] = new T[NC];
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
                        res.M[i][j]+=(M[i][h]*P.M[h][j]);
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

template <class T>
class MatrizT:public Matriz<T>{
public:
    MatrizT(int A):Matriz<T>(A, A){
        if(A>2){
            for(int i=0;i<A-2;i++){
                for(int j=i+2;j<A;j++){
                    Matriz<T>::M[i][j] = 0;
                    Matriz<T>::M[j][i] = 0;
                }
            }
        }
    }
};

template <class T>
class MatrizD:public MatrizT<T>{
public:
    MatrizD(int A):MatrizT<T>(A){
        for(int i=0;i<A-1;i++){
            for(int j=i+1;j<i+2;j++){
                MatrizT<T>::M[i][j] = 0;
                MatrizT<T>::M[j][i] = 0;
            }
        }
    }
};

template <class T>
class MatrizE:public MatrizD<T>{
public:
    MatrizE(int A):MatrizD<T>(A){
        int aux = rand()% 10;
        for(int i=0;i<A;i++) MatrizD<T>::M[i][i] = aux;
    }
};

template <class T>
class MatrizI:public MatrizE<T>{
public:
    MatrizI(int A):MatrizE<T>(A){
        for(int i=0;i<A;i++) MatrizE<T>::M[i][i] = 1;
    }
};

#endif // MATRIZ_H
