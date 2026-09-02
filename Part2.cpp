#include <iostream>

int main() {

     int x;

    std::cout << "\nEnter your favorite interger: ";
    std::cin >> x;

    x = ( ( (x * 2) + 10) / 2) - x;

    std::cout << "\n\nThe result is: " << x << std::endl;

    return 0;
    }