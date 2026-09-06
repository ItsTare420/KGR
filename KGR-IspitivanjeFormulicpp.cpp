#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    vector<string> formule = {
        "2D Translacija",
        "3D Translacija",
        "2D Skaliranje u odnosu na koordinatni pocetak",
        "2D Skaliranje u odnosu na proizvoljnu tacku",
        "3D Skaliranje u odnosu na koordinatni pocetak",
        "3D Skaliranje u odnosu na proizvoljnu tacku",
        "2D Refleksija u odnosu na Y osu",
        "2D Refleksija u odnosu na X osu",
        "2D Refleksija u odnosu na proizvoljnu X osu",
        "2D Refleksija u odnosu na proizvoljnu Y osu",
        "3D Refleksija s obzirom na ravan YZ",
        "3D Refleksija s obzirom na ravan XZ",
        "3D Refleksija s obzirom na ravan XY",
        "3D Refleksija s obzirom na ravan YZ pomaknutu za ax",
        "3D Refleksija s obzirom na ravan XZ pomaknutu za ay",
        "3D Refleksija s obzirom na ravan XY pomaknutu za az",
        "2D Rotacija oko koordinatnog pocetka",
        "2D Rotacija oko tacke P(x,y)",
        "3D Rotacija oko prave paralelne Z osi kroz tacku P",
        "3D Rotacija oko prave paralelne X osi kroz tacku P",
        "3D Rotacija oko prave paralelne Y osi kroz tacku P",
        "3D Rotacija oko Z ose za ugao",
        "3D Rotacija oko X ose za ugao",
        "3D Rotacija oko Y ose za ugao",
    };

    random_device rd;
    mt19937 gen(rd());

    char unos;
    cout << "=================================================\n";
    cout << "  ISPITIVANJE FORMULI IZ KOMPJUTERSKE GRAFIKE \n";
    cout << "=================================================\n\n";

    do {
        uniform_int_distribution<size_t> dist(0, formule.size() - 1);
        size_t slucajniIndex = dist(gen);

        cout << "-> Formula / Transformacija: " << formule[slucajniIndex] << "\n\n";
        cout << "Zelite li sljedecu formulu? (Y/N): ";
        cin >> unos;

        unos = toupper(unos);
        cout << "-------------------------------------------------\n";

    } while (unos == 'Y');

    cout << "Program zavrsen. Sretno na ispitu!\n";

    return 0;
}