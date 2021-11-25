// Program to remove consecutive duplicate elements from a string.

#include<iostream>
#include<conio.h>
using namespace std;

void remove(char s[100]){
	if(s[0] == '\0')
		return;
	int i = 0;
	remove(s+1);
	if(s[0] == s[1]){
		for(; s[i] != '\0'; i++){
			s[i] = s[i+1];
		}
		s[i] = s[i+1];
	}
}

int main(){
	char s[100];
	cout << "Enter string: ";
	cin >> s;
	cout << "Before removing duplicates: " << s;
	remove(s);
	cout <<"\nAfter removing duplicates: " << s;
	getch();
	return 0;
}
