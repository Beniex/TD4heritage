#ifndef __VECTORBH__
#define __VECTORBH__

class Vectorb : public Vector
{

    public: 
        Vectorb (int a, int b); // deux parametres maintenant 
        ~Vector(); 
        int& operator[](int);

    private : 
        int debut; 

}; 

#endif 