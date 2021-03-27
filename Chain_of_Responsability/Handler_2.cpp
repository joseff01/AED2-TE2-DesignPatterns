#ifndef HANDLER_2
#define HANDLER_2

#include "Handler.cpp" 
#include <iostream>
using namespace std;

class Handler_2 : public Handler
{
    private:
        Handler *nextObject;

    public:
    void setNext(Handler *obj){nextObject = obj;};
    void handlerProcessor(Amount *request)
    {
        if(request->getAmount()<2000){
            cout<<"Handler 2 manejo el valor "<<request->getAmount()<<endl;
        }
        else 
        {nextObject->handlerProcessor(request);}
    }
};

#endif