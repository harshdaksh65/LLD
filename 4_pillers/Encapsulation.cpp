#include<iostream>
using namespace std;

class Bank{
    private:
        int balance;
        string name;
        int acc_number;
    public:
    Bank(string name,int acc_number){
        this->name = name;
        this->acc_number = acc_number;
        balance = 0;
    }

    void deposit(int amount){
        if(amount <= 0) {
            cout<< "invalid amount" << endl;
            return;
        }
        balance += amount;
        cout<< amount << " Deposited to self" << endl;
    }

    void withdraw(int amount){
        if(amount > balance ){
            cout << "Insufficient balance" << endl;
        }
        else if(amount <=0){
            cout << "invalid amount" << endl;
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

    void transferamount(Bank &b,int amount){
        if(this->balance < amount){
            cout<< "Low Balance" << endl;
            return;
        }
        b.balance += amount;
        this->balance -= amount;
        cout << amount << " transfer to " << b.name << endl;
    }
    string BankAccountHolderName(){
        return this->name;
    }

};



int main(){

    Bank b("Harsh", 1234);
    Bank c("Tea stall", 2255);

    b.details();
    cout<< b.BankAccountHolderName() <<" -> Balance: INR " << b.checkbalance() << endl;

    
    b.deposit(1000);
    cout<< b.BankAccountHolderName() <<" -> Balance: INR " << b.checkbalance() << endl;

    
    c.details();
    c.deposit(5000);

    c.transferamount(b, 3000);
    cout<< c.BankAccountHolderName() << " -> Balance: INR " << c.checkbalance() << endl;

    cout<< b.BankAccountHolderName() <<" -> Balance: INR " << b.checkbalance() << endl;



    return 0;
}