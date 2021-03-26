#ifndef ABSTRACT_FACTORY_WINDOWSTEXTBOX_H
#define ABSTRACT_FACTORY_WINDOWSTEXTBOX_H

#include "Textbox.h"

class WindowsTextBox : public Textbox{

public:

    void renderBox() override;

};


#endif //ABSTRACT_FACTORY_WINDOWSTEXTBOX_H
