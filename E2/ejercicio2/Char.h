#ifndef CHAR_H
#define CHAR_H

#include "matriz.h"

class Char{
protected:
    char A;
public:
    Char(){
        A=0;
    }
    Char(int n){
        A=n;
    }

    //////////      //////////      //////////

    friend ostream& operator <<(ostream& medio, const Char& P){
        char o=P.A+65;
        medio << o;
        return medio;
    }
    //    Char operator =(const Char& P){
    //        DEL();
    //        asignarmemoria(P);
    //        return (*this);
    //    }
    //    bool operator ==(const Char& P){
    //        bool condicion = false;
    //        if(NF==P.NF && NC==P.NC){
    //            condicion = true;
    //            for(int i=0;i<NF;i++){
    //                for(int j=0;j<NC;j++){
    //                    if(M[i][j] != P.M[i][j]){
    //                        condicion = false;
    //                    }
    //                }
    //            }
    //        }
    //        return condicion;
    //    }
    bool operator !=(const Char& P){
        return !(A==P.A);
    }
    Char operator +=(const Char& P){
        A=(A+P.A)%10;
        return (*this);
    }
    Char operator -=(const Char& P){
        A=(A-P.A)%10;
        return (*this);
    }
    Char operator *(const Char& P){
        char res;
        res=(A*P.A)%10;
        return res;
    }
    Char operator *(const int &P){
        char res;
        res=(A*P)%10;
        return res;
    }
    //    Matriz operator *=(const Matriz& P){
    //        Matriz res(NF,P.NC);
    //        if(NC==P.NF){
    //            for(int i=0;i<NF;i++){
    //                for(int j=0;j<P.NC;j++){
    //                    res.M[i][j] = 0;
    //                    for(int h=0;h<NC;h++){
    //                        res.M[i][j]+=M[i][h]*P.M[h][j];
    //                    }
    //                }
    //            }
    //            //M=res.M;
    //        }else{
    //            cout << "Dimensiones de matrices incorrectas" << endl;
    //        }
    //        return res;
    //    }

};

#endif // CHAR_H
