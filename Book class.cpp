#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
//Time spent on this class - 2:41
class Book
{
private:
	mutable char* _author;
	mutable char* _title;
	mutable char* _publisher;
	mutable int _year;
	mutable int _pages;
public:
	//--Сonstructors:
	//Default constructor
	Book()
	{
		_author = new char[strlen("No author") + 1];
		strcpy(_author, "No author");

		_title = new char[strlen("No title") + 1];
		strcpy(_title, "No type");

		_publisher = new char[strlen("No publisher") + 1];
		strcpy(_publisher, "No publisher");

		_year = 0;
		_pages = 0;
	}

	//Parameterized constructor
	explicit Book(char* author, char* title, char* publisher, int year, int pages)
	{
		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//Overloading for const char* author
	explicit Book(const char* author, char* title, char* publisher, int year, int pages)
	{
		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//Overloading for const char* author, const char* title
	explicit Book(const char* author, const char* title, char* publisher, int year, int pages)
	{
		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//Overloading for const char* author, const char* title, const char* publisher
	explicit Book(const char* author, const char* title, const char* publisher, int year, int pages)
	{
		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//Overloading for const char* title
	explicit Book(char* author, const char* title, char* publisher, int year, int pages)
	{
		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//Overloading for const char* title, const char* publisher
	explicit Book(char* author, const char* title, const char* publisher, int year, int pages)
	{
		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//Overloading for const char* publisher
	explicit Book(char* author, char* title, const char* publisher, int year, int pages)
	{
		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//Overloading for const char* author, const char* publisher
	explicit Book(const char* author, char* title, const char* publisher, int year, int pages)
	{
		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//Copy constructor
	Book(const Book& obj)
	{
		_author = new char[strlen(obj._author) + 1];
		strcpy(_author, obj._author);

		_title = new char[strlen(obj._title) + 1];
		strcpy(_title, obj._title);

		_publisher = new char[strlen(obj._publisher) + 1];
		strcpy(_publisher, obj._publisher);

		_year = obj._year;
		_pages = obj._pages;
	}

	//Destructor
	~Book()
	{
		delete[]_author;
		delete[]_title;
		delete[]_publisher;
	}

	//Overloading assignment operator
	Book operator= (const Book& obj)
	{
		delete[]_author;
		delete[]_title;
		delete[]_publisher;

		_author = new char[strlen(obj._author) + 1];
		strcpy(_author, obj._author);

		_title = new char[strlen(obj._title) + 1];
		strcpy(_title, obj._title);

		_publisher = new char[strlen(obj._publisher) + 1];
		strcpy(_publisher, obj._publisher);

		_year = obj._year;
		_pages = obj._pages;

		return*this;
	}

	//--Setters:
	void setAuthor(char* author)
	{
		delete[]_author;
		_author = new char[strlen(author) + 1];
		strcpy(_author, author);
	}
	//Overloading for const char* author
	void setAuthor(const char* author)
	{
		delete[]_author;
		_author = new char[strlen(author) + 1];
		strcpy(_author, author);
	}

	void setTitle(char* title)
	{
		delete[]_title;
		_title = new char[strlen(title) + 1];
		strcpy(_title, title);
	}
	//Overloading for const char* title
	void setTitle(const char* title)
	{
		delete[]_title;
		_title = new char[strlen(title) + 1];
		strcpy(_title, title);
	}

	void setPublisher(char* publisher)
	{
		delete[]_author;
		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);
	}
	//Overloading for const char* publisher
	void setPublisher(const char* publisher)
	{
		delete[]_author;
		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);
	}

	void setYear(int year) { _year = year; }
	void setPages(int pages) { _pages = pages; }

	void setAll(char* author, char* title, char* publisher, int year, int pages)
	{
		delete[]_author;
		delete[]_title;
		delete[]_publisher;

		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//Overloading for const char* author, const char* title, const char* publisher
	void setAll(const char* author, const char* title, const char* publisher, int year, int pages)
	{
		delete[]_author;
		delete[]_title;
		delete[]_publisher;

		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//Overloading for const char* author
	void setAll(const char* author, char* title, char* publisher, int year, int pages)
	{
		delete[]_author;
		delete[]_title;
		delete[]_publisher;

		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//Overloading for const char* title
	void setAll(char* author, const char* title, char* publisher, int year, int pages)
	{
		delete[]_author;
		delete[]_title;
		delete[]_publisher;

		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//Overloading for const char* publisher
	void setAll(char* author, char* title, const char* publisher, int year, int pages)
	{
		delete[]_author;
		delete[]_title;
		delete[]_publisher;

		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//Overloading for const char* author, const char* title
	void setAll(const char* author, const char* title, char* publisher, int year, int pages)
	{
		delete[]_author;
		delete[]_title;
		delete[]_publisher;

		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//Overloading for const char* title, const char* publisher
	void setAll(char* author, const char* title, const char* publisher, int year, int pages)
	{
		delete[]_author;
		delete[]_title;
		delete[]_publisher;

		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//Overloading for const char* author, const char* publisher
	void setAll(const char* author, char* title, const char* publisher, int year, int pages)
	{
		delete[]_author;
		delete[]_title;
		delete[]_publisher;

		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//--Getters:
	char* getAuthor() { return _author; }
	char* getTitle() { return _title; }
	char* getPublisher() { return _publisher; }
	int getYear() { return _year; }
	int getPages() { return _pages; }

	void inputAll()
	{
		char buf[256];

		delete[]_author;
		delete[]_title;
		delete[]_publisher;

		cout << "Author: ";
		cin.getline(buf, 256);

		_author = new char[strlen(buf) + 1];
		strcpy(_author, buf);

		cout << "Title: ";
		cin.getline(buf, 256);

		_title = new char[strlen(buf) + 1];
		strcpy(_title, buf);

		cout << "Publisher: ";
		cin.getline(buf, 256);

		_publisher = new char[strlen(buf) + 1];
		strcpy(_publisher, buf);

		cout << "Year: ";
		cin >> _year;
		cout << "Pages: ";
		cin >> _pages;
		cin.ignore();
	}

	void printAll()
	{
		cout << "Author: " << _author << "\n";
		cout << "Title: " << _title << "\n";
		cout << "Publisher: " << _publisher << "\n";
		cout << "Year: " << _year << "\n";
		cout << "Pages: " << _pages << "\n";
	}

	//--Const overload:

	//Overloading assignment operator
	Book operator= (const Book& obj) const
	{
		delete[]_author;
		delete[]_title;
		delete[]_publisher;

		_author = new char[strlen(obj._author) + 1];
		strcpy(_author, obj._author);

		_title = new char[strlen(obj._title) + 1];
		strcpy(_title, obj._title);

		_publisher = new char[strlen(obj._publisher) + 1];
		strcpy(_publisher, obj._publisher);

		_year = obj._year;
		_pages = obj._pages;

		return*this;
	}

	//--Setters:
	void setAuthor(char* author) const
	{
		delete[]_author;
		_author = new char[strlen(author) + 1];
		strcpy(_author, author);
	}
	//Overloading for const char* author
	void setAuthor(const char* author) const
	{
		delete[]_author;
		_author = new char[strlen(author) + 1];
		strcpy(_author, author);
	}

	void setTitle(char* title) const
	{
		delete[]_title;
		_title = new char[strlen(title) + 1];
		strcpy(_title, title);
	}
	//Overloading for const char* title
	void setTitle(const char* title) const
	{
		delete[]_title;
		_title = new char[strlen(title) + 1];
		strcpy(_title, title);
	}

	void setPublisher(char* publisher) const
	{
		delete[]_author;
		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);
	}
	//Overloading for const char* publisher
	void setPublisher(const char* publisher) const
	{
		delete[]_author;
		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);
	}

	void setYear(int year) const { _year = year; }
	void setPages(int pages) const { _pages = pages; }

	void setAll(char* author, char* title, char* publisher, int year, int pages) const
	{
		delete[]_author;
		delete[]_title;
		delete[]_publisher;

		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//Overloading for const char* author, const char* title, const char* publisher
	void setAll(const char* author, const char* title, const char* publisher, int year, int pages) const
	{
		delete[]_author;
		delete[]_title;
		delete[]_publisher;

		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//Overloading for const char* author
	void setAll(const char* author, char* title, char* publisher, int year, int pages) const
	{
		delete[]_author;
		delete[]_title;
		delete[]_publisher;

		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//Overloading for const char* title
	void setAll(char* author, const char* title, char* publisher, int year, int pages) const
	{
		delete[]_author;
		delete[]_title;
		delete[]_publisher;

		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//Overloading for const char* publisher
	void setAll(char* author, char* title, const char* publisher, int year, int pages) const
	{
		delete[]_author;
		delete[]_title;
		delete[]_publisher;

		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//Overloading for const char* author, const char* title
	void setAll(const char* author, const char* title, char* publisher, int year, int pages) const
	{
		delete[]_author;
		delete[]_title;
		delete[]_publisher;

		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//Overloading for const char* title, const char* publisher
	void setAll(char* author, const char* title, const char* publisher, int year, int pages) const
	{
		delete[]_author;
		delete[]_title;
		delete[]_publisher;

		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//Overloading for const char* author, const char* publisher
	void setAll(const char* author, char* title, const char* publisher, int year, int pages) const
	{
		delete[]_author;
		delete[]_title;
		delete[]_publisher;

		_author = new char[strlen(author) + 1];
		strcpy(_author, author);

		_title = new char[strlen(title) + 1];
		strcpy(_title, title);

		_publisher = new char[strlen(publisher) + 1];
		strcpy(_publisher, publisher);

		_year = year;
		_pages = pages;
	}

	//--Getters:
	char* getAuthor() const { return _author; }
	char* getTitle() const { return _title; }
	char* getPublisher() const { return _publisher; }
	int getYear() const { return _year; }
	int getPages() const { return _pages; }

	void inputAll() const
	{
		char buf[256];

		delete[]_author;
		delete[]_title;
		delete[]_publisher;

		cout << "Author: ";
		cin.getline(buf, 256);

		_author = new char[strlen(buf) + 1];
		strcpy(_author, buf);

		cout << "Title: ";
		cin.getline(buf, 256);

		_title = new char[strlen(buf) + 1];
		strcpy(_title, buf);

		cout << "Publisher: ";
		cin.getline(buf, 256);

		_publisher = new char[strlen(buf) + 1];
		strcpy(_publisher, buf);

		cout << "Year: ";
		cin >> _year;
		cout << "Pages: ";
		cin >> _pages;
		cin.ignore();
	}

	void printAll() const
	{
		cout << "Author: " << _author << "\n";
		cout << "Title: " << _title << "\n";
		cout << "Publisher: " << _publisher << "\n";
		cout << "Year: " << _year << "\n";
		cout << "Pages: " << _pages << "\n";
	}
};

Book newBook()
{
	Book obj;
	obj.inputAll();
	return obj;
}

void addToArray(Book*& arr, int& size, Book obj)
{
	Book* newArr = new Book[size + 1];
	for (int i = 0; i < size; i++)
		newArr[i] = arr[i];
	newArr[size] = obj;
	delete[]arr;
	arr = newArr;
	size++;
}

void printArrayOfBooks(Book* arr, int size)
{
	cout << "---Book array info---\n";
	for (int i = 0; i < size; i++)
	{
		cout << "---Book[" << i << "]---\n";
		arr[i].printAll();
	}
}

void booksByAuthor(Book* arr, int size)
{
	char author[256];
	cout << "Enter author: ";
	cin.getline(author, 256);
	for (int i = 0; i < size; i++)
	{
		if (strcmp(arr[i].getAuthor(), author) == 0)
		{
			cout << "---Book[" << i << "]---\n";
			arr[i].printAll();
		}
	}
}

void booksByPublisher(Book* arr, int size)
{
	char publisher[256];
	cout << "Enter publisher: ";
	cin.getline(publisher, 256);
	for (int i = 0; i < size; i++)
	{
		if (strcmp(arr[i].getPublisher(), publisher) == 0)
		{
			cout << "---Book[" << i << "]---\n";
			arr[i].printAll();
		}
	}
}

void booksByYear(Book* arr, int size)
{
	int year;
	cout << "Enter year: ";
	cin >> year;
	cin.ignore();
	for (int i = 0; i < size; i++)
	{
		if (arr[i].getYear() > year)
		{
			cout << "---Book[" << i << "]---\n";
			arr[i].printAll();
		}
	}
}

int main()
{
	Book* library = nullptr;
	int size = 0;
	bool isActive = 1;
	int choice;
	while (isActive)
	{
		if (size == 0)
		{
			cout << "Enter your choice:\n1-Add\n0-Exit\n";
			cin >> choice;
			cin.ignore();
			if (choice == 1) { system("cls"); addToArray(library, size, newBook()); }
			else if (choice == 0) isActive = 0;
			else { system("cls"); cout << "Wrong choice\n"; }
		}
		else
		{
			cout << "Enter your choice:\n1-Add\n2-Show\n3-Show a list of books by one author\n";
			cout << "4-Show a list of books by one publisher\n5-Show a list of books published after a given year\n0-Exit\n";
			cin >> choice;
			cin.ignore();
			switch (choice)
			{
			case 1: system("cls"); addToArray(library, size, newBook()); break;
			case 2: system("cls"); printArrayOfBooks(library, size); break;
			case 3: system("cls"); booksByAuthor(library, size); break;
			case 4: system("cls"); booksByPublisher(library, size); break;
			case 5: system("cls"); booksByYear(library, size); break;
			case 0: isActive = 0; break;
			default: system("cls"); cout << "Wrong choice\n"; break;
			}
		}
		cout << "Press enter to continue...";
		cin;
		cin.ignore();
		system("cls");
	}
	delete[]library;
	cout << "~~~Constant Book tests:~~~\n";
	const Book test;
	cout << "---New constant object:\n";
	test.printAll();
	cout << "---Input object data:\n";
	test.inputAll();
	cout << "---What is in this object now:\n";
	test.printAll();
}