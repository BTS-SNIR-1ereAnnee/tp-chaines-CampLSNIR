/*
 Conversion d'une chaine en entier
 */
#include <iostream>
#include <cmath>

bool valide_entier(char chaine[], int &refNombreEntier);

int main() {
   
   int nombreEntier;
   char chaine[20];
   
   do {
      std::cout << "Tapez une chaîne de caractères : ";
      std::cin >> chaine;
   } while (!valide_entier(chaine, nombreEntier));
   
   std::cout << "L'entier vaut : " << nombreEntier << std::endl;
   return EXIT_SUCCESS;
}


/**
 valide une chaine de caractère
 retourne la valeur entière

 @param chaine la chaine à valider
 @param refNombreEntier le nombre entier converti
 @return true si la chaine est un entier false sinon
 */
 
 
 
 
bool valide_entier(char chaine[], int &refNombreEntier) {

    int result = 0;
    
    if( chaine[0] == 48 ) return false; // chiffre qui ne commence pas par zero
    for( int i = 0 ; chaine[i] != '\0' ; i++ ){ // jusqua la fin de la chaine
        if( chaine[i] > 57 or chaine[i] < 48 ){ // > 57 (9 dans ma table ASCII ) < 48 
            return false; // return false si la chaine ne contien pas que des numeros
        }else{
            int v = (int(chaine[i])-48); // convertir en valeur numérique
            result = (result*10) + v ; 
        }
    }
    
    refNombreEntier = result; //asigne le resulta a refNombreEntier
    
    return true;
}



