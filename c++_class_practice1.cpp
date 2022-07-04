#include<iostream>
#include<string>
#include<vector>
using namespace std;

//無建構式類別(class)宣告 
class hinata{	
    public:
    	int a;
    	int b;
    	pluse();  
};

/*定義類別hinata內pluse()的實作，像定義副函式那樣， 
  實際上成員的實作打在class宣告內也是可以，但在大程式比較不建議，
  因為大程式的class幾乎是用標頭檔引用進來 
*/ 
hinata::pluse(){ // ::為作用域運算子，沒有這個的話Compiler會把pluse()當成一般函式處理 
	return a+b; 
}

int main(){
	while(cin)
	{
		hinata t;
		cout<<"輸入a和b(空白間隔):";
		cin>>t.a>>t.b; 
		printf("a+b=%d\n",t.pluse());
		cout<<"-------------------------------"<<endl;
	}
	return 0;
}
