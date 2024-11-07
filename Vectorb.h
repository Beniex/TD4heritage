#ifndef __VECTORBH__
#define __VECTORBH__
#include "Vector.h"

class Vectorb : public Vector{

    public: 
        Vectorb (int a, int b); // deux parametres maintenant 
        ~Vectorb(); 
        int& operator[](int);

    private : 
        int debut; 

}; 

#endif 