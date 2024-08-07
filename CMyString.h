#pragma once
#include <cstddef>
class CMyString{
public:
	CMyString();
	CMyString(const char *param);
	CMyString(const CMyString &rhs);
	~CMyString();
	const char	*getData() const;
	size_t	getLen() const;
	void	setData(const char *pParam);
	void	operator=(const CMyString &rhs);
	operator const char *()const;
private:
	char	*pszData = nullptr;
	size_t	len = 0;
};