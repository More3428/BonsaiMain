/*
 File saving/loading functions
*/
#include <fstream>
#include <sstream>
#include <vector>
#include "../include/bonsai.h"
#include "../include/file_manager.h"

extern int nextId;  

std::vector<Bonsai> loadBonsaiList(const std::string& filename){
    std::vector<Bonsai> result;

    std::ifstream in(filename);
    if (!in) return result; 

    std::string line;
    int maxId = 0;

    while(std::getline(in, line)) {
        std::stringstream ss(line);
        Bonsai b;
        ss >> b.id; ss.ignore();
        std::getline(ss, b.name, ';');
        std::getline(ss, b.species, ';');
        ss >> b.age; ss.ignore();             // read age and skip delimiter
        std::getline(ss, b.lastWatered, ';');
        std::getline(ss, b.lastPruned, ';');
        std::getline(ss, b.notes, ';');
        

        
        if (b.id > maxId) maxId = b.id;
        result.push_back(b);
    }

    nextId = maxId + 1;
    return result;
}

bool saveBonsaiList(const std::vector<Bonsai>& bonsaiList, const std::string& filename) {
    std::ofstream out(filename);
    if (!out) return false;

    for(const auto& b: bonsaiList){

        out << b.id << ';'
            << b.name << ';'
            << b.species << ';'
            << b.age << ';'
            << b.lastWatered << ';'
            << b.lastPruned << ';'
            << b.notes << '\n';
            

    }

    return true;
}





