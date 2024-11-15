#include <iostream>
#include <string>
#include <fstream>

using std::cout, std::cin, std::endl;
using std::string, std::to_string;
using std::ofstream, std::ifstream;
using std::getline;

#include "myclass.cpp"

void hello_world() {
    cout << "Hello World!" << endl;
}

int sum(int a, int b) {
    return a + b;
}

void function_test() {
    cout << sum(4, 6) << endl;
}

void test_input() {
    string input;
    cout << "Enter some text:" << endl;
    cin >> input;
    cout << "You've entered: " << input << endl;
}

void test_class() {
    MyClass obj(15, "Testing");
    cout << obj.as_string() << endl;
    MyClass obj2;
    obj2.setText("Myspace");
    cout << obj2.getText() << endl;
    ChildClass obj3(18, "Magic");
    cout << obj3.as_string() << endl;
    obj3.honk();
}

void file_test() {
    ofstream MyFile("filename.txt");
    MyFile << "Files can be tricky, but it is fun enough!";
    MyFile.close();
    ifstream MyReadFile("filename.txt");
    string myText;
    while (getline(MyReadFile, myText)) {
        cout << myText << endl;
    }
    MyReadFile.close();
}