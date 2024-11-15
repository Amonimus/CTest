#pragma once
#include <Windows.h>

class Window {
    protected:
        HWND m_hwnd;
        bool m_is_run;
    public:
        Window();
        ~Window();

        bool init();
        bool broadcast();
        bool release();
        bool isRun();

        // Events
        virtual void onCreate() = 0;
        virtual void onUpdate() = 0;
        virtual void onDestroy();
};