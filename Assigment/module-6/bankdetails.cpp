#include<iostream>
#include<string.h>
using namespace std;
class bank
{
	int no;
	char account[100],accotype[100];
	float balance;
public:
	bank 
	(int accno, 
	char *name,
	char *type,
	float bl)
	{
		no=accno;
		strcpy(account, name);
		strcpy(accotype, type);
		balance=bl;
	}
		void deposit();
        void withdraw();
        void Show();			
};
void bank::deposit()
{
	int depositamount;
	cout<<"enter the deposist amount value:";
	cin>>depositamount;
	balance+=depositamount;
}
void bank::withdraw()
{
	int withdrawamount;
	cout<<"enter the withdraw amount value:";
	cin>>withdrawamount;
	if(withdrawamount>balance)
	{
		cout<<"cannot withdrawn amount"<<endl;
	}
	balance-=withdrawamount;
}
void bank::Show()
{
		cout<<"\nName : "<<account;
        cout<<"\nAccount No.:"<<no;
        cout<<"\nAccount Type:"<<accotype;
        cout<<"\nBalance:"<<balance;	
}
int main()
{
	 int no,choice;
        char nm[100], tp[100];
        float Bal;
    
        cout<<"1.Account holder Name:";
        cin>>nm;
        cout<<"2.Account No.:";
        cin>>no;
        cout<<"3.Account Type:";
        cin>>tp;
        cout<<"4.Balance:";
        cin>>Bal;
        bank s1(no,nm,tp,Bal);
		cout<<"\n1. Deposit";
		cout<<"\n2. withdraw";
		cout<<"\nEnter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
			s1.deposit();
			break;
			
			case 2:
			s1.withdraw(); 
			break;
			default:
			cout<<"Invaild choice";
				
		}  
        s1.Show();
        return 0;
}
