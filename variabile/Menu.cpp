//
// Created by gueas on 09/02/2023.
//

// switch exercise – Menu Program
#include <iostream>
#include <string>

int main()
{
    std::string input;
    int number;

    std::cout << "Menu\n";
    std::cout << "1: Fries\n";
    std::cout << "2: Burger\n";
    std::cout << "3: Shake\n";
    std::cout << "4: Chicken\n";
    std::cout << "Please enter a number 1-4 to view an item price: ";
    getline(std::cin, input);

    number = std::stoi(input);

    switch(number){

        case 1: std::cout << "Fries: $0.99\n";
            break;

        case 2: std::cout << "Burger: $8.25\n";
            break;

        case 3:
            std::cout << "Shake:  $3.50\n";
            break;
            case 4:
            std::cout << "Chicken: $5.25\n";

        default: std::cout << "Invalid choice.";
            break;
    }

    return 0;
}