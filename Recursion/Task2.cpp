#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void reverse(string str) 
{ 
	if(str.size() == 0)
	{
		return;
	}
	reverse(str.substr(1));
	cout << str[0];
} 

int main() 
{ 
	string a = "Geeks for Geeks"; 
	reverse(a); 
	return 0; 
} 
