//using a counter function to count the length of a string (without directly using the length function)

#include<iostream>
#include<string>
using namespace std;

int func(string s){
	int counter=-1;
	while(counter<s.length()) 
		counter++;
	return counter;
}

int main(){
	string s = "Welcome to Vashisht 2024!!"; 
	cout << func(s) << endl;
	return 0;
}
