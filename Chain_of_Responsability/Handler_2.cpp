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
        if(request->getAmount()<100){
            cout<<"esta es la cantidad de dinero"<<request->getAmount()<<endl;
        }
        else 
        {nextObject->handlerProcessor(request);}
    }
};