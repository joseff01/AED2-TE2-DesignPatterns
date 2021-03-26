#include "WindowsWindow.h"
#include "WindowsTextBox.h"

Textbox *WindowsWindow::FactoryMethod() const {
    return new WindowsTextBox();
}

WindowsWindow::WindowsWindow() = default;
