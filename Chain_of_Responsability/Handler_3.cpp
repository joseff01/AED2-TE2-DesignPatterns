#ifndef HANDLER_3
#define HANDLER_3

#include "Handler.cpp" 
#include <iostream>
using namespace std;

class Handler_3 : public Handler
{
    private:
        Handler *nextObject;

    public:
    void setNext(Handler *obj){nextObject = obj;};
    void handlerProcessor(Amount *request)
    {
        if(request->getAmount()>100){
            cout<<"Handler_3"<<request->getAmount()<<endl;
        }
        else 
        cout<<"no se pudo, que duro"<< endl;
    }
};

#endif