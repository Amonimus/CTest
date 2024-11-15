#include "myclass.h"

MyClass::MyClass(){}

MyClass::~MyClass(){
    cout << "Destructor executed" << endl;
}

MyClass::MyClass(int n, string t) {
    num = n;
    text = t;
}

string MyClass::as_string() {
    string repr;
    repr += "MyClass";
    repr += "(" + to_string(num) + ", ";
    repr += text + ")";
    return repr;
}

void MyClass::setText(string t) {
    text = t;
}

string MyClass::getText() {
    return text;
}

void ChildClass::honk() {
    cout << "Tuut, tuut!" << endl;
}