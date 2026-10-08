#include <iostream>

// Napisi program koji trazi unos n cijelih brojeva u nizu (1 <= n <= 100), treba pronaci prvi broj djeljiv sa 5 i prekinuti program.
// Za kraj ispisati broj i broj provjerenih elemenata / ispisati poruku da broj nije pronadjen
int main(){
    int n;
    std::cout << "Unesi broj elemenata u nizu: "; std::cin >> n;
    int niz[100];
    int br = 0;
    for (int i = 0; i < n; i++){
        std::cout << "Unesi element niza: ";
        std::cin >> niz[i];
    }
    for (int i = 0; i < n; i++){
        if (niz[i] % 5 == 0){
            std::cout << "Broj djeljiv sa 5: " << niz[i] << std::endl;
            br++;
            std::cout << "Broj provjera: " << br << std::endl; 
            break;
        }
        br++;
    }
    if (br == n){
        std::cout << "Broj nije pronadjen.";
    }  
    return 0; 
}
