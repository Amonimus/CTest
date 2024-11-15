#include "AppWindow.h"

AppWindow::AppWindow() {}
AppWindow::~AppWindow() {}

void AppWindow::run() {
    if(init()) {
        while(isRun()){
            broadcast();
        }
    }
}
void AppWindow::onCreate() {
    Window::onCreate();
    GraphicsEngine::get()->init();
}
void AppWindow::onUpdate() {}
void AppWindow::onDestroy() {
    Window::onDestroy();
    GraphicsEngine::get()->release();
}
