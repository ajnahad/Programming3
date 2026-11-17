#include <iostream>

// napisati program koji učitava 6 cijelih brojeva u niz, a zatim ih sortira silazno koristeci bubble sort
int main(){
    int niz[6];
    std::cout << "Unesi element u nizu: " << std::endl;
    for(int i = 0; i < 6; i++){
        std::cout << ">>> "; std::cin >> niz[i];
    }
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5 - i; j++){
            if (niz[j] < niz[j+1]){
                int zamjena = niz[j];
                niz[j] = niz[j+1];
                niz[j+1] = zamjena;
            }
        }
    }
    std::cout << "Sortirani niz: " << std::endl;
    for(int i = 0; i < 6; i++){
        std::cout << niz[i] << " ";
    }
    return 0;
}
