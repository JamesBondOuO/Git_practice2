#include<iostream>
#include<string>
using namespace std;

class hinata{
	public:
		void show();
		void set(int n);
	 	hinata();     /* �o��N�O�غc���A�o�̼g���O�L�Ѽƫغc���A�p�G���g�o��A
						 �{���b����ɷ|�۰����A�ŧi�o�@��ð���A
						 ���{�����A�ŧi���w�]�غc��Ƹ̭��èS���F��A�ҥH�|�Pı���X�� 
					  */ 
		hinata(int b);//���Ѽƫغc���ŧi 
 	private:
		int a;
};

void hinata::show(){
	cout<<"��J����*2="<<a*2<<endl;
}

void hinata::set(int n){
	a=n;
}

hinata::hinata(){ 
	cout<<"�L�Ѽƫغc������"<<endl; 
}

hinata::hinata(int b){
	cout<<"���Ѽƫغc������A"<<b<<endl;
}

int main(){
	int a;
	hinata jms;      // �o��ŧi�N�|���� jms.hinata()
	hinata jams(40); // �o��ŧi���� bond.hinata(int b);
	cout<<"��J�@���:";
	cin>>a;
	cout<<endl;
	jms.set(a);
	jms.show();
	
	
}
