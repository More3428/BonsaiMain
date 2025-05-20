/*
 Implementation of bonsai logic
*/
#include <iostream>
#include "bonsai.h"
#include <vector>




Bonsai createBonsai(){
    std::string name;
    std::string species;
    int age;
    std::string lastWatered;
    std::string lastPruned;
    std::string notes;

    std::cout << "Enter the name of your Bonsai." << std::endl;
    std::getline(std::cin,name);

    std::cout << "Enter the species of your tree." << std::endl;
    std::getline(std::cin,species);

    std::cout << "Enter the approx. age of your bonsai." << std::endl;
    std::cin >> age;
    std::cin.ignore();

    std::cout << "Enter the date of last time watered." << std::endl;
    std::getline(std::cin,lastWatered);
    
    std::cout << "Enter the last time you pruned your tree." << std::endl;
    std::getline(std::cin,lastPruned);
    
    std::cout << "Add any additional notes." << std::endl;
    std::getline(std::cin,notes);
    
    return Bonsai{name, species, age, lastWatered, lastPruned, notes};

}

void displayBonsai(const Bonsai& b) {
    
    

}