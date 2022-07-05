#include<iostream>
#include<string>
using namespace std;

class hinata{
	public:
		void show();
		void set(int n);
	 	hinata();     /* 這行就是建構式，這裡寫的是無參數建構式，如果不寫這行，
						 程式在執行時會自動幫你宣告這一行並執行，
						 但程式幫你宣告的預設建構函數裡面並沒有東西，所以會感覺不出來 
					  */ 
		hinata(int b);//有參數建構式宣告 
 	private:
		int a;
};

void hinata::show(){
	cout<<"輸入的數*2="<<a*2<<endl;
}

void hinata::set(int n){
	a=n;
}

hinata::hinata(){ 
	cout<<"無參數建構式執行"<<endl; 
}

hinata::hinata(int b){
	cout<<"有參數建構式執行，"<<b<<endl;
}

int main(){
	int a;
	hinata jms;      // 這行宣告就會執行 jms.hinata()
	hinata jams(40); // 這行宣告執行 bond.hinata(int b);
	cout<<"輸入一整數:";
	cin>>a;
	cout<<endl;
	jms.set(a);
	jms.show();
	
	
}
