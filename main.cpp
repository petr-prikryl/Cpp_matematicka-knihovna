#include <iostream>
#include <list>
#include <SimpleMath.h> 

int main() {
    int choice;
    int a, b, n;
    
    do {
        std::cout << "\n=== MENU ===\n";
        std::cout << "1. Scitani dvou cisel\n";
        std::cout << "2. Nasobeni dvou cisel\n";
        std::cout << "3. Deleni dvou cisel\n";
        std::cout << "4. Vypocet prepony pravo-uhleho trojuhelniku\n";
        std::cout << "5. Fibonacciho posloupnost\n";
        std::cout << "6. Faktorial\n";
        std::cout << "7. Soucet prvku v seznamu\n";
        std::cout << "8. Produkt prvku v seznamu\n";
        std::cout << "0. Konec\n";
        std::cout << "Vyberte akci: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Zadejte dve cisla: ";
                std::cin >> a >> b;
                std::cout << "Vysledek scitani: " << add(a, b) << std::endl;
                break;

            case 2:
                std::cout << "Zadejte dve cisla: ";
                std::cin >> a >> b;
                std::cout << "Vysledek nasobeni: " << multiply(a, b) << std::endl;
                break;

            case 3:
                std::cout << "Zadejte dve cisla: ";
                std::cin >> a >> b;
                std::cout << "Vysledek deleni: " << divide(a, b) << std::endl;
                break;

            case 4:
                std::cout << "Zadejte delky stran a a b: ";
                std::cin >> a >> b;
                std::cout << "Delka prepony: " << stranaC(a, b) << std::endl;
                break;

            case 5:
                std::cout << "Zadejte n pro Fibonacciho posloupnost: ";
                std::cin >> n;
                std::cout << n << "-ty Fibonacciho clen: " << fibonacci(n) << std::endl;
                break;

            case 6:
                std::cout << "Zadejte n pro faktorial: ";
                std::cin >> n;
                std::cout << "Faktorial cisla " << n << " je: " << faktorialN(n) << std::endl;
                break;

            case 7: {
                std::list<int> lst;
                std::cout << "Zadejte prvky seznamu (konec  zadavani -1): ";
                while (true) {
                    int number;
                    std::cin >> number;
                    if (number == -1) break;
                    lst.push_back(number);
                }
                std::cout << "Soucet prvku v seznamu: " << sumList(lst) << std::endl;
                break;
            }

            case 8: {
                std::list<int> lst;
                std::cout << "Zadejte prvky seznamu (konec zadavani -1): ";
                while (true) {
                    int number;
                    std::cin >> number;
                    if (number == -1) break;
                    lst.push_back(number);
                }
                std::cout << "Produkt prvku v seznamu: " << productList(lst) << std::endl;
                break;
            }

            case 0:
                std::cout << "Konec.\n";
                break;

            default:
                std::cout << "Neplatny vyber, zkus znovu.\n";
        }
    } while (choice != 0);

    return 0;
}
