#include <iostream>

// napisati program koji ucitava 5 cijelih brojeva u niz a zatim ih sortira uzlazno koristeci selection sort. Na kraju ispisati sortirani niz.
int main(){
    int niz[5];
    std::cout << "Unesi elemente u niz: " << std::endl;
    for(int i = 0; i < 5; i++){
        std::cout << ">>> "; 
        std::cin >> niz[i];
    }
    for (int i = 0; i < 4; i++){
        int min = i;
        for (int j = i + 1; j < 5; j++){
            if(niz[j] < niz[min]){
                min = j;
            }
        }
        if (min != i){
            int zamjena = niz[i];
            niz[i] = niz[min];
            niz[min] = zamjena;
        }
    }
    std::cout << "Sortirani niz: ";
    for (int i = 0; i < 5; i++){
        std::cout << niz[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
