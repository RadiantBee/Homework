#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
//Time spent on this class - 2:08

class Worker
{
private:
	mutable char* _name;
	mutable char* _work;
	mutable int _year;
	mutable int _salary;
public:
	//--Сonstructors:
	//Default constructor
	Worker()
	{
		_name = new char[strlen("No name") + 1];
		strcpy(_name, "No name");

		_work = new char[strlen("No work") + 1];
		strcpy(_work, "No work");

		_year = 0;
		_salary = 0;
	}
	//Parameterized constructor
	explicit Worker(char* name, char* work, int year, int salary)
	{
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		_work = new char[strlen(work) + 1];
		strcpy(_work, work);

		_year = 0;
		_salary = 0;
	}
	//Overloading for const char* name
	explicit Worker(const char* name, char* work, int year, int salary)
	{
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		_work = new char[strlen(work) + 1];
		strcpy(_work, work);

		_year = 0;
		_salary = 0;
	}
	//Overloading for const char* work
	explicit Worker(char* name, const char* work, int year, int salary)
	{
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		_work = new char[strlen(work) + 1];
		strcpy(_work, work);

		_year = 0;
		_salary = 0;
	}
	//Overloading for const char* name, const char* work
	explicit Worker(const char* name, const char* work, int year, int salary)
	{
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		_work = new char[strlen(work) + 1];
		strcpy(_work, work);

		_year = 0;
		_salary = 0;
	}
	//Copy constructor
	Worker(const Worker& obj)
	{
		_name = new char[strlen(obj._name) + 1];
		strcpy(_name, obj._name);

		_work = new char[strlen(obj._work) + 1];
		strcpy(_work, obj._work);

		_year = obj._year;
		_salary = obj._salary;
	}
	//Destructor
	~Worker()
	{
		delete[]_name;
		delete[]_work;
	}
	//Overloading assignment operator
	Worker operator= (const Worker& obj)
	{
		delete[]_name;
		delete[]_work;

		_name = new char[strlen(obj._name) + 1];
		strcpy(_name, obj._name);

		_work = new char[strlen(obj._work) + 1];
		strcpy(_work, obj._work);

		_year = obj._year;
		_salary = obj._salary;

		return*this;
	}

	//--Setters:
	void setName(char* name)
	{
		delete[]_name;
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);
	}
	//Overloading for const char* name
	void setName(const char* name)
	{
		delete[]_name;
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);
	}

	void setWork(char* work)
	{
		delete[]_work;
		_work = new char[strlen(work) + 1];
		strcpy(_work, work);
	}
	//Overloading for const char* work
	void setWork(const char* work)
	{
		delete[]_work;
		_work = new char[strlen(work) + 1];
		strcpy(_work, work);
	}

	void setYear(int year) { _year = year; }
	void setSalary(int salary) { _salary = salary; }

	void setAll(char* name, char* work, int year, int salary)
	{
		delete[]_name;
		delete[]_work;

		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		_work = new char[strlen(work) + 1];
		strcpy(_work, work);

		_year = year;
		_salary = salary;
	}

	//Overloading for const char* name
	void setAll(const char* name, char* work, int year, int salary)
	{
		delete[]_name;
		delete[]_work;

		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		_work = new char[strlen(work) + 1];
		strcpy(_work, work);

		_year = year;
		_salary = salary;
	}

	//Overloading for const char* work
	void setAll(char* name, const char* work, int year, int salary)
	{
		delete[]_name;
		delete[]_work;

		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		_work = new char[strlen(work) + 1];
		strcpy(_work, work);

		_year = year;
		_salary = salary;
	}

	//Overloading for const char* name, const char* work
	void setAll(const char* name, const char* work, int year, int salary)
	{
		delete[]_name;
		delete[]_work;

		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		_work = new char[strlen(work) + 1];
		strcpy(_work, work);

		_year = year;
		_salary = salary;
	}

	//--Getters:
	char* getName() { return _name; }
	char* getWork() { return _work; }
	int getYear() { return _year; }
	int getSalary() { return _salary; }

	void inputAll()
	{
		char buf[256];

		delete[]_name;
		delete[]_work;

		cout << "Name: ";
		cin.getline(buf, 256);

		_name = new char[strlen(buf) + 1];
		strcpy(_name, buf);

		cout << "Work: ";
		cin.getline(buf, 256);

		_work = new char[strlen(buf) + 1];
		strcpy(_work, buf);

		cout << "Year: ";
		cin >> _year;
		cout << "Salary: ";
		cin >> _salary;
		cin.ignore();
	}
	void printAll()
	{
		cout << "Name: " << _name << "\n";
		cout << "Work: " << _work << "\n";
		cout << "Year: " << _year << "\n";
		cout << "Salary: " << _salary << "\n";
	}

	//--Const overload:

	//Overloading assignment operator
	Worker operator= (const Worker& obj) const
	{
		delete[]_name;
		delete[]_work;

		_name = new char[strlen(obj._name) + 1];
		strcpy(_name, obj._name);

		_work = new char[strlen(obj._work) + 1];
		strcpy(_work, obj._work);

		_year = obj._year;
		_salary = obj._salary;

		return*this;
	}

	//--Setters:
	void setName(char* name) const
	{
		delete[]_name;
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);
	}
	//Overloading for const char* name
	void setName(const char* name) const
	{
		delete[]_name;
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);
	}

	void setWork(char* work) const
	{
		delete[]_work;
		_work = new char[strlen(work) + 1];
		strcpy(_work, work);
	}
	//Overloading for const char* work
	void setWork(const char* work) const
	{
		delete[]_work;
		_work = new char[strlen(work) + 1];
		strcpy(_work, work);
	}

	void setYear(int year) const { _year = year; }
	void setSalary(int salary) const { _salary = salary; }

	void setAll(char* name, char* work, int year, int salary) const
	{
		delete[]_name;
		delete[]_work;

		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		_work = new char[strlen(work) + 1];
		strcpy(_work, work);

		_year = year;
		_salary = salary;
	}

	//Overloading for const char* name
	void setAll(const char* name, char* work, int year, int salary) const
	{
		delete[]_name;
		delete[]_work;

		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		_work = new char[strlen(work) + 1];
		strcpy(_work, work);

		_year = year;
		_salary = salary;
	}

	//Overloading for const char* work
	void setAll(char* name, const char* work, int year, int salary) const
	{
		delete[]_name;
		delete[]_work;

		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		_work = new char[strlen(work) + 1];
		strcpy(_work, work);

		_year = year;
		_salary = salary;
	}

	//Overloading for const char* name, const char* work
	void setAll(const char* name, const char* work, int year, int salary) const
	{
		delete[]_name;
		delete[]_work;

		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		_work = new char[strlen(work) + 1];
		strcpy(_work, work);

		_year = year;
		_salary = salary;
	}

	//--Getters:
	char* getName() const { return _name; }
	char* getWork() const { return _work; }
	int getYear() const { return _year; }
	int getSalary() const { return _salary; }

	void inputAll() const
	{
		char buf[256];

		delete[]_name;
		delete[]_work;

		cout << "Name: ";
		cin.getline(buf, 256);

		_name = new char[strlen(buf) + 1];
		strcpy(_name, buf);

		cout << "Work: ";
		cin.getline(buf, 256);

		_work = new char[strlen(buf) + 1];
		strcpy(_work, buf);

		cout << "Year: ";
		cin >> _year;
		cout << "Salary: ";
		cin >> _salary;
		cin.ignore();
	}
	void printAll() const
	{
		cout << "Name: " << _name << "\n";
		cout << "Work: " << _work << "\n";
		cout << "Year: " << _year << "\n";
		cout << "Salary: " << _salary << "\n";
	}

};

