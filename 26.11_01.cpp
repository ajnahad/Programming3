#include <iostream>
#include <algorithm>
// unesi temperature za 10 dana i sortiraj ih u opadajucem nizu koristeci insertion sort, ispisuje min i max temp, i obrce niz

int main(){
    int n; 
    double niz[100];
    std::cout << "Unesi broj dana za unos temperatura: "; std::cin >> n;
    std::cout << "Unesi temperature: " << std::endl; 

    for(int i = 0; i < n; i++){
        std::cout << ">> "; std::cin >> niz[i];
    }
    for(int i = 1; i < n; i++){
        double kljuc = niz[i];
        int j = i - 1;
        while(j >= 0 && niz[j] < kljuc){
            niz[j+1] = niz[j];
            j--;
        }
        niz[j+1] = kljuc;
    }

    std::cout << "Sortirani niz: "; 
    for(int i = 0; i < n; i++){
        std::cout << niz[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Najveca vrijednost: " << niz[0] << std::endl;
    std::cout << "Najmanja vrijednost: " << niz[n-1] << std::endl;

    std::reverse(niz, niz + n);

    std::cout << "Obrtnuti niz: "; 
    for(int i = 0; i < n; i++){
        std::cout << niz[i] << " ";
    }
    return 0;
}
