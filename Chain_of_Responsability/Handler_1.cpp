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
        if(request->getAmount()<10){
            cout<<"Handler_1  "<<request->getAmount()<<endl;
        }
        else 
        {
            nextObject->handlerProcessor(request);
        }
    }
};

#endif