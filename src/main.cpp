/*
 Main menu and application loop
*/
#include <iostream>
#include <string>


int main () {

    bool is_valid = true; 
    int choice;

    std::cout << "Welcome to Bonsai Maintenance" << std::endl;
    std::cout << "What would you like to do today?" << std::endl;


    while (is_valid){
        std::cout << "1. View all bonsai" << std::endl;
        std::cout << "2. Add new bonsai" << std::endl;
        std::cout << "3. Exit" << std::endl;
        
        std::cin >> choice;
        std::cin.ignore();

        switch(choice){

            case 1:
            std::cout << "No trees in database" << std::endl;;
            break;

            case 2: 
            std::cout << "Need to implement logic" << std::endl;;
            break;

            case 3:
            is_valid = false;
            break;

            default:
            std::cout << "invalid entry" << std::endl;;
            break;

        }


    }


    return 0;
}