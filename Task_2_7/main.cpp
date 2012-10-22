#include "Book.h"

void main()
{
	CBook mBooks[MAX_BOOK_COUNT];

	std::cout<<"Please, enter next data: "<<std::endl;

	for(CLoop i = 0; i < MAX_BOOK_COUNT; i++)
	{
		std::cout<<((int)i+1)<<") ";
	
		EnterData("Autor", mBooks[i].vAuthor, MAX_AUTHORNAME_SIZE);
		EnterData("Book", mBooks[i].vBName, MAX_BOOKNAME_SIZE);
		EnterData("Edition", mBooks[i].vEdition, MAX_EDITIONNAME_SIZE);
		EnterYear(mBooks[i].vYear);
		
	}

	//Sorts by rating
	SortByYear(mBooks); 

	//shows header table
	cout<<"\nBooks are sorted by year: \n";
	ShowTable();

	for(CLoop i = 0; i < MAX_BOOK_COUNT; i++)
	{
		ShowBookData(&mBooks[i]);
	}

	//Shows KN-groups that have the greatest rating
	std::cout<<"\nC++ books: "<<std::endl;
	//shows header table
	ShowTable();
	CShowCBooks(mBooks);

	system("pause");
}