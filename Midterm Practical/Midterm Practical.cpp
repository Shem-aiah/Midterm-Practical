// Midterm Practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int answer = 0;
    int pick = 1;
    std::string response;
    
    while (pick != 0)
    {
        int soup = rand() % 4;
        std::cout << "Generate a question? (Yes or No)" << "\n"; 
        std::cin >> response;
        if (response != "No") 
        {
            switch (soup)
            {
            case 1:
                system("cls");
                std::cout << "Question 1: How many fingers does a Monkey have?" << "\n";
                std::cin >> answer;
                if (answer != 5)
                {
                    system("cls");
                    std::cout << "Nope" << std::endl;
                    std::cout << "Go back to menu? (Yes or No)" << "\n";
                    std::cin >> response;
                    if (response == "No" || response == "no") {
                        pick = 0;
                        system("cls");
                    }
                    system("cls");
                }
                else
                {
                    system("cls");
                    std::cout << "Great Job!!!" << std::endl;
                    std::cout << "Go back to menu? (Yes or No)" << "\n";
                    std::cin >> response;
                    if (response == "No" || response == "no") {
                        pick = 0;
                        system("cls");
                    }
                    system("cls");
                }
                break;
            case 2:
                system("cls");
                std::cout << "Question 2: What color is the grass?" << "\n";
                std::cin >> response;
                if (response != "green") {
                    system("cls");
                    std::cout << "Nope" << std::endl;
                    std::cout << "Go back to menu? (Yes or No)" << "\n";
                    std::cin >> response;
                    if (response == "No" || response == "no") {
                        pick = 0;
                        system("cls");
                    }
                    system("cls");
                }
                else
                {
                    system("cls");
                    std::cout << "Great Job!!!" << std::endl;
                    std::cout << "Go back to menu? (Yes or No)" << "\n";
                    std::cin >> response;
                    if (response == "No" || response == "no") {
                        pick = 0;
                        system("cls");
                    }
                    system("cls");
                }
                break;
            case 3:
                system("cls");
                std::cout << "Question 3: What is the fastest animal alive?" << "\n";
                std::cin >> response;
                if (response != "cheetah") {
                    system("cls");
                    std::cout << "Nope" << std::endl;
                    std::cout << "Go back to menu? (Yes or No)" << "\n";
                    std::cin >> response;
                    if (response == "No" || response == "no") {
                        pick = 0;
                        system("cls");
                    }
                    system("cls");
                }
                else
                {
                    system("cls");
                    std::cout << "Great Job!!!" << std::endl;
                    std::cout << "Go back to menu? (Yes or No)" << "\n";
                    std::cin >> response;
                    if (response == "No" || response == "no") {
                        pick = 0;
                        system("cls");
                    }
                    system("cls");
                }
                break;
            case 4:
                system("cls");
                std::cout << "Question 4: What sport is uses a golf ball?" << "\n";
                std::cin >> response;
                if (response != "golf") {
                    system("cls");
                    std::cout << "Nope" << std::endl;
                    std::cout << "Go back to menu? (Yes or No)" << "\n";
                    std::cin >> response;
                    if (response == "No" || response == "no") {
                        pick = 0;
                        system("cls");
                    }
                    system("cls");
                }
                else
                {
                    system("cls");
                    std::cout << "Great Job!!!" << std::endl;
                    std::cout << "Go back to menu? (Yes or No)" << "\n";
                    std::cin >> response;
                    if(response == "No" || response == "no") {
                        pick = 0;
                        system("cls");
                    }
                    system("cls");
                }
                break;
            }
        }
        else {
            system("cls");
            std::cout << "Goodbye";
            pick = 0;
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
