#include "Amount.cpp"
class Handler{
    public:
        virtual void setNext(Handler* nextHandler) = 0;
        virtual void handlerProcessor(Amount *getAmount) = 0;
};