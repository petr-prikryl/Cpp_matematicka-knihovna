# SimpleMath Library

## Popis
SimpleMath je jednoduchá C++ knihovna pro základní matematické operace a funkce, včetně sčítání, násobení, dělení, výpočtu délky přepony pravoúhlého trojúhelníku, Fibonacciho posloupnosti a faktoriálu. Kromě toho tato knihovna podporuje operace na seznamech, jako je součet a součin prvků.

## Funkce
- `int add(int a, int b)`: Sčítá dvě celá čísla.
- `int multiply(int a, int b)`: Násobí dvě celá čísla.
- `int divide(int a, int b)`: Dělí dvě celá čísla (ošetřeno dělení nulou).
- `int stranaC(int a, int b)`: Vypočítá délku přepony pravoúhlého trojúhelníku.
- `int fibonacci(int n)`: Vrátí n-tý prvek Fibonacciho posloupnosti.
- `int faktorialN(int n)`: Vypočítá faktoriál čísla n.
- `int sumList(const std::list<int>& lst)`: Vypočítá součet prvků v seznamu.
- `int productList(const std::list<int>& lst)`: Vypočítá součin prvků v seznamu.

## Instalace
1. Klonujte tento repozitář do svého místního počítače.
   ```bash
   git clone https://github.com/vase-uzivatelske-jmeno/SimpleMath.git
