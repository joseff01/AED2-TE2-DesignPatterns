#ifndef ABSTRACT_FACTORY_WINDOWSWINDOW_H
#define ABSTRACT_FACTORY_WINDOWSWINDOW_H

#include "Window.h"
#include "Textbox.h"

class WindowsWindow : public Window{

public:
    WindowsWindow();
    Textbox* FactoryMethod() const override;

};


#endif //ABSTRACT_FACTORY_WINDOWSWINDOW_H
