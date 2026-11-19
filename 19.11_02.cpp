#include <iostream>
// Date su cijene 5 proizvoda,sortirati od najmanje do najvece koristeci bubble sort i ispisati koliko je zamjena zavrseno 
int main(){
    int zamjene = 0;
    double cijene[5] = {12.3, 2.4, 5.7, 9.2, 16.7};
    for(int i = 0; i < 4; i++){ // n - 1
        for(int j = 0; j < 4-i; j++){ // n - i - 1
            if(cijene[j] > cijene[j+1]){
                float zamjena = cijene[j];
                cijene[j] = cijene[j+1];
                cijene[j+1] = zamjena;
                zamjene++;
            }
        }
    }
    std::cout << "Niz: "; 
    for(int i = 0; i < 5; i++){
        std::cout << cijene[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Zamjene: " << zamjene;
    return 0;
}
