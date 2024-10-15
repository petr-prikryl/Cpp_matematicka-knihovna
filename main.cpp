#include <iostream>
#include <list>
#include <SimpleMath.h>
#include <Math.h>

int main() {
    using namespace Math;

    int choice;
    int a, b, n;
    float fa, fb;
    Point p;
    Vector v;
    float num;

    do {
        std::cout << "\n=== MENU ===\n";
        std::cout << "1. Scitani dvou celych cisel\n";
        std::cout << "2. Nasobeni dvou celych cisel\n";
        std::cout << "3. Deleni dvou celych cisel\n";
        std::cout << "4. vypocet prepony pravouhleho trojuhelniku\n";
        std::cout << "5. Fibonacciho posloupnost\n";
        std::cout << "6. Faktorial\n";
        std::cout << "7. Soucet prvku v seznamu\n";
        std::cout << "8. Produkt prvku v seznamu\n";
        std::cout << "9. Scitani dvou floatu\n";
        std::cout << "10. Posun bodu o cislo\n";
        std::cout << "11. Posun bodu o vektor\n";
        std::cout << "0. Konec\n";
        std::cout << "Vyberte akci: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Zadejte dve cisla: ";
                std::cin >> a >> b;
                std::cout << "Vysledek: " << add(a, b) << std::endl;
                break;

            case 2:
                std::cout << "Zadejte dve cisla: ";
                std::cin >> a >> b;
                std::cout << "Vysledek: " << multiply(a, b) << std::endl;
                break;

            case 3:
                std::cout << "Zadejte dve cisla: ";
                std::cin >> a >> b;
                std::cout << "Vysledek: " << divide(a, b) << std::endl;
                break;

            case 4:
                std::cout << "Zadejte delky stran a a b: ";
                std::cin >> a >> b;
                std::cout << "Prepona: " << stranaC(a, b) << std::endl;
                break;

            case 5:
                std::cout << "Zadejte n: ";
                std::cin >> n;
                std::cout << n << "-ty clen: " << fibonacci(n) << std::endl;
                break;

            case 6:
                std::cout << "Zadejte n: ";
                std::cin >> n;
                std::cout << "Faktorial: " << faktorialN(n) << std::endl;
                break;

            case 7: {
                std::list<int> lst;
                std::cout << "Zadejte prvky (-1 pro konec): ";
                while (true) {
                    int val;
                    std::cin >> val;
                    if (val == -1) break;
                    lst.push_back(val);
                }
                std::cout << "Soucet: " << sumList(lst) << std::endl;
                break;
            }

            case 8: {
                std::list<int> lst;
                std::cout << "Zadejte prvky (-1 pro konec): ";
                while (true) {
                    int val;
                    std::cin >> val;
                    if (val == -1) break;
                    lst.push_back(val);
                }
                std::cout << "Produkt: " << productList(lst) << std::endl;
                break;
            }

            case 9:
                std::cout << "Zadejte dve float cisla: ";
                std::cin >> fa >> fb;
                std::cout << "Vysledek: " << add(fa, fb) << std::endl;
                break;

            case 10:
                std::cout << "Zadejte bod (x y) a cislo: ";
                std::cin >> p.x >> p.y >> num;
                p = add(p, num);
                std::cout << "Novy bod: (" << p.x << ", " << p.y << ")\n";
                break;

            case 11:
                std::cout << "Zadejte bod (x y) a vektor (dx dy): ";
                std::cin >> p.x >> p.y >> v.dx >> v.dy;
                p = add(p, v);
                std::cout << "Novy bod: (" << p.x << ", " << p.y << ")\n";
                break;

            case 0:
                std::cout << "Konec.\n";
                break;

            default:
                std::cout << "Neplatna volba.\n";
        }
    } while (choice != 0);

    return 0;
}
