#include <SimpleMath.h>
#include <cmath>
#include <iostream>
#include <list>
#include <numeric>



int add(int a, int b) {
    return a + b;
}
int multiply(int a, int b){
    return a * b;
}
int divide(int a, int b) {
    if (b == 0) {
        std::cerr << "Chyba: Deleni nulou!" << std::endl;
        return 0; 
    } else {
        return a / b;
    }
}

int stranaC(int a, int b){
    return sqrt(a * a + b * b);
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int faktorialN(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorialN(n - 1);
    }
}
int sumList(std::list<int> lst) {
    return std::accumulate(lst.begin(), lst.end(), 0);
}

int productList(std::list<int> lst) {
    return std::accumulate(lst.begin(), lst.end(), 1, std::multiplies<int>());
}

