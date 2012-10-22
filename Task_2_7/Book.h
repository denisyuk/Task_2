#ifndef BOOK_H
#define BOOK_H

using namespace std;

#include <iostream>
#include <iomanip>
#include <ctime>

#define MAX_BOOK_COUNT			3	//Count of book
#define MAX_BOOKNAME_SIZE		12	//size of book name
#define MAX_AUTHORNAME_SIZE		12	//size of book name
#define MAX_EDITIONNAME_SIZE	12	//size of book name
#define MAX_YEAR				(CYear)2013	//maximum year

typedef unsigned char	CLoop;		//uses by loop "for"
typedef	signed	 char	CText;		//uses as simple text
typedef unsigned char	CAuthor;	//uses for author name
typedef unsigned char	CBookName;	//uses for book name
typedef unsigned char	CEdition;	//uses for edition name
typedef unsigned short	CYear;		//uses for year

struct CBook
{
	CAuthor vAuthor[MAX_AUTHORNAME_SIZE];			//Autor of book
	CBookName vBName[MAX_BOOKNAME_SIZE];		//Book name
	CEdition vEdition[MAX_EDITIONNAME_SIZE];	//name of edition
	CYear vYear;								//Year of edition
};	

void EnterYear(CYear& pYear);

//shows header table
void ShowTable();
void ShowBookData(const CBook* pBook); 

//Bubble method
void SortByYear(CBook* pBook);

void CShowCBooks(const CBook* pBook);

//enter data
template<class T> void EnterData(const CText* pText, T* pData, const unsigned int cConst)
{
	cout<<pText<<": ";
	cin>>pData;
	cin.ignore(cConst, '\n');
}

#endif