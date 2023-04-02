#include <iostream>
using namespace std;

int main(){

	int a=0;cin>>a;
	int b=0;cin>>b;
	char c;cin>>c;

	if(c == '+'){
		cout <<a+b<<'\n';
	}
	else if(c == '-')
		cout <<a-b<<'\n';
	return 0;
}

