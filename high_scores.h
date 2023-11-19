//
// Created by Hp on 19.11.2023.
//

#ifndef OTUS_CPP_BASIC_03HOMEWORK_HIGH_SCORES_H
#define OTUS_CPP_BASIC_03HOMEWORK_HIGH_SCORES_H

#include <iostream>
#include <string>
#include <fstream>

const std::string high_scores_filename = "high_scores.txt";

bool insert(std::string, int);
bool get_table_scores();

#endif //OTUS_CPP_BASIC_03HOMEWORK_HIGH_SCORES_H
