#include<iostream>
#include<string>
#include<vector>
using namespace std;

//�L�غc�����O(class)�ŧi 
class hinata{	
    public:
    	int a;
    	int b;
    	pluse();  
};

/*�w�q���Ohinata��pluse()����@�A���w�q�ƨ禡���ˡA 
  ��ڤW��������@���bclass�ŧi���]�O�i�H�A���b�j�{���������ĳ�A
  �]���j�{����class�X�G�O�μ��Y�ɤޥζi�� 
*/ 
hinata::pluse(){ // ::���@�ΰ�B��l�A�S���o�Ӫ���Compiler�|��pluse()���@��禡�B�z 
	return a+b; 
}

int main(){
	while(cin)
	{
		hinata t;
		cout<<"��Ja�Mb(�ťն��j):";
		cin>>t.a>>t.b; 
		printf("a+b=%d\n",t.pluse());
		cout<<"-------------------------------"<<endl;
	}
	return 0;
}
