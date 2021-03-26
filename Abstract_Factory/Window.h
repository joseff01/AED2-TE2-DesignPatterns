#ifndef ABSTRACT_FACTORY_WINDOW_H
#define ABSTRACT_FACTORY_WINDOW_H

#include "Textbox.h"

class Window {

public:

    virtual ~Window();
    virtual Textbox* FactoryMethod() const = 0;

    void renderTextbox() const;

};


#endif //ABSTRACT_FACTORY_WINDOW_H
