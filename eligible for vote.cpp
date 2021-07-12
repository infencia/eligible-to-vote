#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter age of a user:";
	cin>>age;
	int name;
	cout<<"enter the name of a user:";
	cin>>name;
	if (age>=18){
		cout<<"\n you are eligible to vote";
	}else{
		cout<<"\n you are not eligible to vote";
	}
	return 0;
}
