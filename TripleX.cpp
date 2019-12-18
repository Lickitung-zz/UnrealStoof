#include <iostream>

int main()
{
    // print welcome messages to terminal
    std::cout << "You're a pickle in a pickle trying to escape a pickle jar...";
    std::cout << std::endl;
    std::cout << "Please enter the correct codes to be a free pickle...";

    const int CodeA = 4;
    const int CodeB = 10;
    const int CodeC = 5;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "* There are 3 numbers in the code" << std::endl;
    std::cout << "* The codes add up to: " << CodeSum << std::endl;
    std::cout << "* The codes multiply to give: " << CodeProduct << std::endl;

    int PlayerGuess;

    return 0;
}