#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(static_cast<unsigned int>(time(nullptr)));


    const int rozmiarTablicy = 12;
    int mojaTablica[rozmiarTablicy];

    for (int i = 0; i < rozmiarTablicy; ++i) {
        mojaTablica[i] = rand() % 25 + 1;  
    }


    cout << "Pseudolosowe liczby w tablicy:\n";
    for (int i = 0; i < rozmiarTablicy; ++i) {
        cout << mojaTablica[i] << " ";
    }
    cout << "\n";

    return 0;
}
