/*
 File I/O function declarations
*/
#ifndef FILE_MANAGER_H
#define FILE_MANAGER_H

#include <vector>
#include <string>
#include "bonsai.h"

std::vector<Bonsai> loadBonsaiList(const std::string& filename);

bool saveBonsaiList(const std::vector<Bonsai>& list, const std::string& filename);

#endif