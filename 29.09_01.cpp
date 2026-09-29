#include <iostream>

int main(){
    // Napisati program koji trazi unos nenegativnog cijelog broja x. 
    // Izracunati kvadrat broja x ponovljenim sabiranjem x puta a zatom operacijom mnozenja.

    int x;
    long long kvadratPetlja = 0; // cuvanje rezultata ponovljenog sabiranja
    long long kvadratMnozenja; // cuvanje rezultata mnozenja
    
    std::cout << "Unesite x: "; std::cin >> x;
    for(int i = 0; i < x; i++){ // petlja se ponavlja x puta; linearna slozenost
        kvadratPetlja += x; // svaki put dodajemo na x 
    }

    kvadratMnozenja = x*x;
    std::cout << "Sabiranje: " << kvadratPetlja << std::endl;
    std::cout << "Mnozenje: " << kvadratMnozenja;
    return 0;
}