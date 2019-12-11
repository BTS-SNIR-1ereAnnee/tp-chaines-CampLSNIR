

#include <iostream>
#include <string>
#include <cstring>

using namespace std;


void motparmot( string str ){

    int motcount = 0;
    bool nvmot = false;
    
    string buffer = "";
   
    for( int i = 0 ; i < str.size() ; i++ ){ //boucle pour tous les caractère

        if( str[i] == ' '){
            if( nvmot == true){ // verifie si les nouveaux caractère dans buffer ne sont pac uniquement des espace
                motcount++; // incrementation du nombre de mots
                cout << "mot" << motcount << " : " << buffer << endl;
                nvmot = false;
            }
            buffer = ""; // le nouveau mot doit commencer vide
        }else{
            nvmot = true;
            buffer = buffer + str[i]; // conctate les nouveau caractère du nouveau mot
        }
    }
    
    if( nvmot == true){ / verifie si les nouveaux caractère dans buffer ne sont pac uniquement des espace
        motcount++; // incrementation du nombre de mots
        cout << "mot" << motcount << " : " << buffer << endl; //affiche le dernier mot
    }

}

int main() {
   
    cout << "donnez une phrase" << endl;
    string str;
   
    getline( cin , str ,'\n'); // save toute la ligne avec les espace sans presciser de taill max

    
    motparmot( str );
   
    return 0;
}


