/*
 Main menu and application loop
*/
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "../include/bonsai.h"
#include "../include/file_manager.h"

int main () {

    bool is_valid = true; 
    int choice;
    std::vector<Bonsai> bonsaiList = loadBonsaiList("data/bonsai_data.txt");
    std::cout << "Welcome to Bonsai Maintenance" << std::endl;
    std::cout << "What would you like to do today?" << std::endl;

    
    

    Bonsai newTree;



    while (is_valid) {
        std::cout << "1. View all bonsai" << std::endl;
        std::cout << "2. Add new bonsai" << std::endl;
        std::cout << "3. Delete a bonsai" << std::endl;
        std::cout << "4. Exit" << std::endl;
        
        std::cin >> choice;
        std::cin.ignore();

        switch(choice) {

            case 1:
            if (bonsaiList.empty()){
                std::cout << "No trees in database" << std::endl;
            }
            else{
                for (Bonsai& tree : bonsaiList) {
                    displayBonsai(tree);
                }
            }
            break;

            case 2: 
            std::cout << "Adding Tree" << std::endl;
            newTree = createBonsai();
            bonsaiList.push_back(newTree);
            saveBonsaiList(bonsaiList, "data/bonsai_data.txt");
            std::cout << "Tree added Successfully" << std::endl;
            break;
            

            case 3:
            deleteBonsai(bonsaiList);
            break;

            case 4:
            is_valid = false;
            break;

            default:
            std::cout << "invalid entry" << std::endl;
            break;
        }
    }
    return 0;
}