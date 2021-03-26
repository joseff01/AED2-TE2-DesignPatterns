#include "Window.h"

Window::~Window() {}

void Window::renderTextbox() const {
    Textbox* textbox = this->FactoryMethod();
    textbox->renderBox();
}
