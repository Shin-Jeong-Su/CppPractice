#include <iostream>
#include "CMyString.h"
using namespace std;

CMyString::CMyString(){
	cout<<"CMyString()"<<"\n";
}
CMyString::~CMyString(){
	cout<<"~CMyString()"<<"\n";
}
char	*CMyString::getData(){
	return this->pszData;
}
void	CMyString::setData(char *pParam){
	this->pszData = pParam;
}