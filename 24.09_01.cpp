#include <iostream>

int main(){
    // Napisati program koji od korisnika trazi od korisnika unos prirodnog broja n. 
    // Potrebno je izracunati zbir brojeva od 1 do n pomocu for petlje i pomocu formule n*(n+1)/2.
    long long n;
    long long sum = 0; // Cuva zbir brojeva izracunat u petlji
    std::cout << "Unesi broj n: "; std::cin >> n;
    for(long long i = 1; i <= n; i++){
        sum += i; // Dodajemo trenutni broj za zbir
    }
        long long formula = n * (n + 1) / 2;
        std::cout << "Petlja: " << sum << std::endl;
        std::cout << "Formula: " << formula << std::endl;
    return 0;
}
