#include "MacWindow.h"
#include "MacTextBox.h"

Textbox *MacWindow::FactoryMethod() const {
    return new MacTextBox();
}

MacWindow::MacWindow() = default;
