/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Uday Gudipudi
 */

#include "std_lib_facilities.h"

class Name_value{
public:

  std::string name;
  int value;

};

int main() {

  int check = 1;

  Name_value temp;

  vector <Name_value> namevalues;

  while(check != 0){

    std::cout << "Enter a name and a value\n";

    std::cin >> temp.name >> temp.value;

    if (temp.name == "NoName" || temp.value == 0){

      for (int i = 0; i < namevalues.size(); i++){

        std::cout << namevalues[i].name << "," << namevalues[i].value << "\n"; 

        check = 0;

      }
    }

    for (int i = 0; i < namevalues.size(); i++){

      if(namevalues[i].name == temp.name){

        std::cout << "Error: Name entered twice." ;

        exit(0);

      }

    }

    namevalues.push_back(temp);

  }

  return 0;
} 