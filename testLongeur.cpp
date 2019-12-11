/*
 chaine de caractères
 essai sur la longueur d'une chaîne
 */

#include <iostream>


using namespace std;

int main() {
   
   char mot[8];
   
   cout << "donnez un mot" << endl;
   cin.getline( mot , sizeof( mot ) );
   cout << mot << endl;
   
   return 0;
}


