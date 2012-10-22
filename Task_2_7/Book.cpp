#include "Book.h"

void EnterYear(CYear& pYear)
{
	cout<<"Year: ";
	while(true)
	{
		cin>>pYear;
		if( pYear <= MAX_YEAR && cin.good() == true )
		{
			break;
		}
		else
		{
			cout<<"Error! Try again...\n Year: ";		
			cin.clear();	
			cin.ignore();
		}	
	}
	cout<<endl;
}

void ShowTable()
{
	
	cout<<setw(MAX_BOOKNAME_SIZE)<<"Book:";
	cout<<setw(MAX_AUTHORNAME_SIZE)<<"Autor:";
	cout<<setw(MAX_EDITIONNAME_SIZE)<<"Edition:";
	cout<<setw(MAX_EDITIONNAME_SIZE)<<"Year:"<<endl;
}

void ShowBookData(const CBook* pBook) 
{
	cout<<setw(MAX_BOOKNAME_SIZE)<<pBook->vBName;
	cout<<setw(MAX_AUTHORNAME_SIZE)<<pBook->vAuthor;
	cout<<setw(MAX_EDITIONNAME_SIZE)<<pBook->vEdition;
	cout<<setw(MAX_EDITIONNAME_SIZE)<<pBook->vYear<<endl;
}


void SortByYear(CBook* pBook)
{
	CBook tmp;

	for (CLoop i = 0; i < (MAX_BOOK_COUNT - 1); i++)
	{
		for(CLoop j = 1; j < MAX_BOOK_COUNT; j++)
		{
			if (pBook[j].vYear < pBook[j-1].vYear)
			{
				memcpy(&tmp, &pBook[j], sizeof(CBook));
				memcpy(&pBook[j], &pBook[j - 1], sizeof(CBook));
				memcpy(&pBook[j - 1], &tmp, sizeof(CBook));
			}
		}
	}
}

void CShowCBooks(const CBook* pBook) 
{
	for (CLoop i = 0; i < MAX_BOOK_COUNT; i++)
	{
		for (CLoop j = 0; j < (MAX_BOOKNAME_SIZE - 2); j++)
		{
			if(pBook[i].vBName[j] == 'C' || pBook[i].vBName[j] == 'c')
			{
				if (pBook[i].vBName[j + 1] == '+' && pBook[i].vBName[j + 2] == '+')
				{
					ShowBookData(&pBook[i]);
				}
			}
		}
	}
}