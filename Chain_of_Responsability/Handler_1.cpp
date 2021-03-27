#ifndef HANDLER_1
#define HANDLER_1

#include "Handler.cpp" 
#include <iostream>
using namespace std;

class Handler_1 : public Handler
{
    private:
        Handler *nextObject;

    public:
    void setNext(Handler *obj){nextObject = obj;};
    void handlerProcessor(Amount *request)
    {
        if(request->getAmount()<1000){
            cout<<"Handler 1 manejo el valor  "<<request->getAmount()<<endl;
        }
        else 
        {
            nextObject->handlerProcessor(request);
        }
    }
};

#endif