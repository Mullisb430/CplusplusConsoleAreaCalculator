// Author: Brandon Mullis
// Date: 06/09/2021
// Purpose: To calculate and display the area of a cirlce, square, and rectangle

#include <iostream>
#include <cmath>

void circle();
void square();
void rectangle();
void invalid();

int main()
{
    int answer;

    // Requests the chosen shape from the user
    // Extra "std::endl"s for separation of output statements in the console
    std::cout << "AREA CALCULATOR" << std::endl;
    std::cout << "1. Circle" << std::endl;
    std::cout << "2. Square" << std::endl;
    std::cout << "3. Rectangle" << std::endl;
    std::cout << std::endl << "Menu Item: ";
    std::cin >> answer;

    switch(answer)
    {
        case 1 : 
            circle();
            break;
        case 2 :
            square();
            break;
        case 3 :
            rectangle();
            break;
        default :
            invalid();
            break;
    }

    // Letting the user know that the program has ended
    std::cout << "Bye!" << std::endl;

    return 0;
}

void circle()
{
    double radius, area;
    const float pi = 3.14159;

    // Extra "std::endl"s for separation of output statements in the console
    std::cout << std::endl << "CIRCLE" << std::endl;

    // Request radius from the user
    std::cout << "Radius: ";
    std::cin >> radius;

    // Calculate the area and round the area the nearest two decimal places
    area = pi*(radius*radius);
    area = round(area * 100.0) / 100.0;

    // Display the area
    std::cout << "Area: " << area << std::endl << std::endl;
}

void square() 
{
    double height, area;

    // Extra "std::endl"s for separation of output statements in the console
    std::cout << std::endl << "SQUARE" << std::endl;

    // Request one of the sides from the user
    std::cout << "Height: ";
    std::cin >> height;

    // Calculate the area 
    area = (height)*(height);

    // Display the area
    std::cout << "Area: " << area << std::endl << std::endl;
}

void rectangle()
{
    double height, width, area;

    // Extra "std::endl"s for separation of output statements in the console
    std::cout << std::endl << "RECTANGLE" << std::endl;

    // Request height and width from the user
    std::cout << "Height: ";
    std::cin >> height;
    std::cout << "Width: ";
    std::cin >> width;

    // Calculate the area
    area = (height)*(width);

    // Display the area
    std::cout << "Area: " << area << std::endl << std::endl;
}

void invalid()
{
    // Displays if the user enters an invalid menu option
    // Extra "std::endl"s for separation of output statements in the console
    std::cout << std::endl << "Invalid menu item!" << std::endl;
}