// Midterm Practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int answer = 0;
    int pick = 0;
    std::cout << "Pick a Question" << "\n" << "Question 1: How many fingers does a Monkey have?" << std::endl << "Question 2: What color is the grass?"
        << std::endl << "Question 3: What is the fastest animal alive?" << std::endl << "Question 4: Whats another name for Ping pong?" << "\n";
    std::cin >> pick;
    
    while (pick != 0) 
    {
        system("cls");
        switch (pick)
        {
        case 1:
            std::cout << "Question 1: How many fingers does a Monkey have?" << "\n";
            std::cin >> answer;
            if (answer != 5) 
            {
                std::cout << "Nope try again" << std::endl;
            }
            else 
            {
                std::cout << "Great Job!!!" << std::endl;
            }
                break;
        }
    }
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
