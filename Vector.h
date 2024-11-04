#ifndef __VECTORH__
#define __VECTORH__

class Vector{
    protected: // pour que ces attributs soient accessibles depuis Vectorb
    int nb_elem; 
    int* elem; 

    public: 
        Vector (int); 
        ~Vector(); 
        int& operator[](int);

}; 

#endif 
