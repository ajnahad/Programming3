#include <iostream>
// sortiraj niz od najmanjeg do najveceg elementa, pa ga ispisi
int main(){
    int niz[5] = {64, 34, 25, 22, 12};
    int n = 5;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(niz[j] > niz[j+1]){
                int zamjena = niz[j];
                niz[j] = niz[j+1];
                niz[j+1] = zamjena;
            }
        }
    }
    std::cout << "Sortirani niz: ";
    for (int i = 0; i < 5; i++){
        std::cout << niz[i] << " ";
    }
    return 0;
}