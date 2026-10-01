#include <iostream>

int main(){
    // Deklarisati 3 varijable tipa int, omoguciti user input,
    // pronaci najveci broj i broj operacija, te kolicinu memorije koju te varijable koriste
    int a, b, c;
    int maxNum = a;
    int ops = 0;
    std::cout << "Unesi a, b, c: "; std::cin >> a >> b >> c;
    ops++;
    if(b > a & b > c){
        maxNum = b;
        ops++;
    }
    if (c > a & c > b){
        maxNum = c;
        ops++;
    }
    int m = sizeof(a) + sizeof(b) + sizeof(c) + sizeof(maxNum);
    std::cout << "Najveci broj je: " << maxNum << std::endl;
    std::cout << "Ukupna kolicina memorije: " << m << std::endl;
    std::cout << "Ukupan broj operacija: " << ops << std::endl;
    return 0;
}
