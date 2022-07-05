#include<iostream>
#include<string>
using namespace std;

//有建構式類別(class)宣告 
class Account{
	public:
		Account(string a,string b,int c); // 有參數建構式(Constructor)，問:Account能否改別的名稱? 
		string id;
		string name;
		int money;
};


Account::Account(string a,string b,int c) // 針對建構式Account要做的動作(輸入帳戶資料) 
{
	this->id=a;     // 不能夠打Account.id=a 
	this->name=b;
	this->money=c;
	printf("帳戶資訊: %s,%s,%d元\n",this->id.c_str(),this->name.c_str(),this->money);
}


void deposit(Account &who,int amount)      // 副函式，&who=rm ??
{
		who.money += amount;
		printf("存入%d元\n",amount);
}

void withdraw(Account &who,int amount)      // 副函式，&who=rm ??
{
	if(amount> who.money)
			cout<<"not enough money"<<endl;
	else
	{
		who.money -= amount;
		printf("提出%d元\n",amount);
	}
}

void showinfo(Account &who)
{
	printf("帳戶資訊: %s,%s,%d元\n",who.id.c_str(),who.name.c_str(),who.money);
	cout<<"-------------------------------------------------"<<endl;
}

int main(){
	cout<<"動作格式:1(存款)2(提款)\"空格\"金額"<<endl;
	Account rm("11106019","James_Hsu",28500);   // 這裡宣告時直接執行 rm.Account(string c,string b,int c)
	while(cin)
	{ 
		int a,b;
		cout<<"輸入動作:";
		cin>>a>>b;
		if(a==1)
		{
			deposit(rm,b);
			showinfo(rm);
			continue;
		}
		else if(a==2)
		{
			withdraw(rm,b);
			showinfo(rm);
			continue;
		}
		else
		{
			cout<<"please enter the right movement"<<endl;
			showinfo(rm);
			continue;
		}

		return 0;
	}
}
