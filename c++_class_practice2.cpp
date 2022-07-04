#include<iostream>
#include<string>
#include<vector>
using namespace std;

//有建構式類別(class)宣告 
class Bank{
	public:
		Account(string a,string b,int c);//建構式(Constructor)
		string id;
		string name;
		int money;
		
};


Bank::Account(string a,string b,int c) 
{
	this->id=a;
	this->name=b;
	this->money=c;
}


void deposit(Bank &who,int amount)      // &who=rm ??
{
	if(amount> who.money)
		cout<<"not enough money"<<endl;
	else
		 who.money += amount;
}


int main(){
	Account rm("11106019","James_Hsu",28500);
	deposit(rm,5000);
	printf("%d\n",rm.money);

	return 0;	
}
