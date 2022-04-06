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
        return !(M==P.M);
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
    Matriz operator *=(const Matriz& P){
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
            //M=res.M;
        }else{
            cout << "Dimensiones de matrices incorrectas" << endl;
        }
        return res;
    }

};

#endif // MATRIZ_H
