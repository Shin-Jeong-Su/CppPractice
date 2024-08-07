class CMyString{
public:
	CMyString();
	~CMyString();
	char	*getData();
	void	setData(char *pParam);
private:
	char	*pszData;
};