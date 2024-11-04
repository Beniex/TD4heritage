#include <iostream>
#include "Vector.h"




    Vector::Vector(int n){
        nb_elem = n ; 
        int* vect = new int[nb_elem];  
        //pas de return car ce qu'il nous interesse c'est tout l'objet et non que le tableau, 
        // il est auto affecté à la création vu que c'est le constructeur
    }

    Vector::~Vector(){
        delete[] elem; //delete avec crochets car new avec []
    }

    int &Vector:: operator[](int n){
        if(n>nb_elem || n < 0){
            throw ("out of range"); 
        }
        return elem[n]; 

    }








// Implémentation de la fonction
//void afficherMessage() {
    //std::cout << "Bonjour, ceci est un exercice de C++ !" << std::endl;
//}
