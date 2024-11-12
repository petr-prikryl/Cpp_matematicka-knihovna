
#include "Time22.h"
#include "Duration.h"

int main() {
    // Testování sečítání času a trvání
    Time t1(2024, 12, 11, 7, 30);  // 2024-12-11 07:30
    Duration d1(30);  // 30 minut

    Time t2 = t1 + d1;
    std::cout << "Novy cas po pridani 30 minut: ";
    t2.print();  // Očekáváme 2024-12-11 08:00

    // Testování přechodu do dalšího dne
    Time t3(2024, 12, 11, 23, 40);  // 2024-12-11 23:40
    Duration d2(40);  // 40 minut

    Time t4 = t3 + d2;
    std::cout << "Novy cas po pridani 40 minut: ";
    t4.print();  // Očekáváme 2024-12-12 00:20

    // Testování přechodu do nového měsíce
    Time t5(2024, 12, 30, 23, 40);  // 2024-12-30 23:40
    Duration d3(40);  // 40 minut

    Time t6 = t5 + d3;
    std::cout << "Novy cas po pridani 40 minut: ";
    t6.print();  // Očekáváme 2025-01-01 00:20

    return 0;
}
