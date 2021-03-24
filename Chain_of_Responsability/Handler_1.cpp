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
            cout<<"esta es la cantidad de dinero"<<request->getAmount()<<endl;
        }
        else 
        {nextObject->handlerProcessor(request);}
    }
};