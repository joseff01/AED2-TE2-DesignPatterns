#ifndef ABSTRACT_FACTORY_MACWINDOW_H
#define ABSTRACT_FACTORY_MACWINDOW_H

#include "Window.h"
#include "Textbox.h"

class MacWindow : public Window{

public:
    MacWindow();
    Textbox* FactoryMethod() const override;

};


#endif //ABSTRACT_FACTORY_MACWINDOW_H
