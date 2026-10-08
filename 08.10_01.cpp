#include <iostream>
// Napisi program koji unosi dva nenegativna broja cijela broja a i b i potrebno je izracunati proizvod 
// sabiranjem broja a ukupno b puta, a zatim jednom operacijom mnozenja. Ispisati oba rezultata i broj sabiranja.
int main(){
    int a, b;
    int br_sab = 0;
    int proizvod_petlja = 0;
    std::cout << "Unesi dva nenegativna broja: " << std::endl; std::cin >> a >> b;
    a = abs(a);
    b = abs(b);

    // For petlja za sabiranje
    for (int i = 0; i < b; i++){
        proizvod_petlja += a;
        br_sab++;
    }
    // Klasicno mnozenje
    int proizvod = a * b;
    std::cout << "Proizvod preko petlje: " << proizvod_petlja << std::endl;
    std::cout << "Broj sabiranja: " << br_sab << std::endl;
    std::cout << "Proizvod preko klasicnog mnozenja: " << proizvod << std::endl;

    return 0;
}
