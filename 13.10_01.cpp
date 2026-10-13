#include <iostream>

int main(){
    // Napisati program za unos n cijelih brojeva u niz (1<=n<=100). Potrebno je pronaći prvi broj dijeljiv sa 5 i prekinuti pretragu. Ispisati broj ili poruku da on nije pronađen.
    int n;
    int niz[100];
    int br_el = 0;
    std::cout << "Unesi broj elemenata niza: "; std::cin >> n;
    std::cout << "Unesi elemente niza: " << std::endl;
    for(int i = 0; i < n; i++){
        std::cout << ">> "; std::cin >> niz[i];
    }
    for(int i = 0; i < n; i++){
        br_el++;
        if(niz[i] % 5 == 0){
            std::cout << "Prvi broj djeljiv sa 5: " << niz[i] << std::endl;
            std::cout << "Broj provjerenih brojeva: " << br_el << std::endl;
            break;
        }
    }
    if(br_el == n){
        std::cout << "Broj nije pronadjen." << std::endl;
        std::cout << "Broj provjerenih elemenata: " << br_el;
    }
    return 0;
}