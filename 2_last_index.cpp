#include <iostream>
#include<conio.h>
using namespace std;

int find(int a[], int n, int &x){
	if (n == 0)
		return -1;
	int ans = find(a+1, n-1, x);
	
	if (ans == -1){
		if (a[0] == x)
			return 0;
		else
			return -1;
	}
	else
		return ans+1;
}

int main(){
	int n, a[10], x;
	
	cout << "Enter size";
	cin >> n;
	
	cout << "Enter elements:";
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	cout << "Enter number to search:";
	cin >> x;
	
	int result = find(a, n, x);
	
	cout << "The element is present at " << result <<" position\n";
	getch();
	return 0;
}