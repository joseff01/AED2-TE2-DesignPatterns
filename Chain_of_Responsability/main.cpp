#include "Handler.cpp" 
#include "Handler_1.cpp" 
#include "Handler_2.cpp" 
#include "Handler_3.cpp" 
#include "Amount.cpp"
#include <iostream>

using namespace std;

int main()
{
    Handler *Handler1_Obj = new Handler_1();
    Handler *Handler2_Obj = new Handler_2();
    Handler *Handler3_Obj = new Handler_3();

    Handler1_Obj->setNext(Handler2_Obj);
    Handler2_Obj->setNext(Handler3_Obj);

    Amount *amountObj = new Amount(900);
    Handler1_Obj->handlerProcessor(amountObj);
    cout <<"Amount:  "<<amountObj->getAmount()<< endl;
    
    return 0;
}