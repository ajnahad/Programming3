#include <iostream>

int main(){
    // Napisati program koji trazi unos dva cijela broja, odredjuje koji je veci, evidentira poredjenja i vrsi dodjelu.
    int a, b, veci;
    int operacije = 0;

    std::cout << "Unesi a i b: "; std::cin >> a >> b;
    operacije++;

    if (a > b){
        veci = a;
        operacije++;
    }
    else{
        veci = b;
        operacije++;
    }
    std::cout << "Ukupan broj operacija: " << operacije << std::endl;
    std::cout << "Veci broj je: " << veci << std::endl;

    return 0;
}
