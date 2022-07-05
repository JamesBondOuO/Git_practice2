#include<iostream>
#include<string>
using namespace std;

//���غc�����O(class)�ŧi 
class Account{
	public:
		Account(string a,string b,int c); // ���Ѽƫغc��(Constructor)�A��:Account��_��O���W��? 
		string id;
		string name;
		int money;
};


Account::Account(string a,string b,int c) // �w��غc��Account�n�����ʧ@(��J�b����) 
{
	this->id=a;     // �������Account.id=a 
	this->name=b;
	this->money=c;
	printf("�b���T: %s,%s,%d��\n",this->id.c_str(),this->name.c_str(),this->money);
}


void deposit(Account &who,int amount)      // �ƨ禡�A&who=rm ??
{
		who.money += amount;
		printf("�s�J%d��\n",amount);
}

void withdraw(Account &who,int amount)      // �ƨ禡�A&who=rm ??
{
	if(amount> who.money)
			cout<<"not enough money"<<endl;
	else
	{
		who.money -= amount;
		printf("���X%d��\n",amount);
	}
}

void showinfo(Account &who)
{
	printf("�b���T: %s,%s,%d��\n",who.id.c_str(),who.name.c_str(),who.money);
	cout<<"-------------------------------------------------"<<endl;
}

int main(){
	cout<<"�ʧ@�榡:1(�s��)2(����)\"�Ů�\"���B"<<endl;
	Account rm("11106019","James_Hsu",28500);   // �o�̫ŧi�ɪ������� rm.Account(string c,string b,int c)
	while(cin)
	{ 
		int a,b;
		cout<<"��J�ʧ@:";
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
