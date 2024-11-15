#include "Tests/tutorials.h"
#include "DirectXTutorial/Window/AppWindow.cpp"

void tutorials(){
    hello_world();
    function_test();
    test_input();
    test_class();
    file_test();
}

void start_app(){
    AppWindow app;
    app.run();
}

int main(int argc, char const *argv[]){
    // Main
    // tutorials();
    start_app();
    return 0;
}
