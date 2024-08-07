#include <iostream>
#include <cstring>
#include "CMyString.h"
using namespace std;

//Constructor
CMyString::CMyString(){
	cout<<"CMyString()"<<"\n";
}
CMyString::CMyString(const char *param){
	this->setData(param);
}

CMyString::CMyString(const CMyString &rhs){
	cout<<"CMyString(const CMyString &rhs)"<<"\n";
	this->setData(rhs.getData());
}

//Destructor
CMyString::~CMyString(){
	cout<<"~CMyString()"<<"\n";
	delete [] pszData;
}

//Operator
void	CMyString::operator=(const CMyString &rhs){
	cout<<"CMyString::operator=(const CMyString &rhs)"<<"\n";
	this->setData(rhs.getData());
}

CMyString::operator const char *()const{
		return pszData;
}

//Method
const char	*CMyString::getData() const{
	return pszData;
}

size_t	CMyString::getLen() const{
	return len;
}

void	CMyString::setData(const char *pParam){
	if (pszData != nullptr)
		delete [] pszData;
	size_t len = strlen(pParam);
	pszData = new char[len+1];
	strcpy(pszData, pParam);
	this->len = len;
}