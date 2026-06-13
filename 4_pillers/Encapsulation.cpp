#include<iostream>
using namespace std;



class Bank{
    private:
        int balance;
    public:
        string name;
        int acc_number;
    
    Bank(string name,int acc_number){
        this->name = name;
        this->acc_number = acc_number;
        balance = 0;
    }

    void deposit(int amount){
        balance += amount;
        cout<< amount << " Deposited to " << this->name << endl;
    }

    void withdraw(int amount){
        if(balance < 0){
            return ;
        }
        balance -= amount;
    }

    int checkbalance(){
        return balance;
    }

    void details(){
        cout << "Account Number: " << acc_number << endl;
        cout << "Account Holder Name: " << name << endl;
    }

};






int main(){

    Bank b("Harsh", 1234);

    b.details();
    cout<< "INR: " << b.checkbalance() << endl;


    b.deposit(1000);
    cout<< "INR: " << b.checkbalance() << endl;


    return 0;
}