class Amount
{
    private: 
    int amount_int;
    
    public:
    Amount(int amount_int){this->amount_int = amount_int;};
    int getAmount(){return amount_int;};
};