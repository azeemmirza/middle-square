#include <iostream>
#include <string>

int main() {
    int seed;

    std::cout << "Middle Square" << std::endl;
    std::cin >> seed;

    std::cout << "Entered Seed is: " << seed << std::endl;

    int seedLength = std::to_string(seed).length();

    std::cout << seedLength << std::endl;

    if (seedLength < 2) {
        std::cout << "Seed must at least above 10";
        return 0;
    }

    int middle = seed;
    int square;
    std::string squareString;
    int squareLength;

    for (int i = 0; i < 50; i++) {
        square = middle * middle;
        squareString = std::to_string(square);
        squareLength = squareString.length();
        middle = std::stoi(squareString.substr((squareLength - 1) / 2, 2 - squareLength % 2));

        std::cout << i << " - " << square << " - " << middle << std::endl;

    }

    return 0;
}
