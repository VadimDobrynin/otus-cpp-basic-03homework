#include <iostream>
#include "string"
#include "high_scores.h"
#include <ctime>
#include <vector>


int main(int argc,char** argv ) {
    std::string max{"--max"};
    std::string get_table{"--table"};


    int max_value = 100;
    if(argc == 3){
        if(std::equal(max.begin(), max.end(),argv[1])){
            max_value = atoi(argv[2]);
        }
    }else if(argc == 2){
        if(std::equal(get_table.begin(), get_table.end(),argv[1])){
            return get_table_scores();
        }
    }

    std::srand(std::time(nullptr)); // use current time as seed for random generator
    const int random_value = std::rand() % max_value;
    /**
     *
     */
    int value = random_value;
    int user_value;
    int count = 0;


    std::string username;
    std::cout << "Hi! Enter your name, please:"<<std::endl;
    std::cin >> username;
    std::cout << "Enter your guess:" << std::endl;
    while(true){
        std::cin >> user_value;
        count++;
        if(user_value < value){
            std::cout << "greater than "<< user_value <<std::endl;
        }else if(user_value > value){
            std::cout << "less than "<< user_value <<std::endl;
        }else{
            std::cout <<"you win! attempts = " << value << std::endl;
            insert(username, count);
            break;
        }
    }

    return 0;
}
