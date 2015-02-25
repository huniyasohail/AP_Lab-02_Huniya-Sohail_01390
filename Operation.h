#include<iostream>
#include<fstream>
#include <stdio.h>
#include <string>
#include <ctype.h>
using namespace std;

int addition(int a, int b){//when + operator used then call function
	int c=a + b;
	cout<<"\n\n***sum is:"<<c<<"*********"<<endl;
	return c ;
}
int Subtraction(int a, int b){//when - operator used then call function
	int c=a - b;
	cout<<"\n\n***Difference is:"<<c<<"*********"<<endl;
	return c ;
}
int division(int a, int b){//when / operator used then call function
	int c=a / b;
	cout<<"\n\n***result is:"<<c<<"*********"<<endl;
	return c ;
}
int multiplication(int a, int b){//when * operator used then call function
	int c=a * b;
	cout<<"\n\n***multiply is:"<<c<<"*********"<<endl;
	return c ;
}
class Pair{//Class Declaration
private:
	string key;//private attributes
	int value;
public:
	
	Pair(){}//constructor
	Pair(string k, int v){
		key = k;
		value = v;
	}
	//getter and setter
	int getValue(){ return value; }
	string getKey(){ return key; }
	void setValue(int v){ value = v; }
	void setKey(string k){ key = k; }

	//++ operator
	Pair operator+(Pair var){
		Pair temp;
		temp.value = value + var.value;
		//temp.key=var.key;
		return temp;

	}
	//assignment operator
	Pair operator=(Pair var){
		key = var.key;
		value = var.value;
	}

	//when print keyword used this fun gets called
	void display(){
		cout << "the value of Key is" << value;
		cout << endl;
	}
};
