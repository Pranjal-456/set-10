#include<iostream>
#include<string.h>

using namespace std;

int main(){

    int a,b,c;
    
	cout<<"enter value A = ";
	cin>>a;
	
	cout<<"enter value B = ";
	cin>>b;
	
	char solution[100]="can't divide by Zero";
	
	try{
		if(b==0){
	
		throw 10;
	}
	
	else
	{
		c=a/b;
		cout<<"c = "<<c<<endl;
	}
}
catch(char[])
{
	cout<<solution<<endl;
}
catch(int)
{
	cout<<"can't divide by Zero";
}

}
