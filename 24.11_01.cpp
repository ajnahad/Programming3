#include <iostream>
// ucitava n cijelih brojeva, sortira u rastucem nizu pomocu insertion sort i ispisuje niz
int main(){
    int n; 
    std::cout << "Unesi broj elemenata niza: "; std::cin >> n;
    int niz[100];
    std::cout << "Unesi elemente niza: " << std::endl;
    for(int i = 0; i < n; i++){
        std::cin >> niz[i];
    }
    for(int i = 1; i < n; i++){
        int kljuc = niz[i];
        int j = i - 1;
        while(j >= 0 && niz[j] > kljuc){
            niz[j + 1] = niz[j];
            j--;
        }
        niz[j+1] = kljuc;

    }
    std::cout << "Sortirani niz: "; 
    for(int i = 0; i < n; i++){
        std::cout << niz[i] << " ";
    }
    return 0;
}
