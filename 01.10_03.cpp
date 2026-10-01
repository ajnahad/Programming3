#include <iostream>

int main(){
    // Napisati program koji trazi unos n. 
    // Potrebno je pomocu while petlje izracunati zbir od 1 do n i ispisati broj izvrsenih iteracija.
    int n; 
    int i = 0;
    int zbir = 0;
    int ops = 0;
    std::cout << "Unesi n: "; std::cin >> n;
    ops++;
    while(i <= n){
        zbir += i;
        i++;
        ops++;
    }
    std::cout << "Zbir brojeva od 1 do " << n << ": " << zbir << std::endl;
    std::cout << "Broj operacija: " << ops << std::endl;
    return 0;
}
