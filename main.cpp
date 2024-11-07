#include "Vector.h"
#include "Vectorb.h"

int main() {
   Vector a(5); 
   a[2]=2; 
   Vectorb b(4,8); 
   b[8] = 3; 
   b[3] = 2;  //erreur indice hors vecteur
    return 0;
}
