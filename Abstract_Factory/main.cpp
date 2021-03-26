#include <iostream>
#include "Window.h"
#include "WindowsWindow.h"
#include "MacWindow.h"

int main() {

    Window* window1 = new WindowsWindow();
    window1->renderTextbox();
    Window* window2 = new MacWindow();
    window2->renderTextbox();
    delete window1;
    delete window2;
    return 0;

}
