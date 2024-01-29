#include <iostream>
#include <string>

using namespace std;

void getEquatedNumber(int i, int i2) {
    std::cout << i << "x" << i2 << " = " << (i2*i) << endl;
}

int main(int argc, char const *argv[]) {

    std::cout << "Qual tábuada você deseja saber ? ";
    int primaryNumber = 0;
    std::cin >> primaryNumber;

    std::cout << "Até onde deve ir sua tábuada ? ";
    int secondNumber = 0;
    std::cin >> secondNumber;

    for (int i; i <= secondNumber; i++) {
        getEquatedNumber(primaryNumber, i);
    }

    return 0;
}