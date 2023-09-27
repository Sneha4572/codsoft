//Number Guessing Game
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int n,u,count=0;
	n=rand();
	do{
		cout<<"Enter user input: ";
		cin>>u;
		if(n<u){
			cout<<"Entered no. is TOO HIGH.";
			count++;
		}
		else if(n>u){
			cout<<"Entered no. is TOO LOW.";
			count++;
		}
		else{
			cout<<"Heyy!!YOU GOT IT IN ";
			cout<<count;
			cout<<" Times.....CONGRATS!!!!";
		}
	}while(u!=n);
	return 0;
}