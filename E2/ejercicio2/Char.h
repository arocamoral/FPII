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
};

#endif // CHAR_H
