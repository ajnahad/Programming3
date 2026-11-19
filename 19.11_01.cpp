// sest br sa tastature, sortirati opadajuce pomocu bubble sorta
#include <iostream>

int main(){
    int niz[6];
    for(int i = 0; i < 6; i++){
        std::cout << "Unesi " << i+1 << ". broj: "; std::cin >> niz[i];
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5 - i; j++){
            if (niz[j] < niz[j+1]){
                int zamjena = niz[j];
                niz[j] = niz[j+1];
                niz[j+1] = zamjena;
            }
        }
    }
    std::cout << "Sortirani niz: ";
    for(int i = 0; i < 6; i++){
        std::cout << niz[i] << " ";
    }
    return 0;
}
