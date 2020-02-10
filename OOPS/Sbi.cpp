#include <iostream>
 using namespace std;

class BankAccount{
public:
	int accNo;
	float accBal;
	BankAccount(){
	accNo=0;
	accBal=0;
	}
	BankAccount(int num, float bal){
	accNo=num;
	accBal=bal;
	}
	void printAccount(){
    cout<<accNo<<":"<<accBal<<endl;
	}
};
class Bank{
	public:
    string bankName;
	string branchName;
	string managerName;
	string address;
	BankAccount accounts[5];
	Bank(){
	cout<<"The accounts are"<<endl;
	for(int i=0;i<10;i++)
        accounts[i].printAccount();
    	bankName="";
    	branchName="";
    	managerName="";
    	address="";
	}
	Bank(string bankname, string branch, string manager,
     	string bankAddress,BankAccount bankAccounts[], int num){
         	bankName=bankname;
         	branchName=branch;
         	managerName=manager;
         	address=bankAddress;
    	for(int i=0;i<num;i++)
            accounts[i]=bankAccounts[i];
	}
	void payInterest(int percentage){
    	for(int i=0;i<5;i++){

            accounts[i].accBal=accounts[i].accBal+accounts[i].accBal*((float)percentage/100);
        	}
	}
	void printBankAccounts(){
    cout<<bankName<<":"<<managerName<<":"<<branchName<<":"<<address<<endl;
	for(int i=0;i<5;i++){
            cout<<accounts[i].accNo<<":"<<accounts[i].accBal<<endl;

    	}

	}
};
int main()
{
	BankAccount acc1(1,100),
	acc2(2,200),
	acc3(3,300),
	acc4(4,400),
	acc5(5,500);
	BankAccount accounts[]={acc1,acc2,acc3,acc4,acc5};
	Bank bank("Synd","bvbCampus","a","Vidyanagar",accounts,5);

	bank.printBankAccounts();
	bank.payInterest(5);
	bank.printBankAccounts();
	return 0;
}
