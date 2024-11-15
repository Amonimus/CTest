#pragma once
#ifndef MY_CLASS_H
#define MY_CLASS_H

#include <iostream>
#include <string>
#include <fstream>

using std::cout, std::cin, std::endl;
using std::string, std::to_string;
using std::ofstream, std::ifstream;
using std::getline;

class MyClass {
    private:
        int num;
        string text;
    
    public:
        MyClass();
        ~MyClass();
        MyClass(int n, string t);
        string as_string();
        void setText(string t);
        string getText();
};

class ChildClass : public MyClass {
    public:
        ChildClass(int n, string t):MyClass(n, t){};
        void honk();
};

#endif