#pragma once
#include "Window.cpp"
#include "../Engine/GraphicsEngine.cpp"

class AppWindow : public Window {
    public:
        AppWindow();
        ~AppWindow();

        virtual void run();
        virtual void onCreate() override;
        virtual void onUpdate() override;
        virtual void onDestroy() override;
};