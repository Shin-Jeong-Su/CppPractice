#include "CMyString.h"
#include <iostream>
using namespace std;
void chl(void){
	system("leaks a.out");
}
void	printData(CMyString &rhs){
	cout<<rhs<<"\n";
}
int main(){
	// atexit(chl);
	// CMyString hello("hello");
	// cout<<hello<<"\n";
	printData("hello");
	
	return 0;
}