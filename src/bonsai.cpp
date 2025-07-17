/*
 Implementation of bonsai logic
*/
#include <iostream>
#include <vector>
#include <fstream>

#include "../include/bonsai.h"



int nextId = 0;

Bonsai createBonsai(){

    int id;
    std::string name;
    std::string species;
    int age;
    std::string lastWatered;
    std::string lastPruned;
    std::string notes;
    
    id = nextId;
    nextId ++;
    
    std::cout << "Id: " << id << "\n";
    std::cout << "Enter the name of your Bonsai.\n";
    std::getline(std::cin,name);

    std::cout << "Enter the species of your tree.\n";
    std::getline(std::cin,species);

    std::cout << "Enter the approx. age of your bonsai.\n";
    std::cin >> age;
    std::cin.ignore();

    std::cout << "Enter the date of last time watered.\n";
    std::getline(std::cin,lastWatered);
    
    std::cout << "Enter the last time you pruned your tree.\n";
    std::getline(std::cin,lastPruned);
    
    std::cout << "Add any additional notes.\n";
    std::getline(std::cin,notes);
    
    return Bonsai{ id, name, species, age, lastWatered, lastPruned, notes };
}

void deleteBonsai(std::vector<Bonsai>& bonsaiList) {
    
    int id; 
    if (bonsaiList.empty()){
        std::cout << "No trees to delete.";
    }

    for (Bonsai& tree : bonsaiList) {
        displayBonsai(tree);
    
    }

    std::cout << "Select a tree to delete by ID.\n";
    std::cin >> id;

    if (id < 0 || id >= bonsaiList.size()){
        std::cout << "Invalid ID";
    } 
    else{
        bonsaiList.erase(bonsaiList.begin() + id);
        std::cout << "Tree deleted.\n"; 
    }


}

void displayBonsai(const Bonsai& b) {

    std::cout << "---------------------------\n";
    std::cout << "ID:        : " << b.id          <<"\n";
    std::cout << "Name       : " << b.name        << "\n";
    std::cout << "Species    : " << b.species     << "\n";
    std::cout << "Age        : " << b.age         << "\n";
    std::cout << "Last Water : " << b.lastWatered << "\n";
    std::cout << "Last Prune : " << b.lastPruned  << "\n";
    std::cout << "Notes      : " << b.notes       << "\n";
    
    std::cout << "---------------------------\n\n";

}