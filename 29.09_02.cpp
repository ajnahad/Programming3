#include <iostream>

int main(){
    // Napisati program koji trazi unos nekog niza i trazeni broj. 
    // Potrebno je pretrazivati niz redom dok se ne pronadje broj. Napisati koliko brojeva je provjereno.
    int n;
    int trazeni; // trazeni broj
    int niz[100]; 

    std::cout << "Unesi broj elemenata niza: "; std::cin >> n;
    std::cout << "Unesi elemente niza: " << std::endl;

    for(int i = 0; i < n; i++){
        std::cout << ">> "; std::cin >> niz[i];
    }
    
    std::cout << "Unesi trazeni broj: "; std::cin >> trazeni;

    int provjereno = 0;
    for (int i = 0; i < n; i++){
        provjereno++;
        if (niz[i] == trazeni){
            break;
        }
    }
    std::cout << "Provjereno je " << provjereno << " brojeva." << std::endl;
    return 0;
}
