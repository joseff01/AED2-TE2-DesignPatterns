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
        if(request->getAmount()>2000){
            cout<<"Handler 3 manejo el valor"<<request->getAmount()<<endl;
        }
        else 
        cout<<"Fin"<< endl;
    }
};

#endif