Worker newBook()
{
	Worker obj;
	obj.inputAll();
	return obj;
}

void addToArray(Worker*& arr, int& size, Worker obj)
{
	Worker* newArr = new Worker[size + 1];
	for (int i = 0; i < size; i++)
		newArr[i] = arr[i];
	newArr[size] = obj;
	delete[]arr;
	arr = newArr;
	size++;
}

void printArrayOfWorkers(Worker* arr, int size)
{
	cout << "---Worker array info---\n";
	for (int i = 0; i < size; i++)
	{
		cout << "---Worker[" << i << "]---\n";
		arr[i].printAll();
	}
}

void workersByWorkExperience(Worker* arr, int size)
{
	int workExperience;
	int currentYear;
	cout << "Enter required work experience: ";
	cin >> workExperience;
	cout << "Enter current year: ";
	cin >> currentYear;
	cin.ignore();
	for (int i = 0; i < size; i++)
	{
		if ((currentYear - arr[i].getYear()) > workExperience)
		{
			cout << "---Worker[" << i << "]---\n";
			arr[i].printAll();
		}
	}
}

void workersBySalary(Worker* arr, int size)
{
	int salary;
	cout << "Enter salary: ";
	cin >> salary;
	cin.ignore();
	for (int i = 0; i < size; i++)
	{
		if (arr[i].getSalary() > salary)
		{
			cout << "---Book[" << i << "]---\n";
			arr[i].printAll();
		}
	}
}

void workersByWork(Worker* arr, int size)
{
	char work[256];
	cout << "Enter work: ";
	cin.getline(work, 256);
	for (int i = 0; i < size; i++)
	{
		if (strcmp(arr[i].getWork(), work) == 0)
		{
			cout << "---Book[" << i << "]---\n";
			arr[i].printAll();
		}
	}
}

int main()
{
	Worker* group = nullptr;
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
			if (choice == 1) { system("cls"); addToArray(group, size, newBook()); }
			else if (choice == 0) isActive = 0;
			else { system("cls"); cout << "Wrong choice\n"; }
		}
		else
		{
			cout << "Enter your choice:\n1-Add\n2-Show\n3-Show a list of workers by work experience\n";
			cout << "4-Show a list of workers by salary\n5-Show a list of workers by work\n0-Exit\n";
			cin >> choice;
			cin.ignore();
			switch (choice)
			{
			case 1: system("cls"); addToArray(group, size, newBook()); break;
			case 2: system("cls"); printArrayOfWorkers(group, size); break;
			case 3: system("cls"); workersByWorkExperience(group, size); break;
			case 4: system("cls"); workersBySalary(group, size); break;
			case 5: system("cls"); workersByWork(group, size); break;
			case 0: isActive = 0; break;
			default: system("cls"); cout << "Wrong choice\n"; break;
			}
		}
		cout << "Press enter to continue...";
		cin;
		cin.ignore();
		system("cls");
	}
	delete[]group;
	cout << "~~~Constant Work tests:~~~\n";
	const Worker test;
	cout << "---New constant object:\n";
	test.printAll();
	cout << "---Input object data:\n";
	test.inputAll();
	cout << "---What is in this object now:\n";
	test.printAll();
}