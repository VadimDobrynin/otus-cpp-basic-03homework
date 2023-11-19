//
// Created by Hp on 19.11.2023.
//
#include "high_scores.h"

bool insert(std::string username, int attempts_count){
    std::ofstream out_file{high_scores_filename, std::ios_base::app};
    if (!out_file.is_open()) {
        std::cout << "Failed to open file for write: " << high_scores_filename << "!" << std::endl;
        return -1;
    }
    out_file << username << ' ';
    out_file << attempts_count;
    out_file << std::endl;
    std::cout << username <<" "<< attempts_count << std::endl;
    out_file.close();
    return true;
}

bool get_table_scores(){
    std::string s;
    std::ifstream in_file{high_scores_filename};
    if (!in_file.is_open()) {
        std::cout << "Failed to open file for read: " << high_scores_filename << "!" << std::endl;
        return -1;
    }

//    for(std::string line;std::getline(in_file, line, in_file.eof()) ; ){
//        if(in_file.eof()){
//
//        }else{
//            std::cout << line <<std::endl;
//        }
//
//    }

    while(getline(in_file, s))
    {
        std::cout << s <<std::endl;
    }
    in_file.close();
    return 0;
}