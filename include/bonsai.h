/*
Bonsai struct and related functions
*/
#ifndef BONSAI_H
#define BONSAI_H

#include <string>

struct Bonsai {
    int id;
    std::string name;
    std::string species;
    int age;
    std::string lastWatered;
    std::string lastPruned;
    std::string notes;
     
};

Bonsai createBonsai();

// Bonsai deleteBonsai();

void displayBonsai(const Bonsai& b);

#endif