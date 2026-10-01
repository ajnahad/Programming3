#include <iostream>

int main(){
    // Napisi program koji trazi unos i petljom prolazi kroz brojeve od 1 do n. Potrebno je provjeriti parnost svakog broja 
    // izbrojati parne brojeve i izvrsene provjere. 
    int n;
    int even = 0;
    int ops = 0;
    std::cout << "Unesi broj n: "; std::cin >> n;
    for(int i = 1; i <= n; i++){
        if (i % 2 == 0){
            even++;
        }
        ops++;
    }
    std::cout << "Broj parnih brojeva: " << even << std::endl;
    std::cout << "Broj operacija: " << ops;
    return 0;
}
