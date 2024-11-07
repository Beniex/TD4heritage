#include <iostream>
#include "Vectorb.h"




    Vectorb::Vectorb(int a, int b): Vector(b-a +1), debut(a) // on vient utiliser le constru de la classe mere qui met à jour les variables nb_elem et elem 
    // debut(a) c'est une construction de debut avec la valeur a donc égal à debut = a; 
    {       
    }

    

    Vectorb::~Vectorb(){
        delete[] elem; //delete avec crochets car new avec []
    }

    int &Vectorb:: operator[](int n){
        if(n>= nb_elem + debut || n < debut){
            throw ("out of range"); 
        }

        return elem[n + debut ]; 


        // return Vector::operator[n+debut] également possible 

    }

