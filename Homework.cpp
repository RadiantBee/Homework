#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Reservoir
{
private:
	mutable char* _name;
	mutable char* _type;
	mutable int _length;
	mutable int _width;
	mutable int _depth;
public:
	//--Сonstructor
	//Default constructor
	Reservoir()
	{
		_name = new char[strlen("No name") + 1];
		strcpy(_name, "No name");

		_type = new char[strlen("No type") + 1];
		strcpy(_type, "No type");

		_length = 0;
		_width = 0;
		_depth = 0;
	}
	//Parameterized constructor
	explicit Reservoir(char* name, char* type, int length, int width, int depth)
	{
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		_type = new char[strlen(type) + 1];
		strcpy(_type, type);

		_length = length;
		_width = width;
		_depth = depth;
	}
	//Overload for const char* name
	explicit Reservoir(const char* name, char* type, int length, int width, int depth)
	{
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		_type = new char[strlen(type) + 1];
		strcpy(_type, type);

		_length = length;
		_width = width;
		_depth = depth;
	}
	//Overload for const char* type
	explicit Reservoir(char* name, const char* type, int length, int width, int depth)
	{
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		_type = new char[strlen(type) + 1];
		strcpy(_type, type);

		_length = length;
		_width = width;
		_depth = depth;
	}
	//Overload for const char* name and type
	explicit Reservoir(const char* name, const char* type, int length, int width, int depth)
	{
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		_type = new char[strlen(type) + 1];
		strcpy(_type, type);

		_length = length;
		_width = width;
		_depth = depth;
	}
	//Copy constructor 
	Reservoir(const Reservoir& obj)
	{
		_name = new char[strlen(obj._name) + 1];
		strcpy(_name, obj._name);

		_type = new char[strlen(obj._type) + 1];
		strcpy(_type, obj._type);

		_length = obj._length;
		_width = obj._width;
		_depth = obj._depth;
	}

	//Destructor
	~Reservoir()
	{
		delete[]_name;
		delete[]_type;
	}

	//Overloaded assignment operator
	Reservoir operator= (Reservoir obj)
	{
		delete[]_name;
		delete[]_type;

		_name = new char[strlen(obj._name) + 1];
		strcpy(_name, obj._name);

		_type = new char[strlen(obj._type) + 1];
		strcpy(_type, obj._type);

		_length = obj._length;
		_width = obj._width;
		_depth = obj._depth;
		return*this;
	}

	//--Setters:
	void setName(char* name)
	{
		delete[]_name;
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);
	}
	//Overload for const char*
	void setName(const char* name)
	{
		delete[]_name;
		_name = new char[strlen("No name") + 1];
		strcpy(_name, "No name");
	}
	void setType(char* type)
	{
		delete[]_type;
		_type = new char[strlen(type) + 1];
		strcpy(_type, type);
	}
	//Overload for const char*
	void setType(const char* type)
	{
		delete[]_type;
		_type = new char[strlen(type) + 1];
		strcpy(_type, type);
	}
	void setLength(int length) { _length = length; }
	void setWidth(int width) { _width = width; }
	void setDepth(int depth) { _depth = depth; }
	void setAll(char* name, char* type, int length, int width, int depth)
	{
		delete[]_name;
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		delete[]_type;
		_type = new char[strlen(type) + 1];
		strcpy(_type, type);

		_length = length;
		_width = width;
		_depth = depth;
	}
	//Overload for const char* name
	void setAll(const char* name, char* type, int length, int width, int depth)
	{
		delete[]_name;
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		delete[]_type;
		_type = new char[strlen(type) + 1];
		strcpy(_type, type);

		_length = length;
		_width = width;
		_depth = depth;
	}
	//Overload for const char* type
	void setAll(char* name, const char* type, int length, int width, int depth)
	{
		delete[]_name;
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		delete[]_type;
		_type = new char[strlen(type) + 1];
		strcpy(_type, type);

		_length = length;
		_width = width;
		_depth = depth;
	}
	//Overload for const char* name and type
	void setAll(const char* name, const char* type, int length, int width, int depth)
	{
		delete[]_name;
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		delete[]_type;
		_type = new char[strlen(type) + 1];
		strcpy(_type, type);

		_length = length;
		_width = width;
		_depth = depth;
	}

	//--Getters:
	char* getName() { return _name; }
	char* getType() { return _type; }
	int getLength() { return _length; }
	int getWidth() { return _width; }
	int getDepth() { return _depth; }

	int getVolume() { return (_length * _width * _depth); }
	float getArea() { return (float)(_length * _width * 3.14); }

	void inputAll()
	{
		char buf[256];

		cout << "Enter name: ";
		cin.getline(buf, 256);

		delete[]_name;
		_name = new char[strlen(buf) + 1];
		strcpy(_name, buf);
		
		cout << "Enter type: ";
		cin.getline(buf, 256);

		delete[]_type;
		_type = new char[strlen(buf) + 1];
		strcpy(_type, buf);

		cout << "Enter length: ";
		cin >> _length;

		cout << "Enter width: ";
		cin >> _width;

		cout << "Enter depth: ";
		cin >> _depth;

		cin.ignore();
	}
	void printAll()
	{
		cout << "Name: " << _name << "\n";
		cout << "Type: " << _type << "\n";
		cout << "Length: " << _length << "\n";
		cout << "Width: " << _width << "\n";
		cout << "Depth: " << _depth << "\n";
	}

	bool isSameType(Reservoir obj)
	{
		if (strcmp(_type, obj._type) == 0)
		{
			return true;
		}
		return false;
	}
	int areaCompare(Reservoir obj)
	{
		if (strcmp(_type, obj._type) == 0)//If type is same
		{
			if((float)(_length * _width * 3.14) > (float)(obj._length * obj._width * 3.14))
				return 1;//Obj smaller
			if ((float)(_length * _width * 3.14) < (float)(obj._length * obj._width * 3.14))
				return -1;//Obj bigger
			else
				return 0;//Same
		}
		else
		{
			return -2;//Wrong type
		}
	}
	void copyDataTo(Reservoir obj)
	{
		delete[]obj._name;
		obj._name = new char[strlen(_name) + 1];
		strcpy(obj._name, _name);

		delete[]obj._type;
		obj._type = new char[strlen(_type) + 1];
		strcpy(obj._type, _type);

		obj._length = _length;
		obj._width = _width;
		obj._depth = _depth;
	}
	void copyDataFrom(Reservoir obj)
	{
		delete[]_name;
		_name = new char[strlen(obj._name) + 1];
		strcpy(_name, obj._name);

		delete[]_type;
		_type = new char[strlen(obj._type) + 1];
		strcpy(_type, obj._type);

		_length = obj._length;
		_width = obj._width;
		_depth = obj._depth;
	}

	//Const overloading:

	//--Setters:
	void setName(char* name) const 
	{
		delete[]_name;
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);
	}
	//Overload for const char*
	void setName(const char* name) const 
	{
		delete[]_name;
		_name = new char[strlen("No name") + 1];
		strcpy(_name, "No name");
	}
	void setType(char* type) const 
	{
		delete[]_type;
		_type = new char[strlen(type) + 1];
		strcpy(_type, type);
	}
	//Overload for const char*
	void setType(const char* type) const 
	{
		delete[]_type;
		_type = new char[strlen(type) + 1];
		strcpy(_type, type);
	}
	void setLength(int length) const { _length = length; }
	void setWidth(int width) const { _width = width; }
	void setDepth(int depth) const { _depth = depth; }
	void setAll(char* name, char* type, int length, int width, int depth) const 
	{
		delete[]_name;
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		delete[]_type;
		_type = new char[strlen(type) + 1];
		strcpy(_type, type);

		_length = length;
		_width = width;
		_depth = depth;
	}
	//Overload for const char* name
	void setAll(const char* name, char* type, int length, int width, int depth) const 
	{
		delete[]_name;
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		delete[]_type;
		_type = new char[strlen(type) + 1];
		strcpy(_type, type);

		_length = length;
		_width = width;
		_depth = depth;
	}
	//Overload for const char* type
	void setAll(char* name, const char* type, int length, int width, int depth) const
	{
		delete[]_name;
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		delete[]_type;
		_type = new char[strlen(type) + 1];
		strcpy(_type, type);

		_length = length;
		_width = width;
		_depth = depth;
	}
	//Overload for const char* name and type
	void setAll(const char* name, const char* type, int length, int width, int depth) const
	{
		delete[]_name;
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);

		delete[]_type;
		_type = new char[strlen(type) + 1];
		strcpy(_type, type);

		_length = length;
		_width = width;
		_depth = depth;
	}

	//--Getters:
	char* getName() const { return _name; }
	char* getType() const { return _type; }
	int getLength() const { return _length; }
	int getWidth() const { return _width; }
	int getDepth() const { return _depth; }

	int getVolume() const { return (_length * _width * _depth); }
	float getArea() const { return (float)(_length * _width * 3.14); }

	void inputAll() const
	{
		char buf[256];

		cout << "Enter name: ";
		cin.getline(buf, 256);

		delete[]_name;
		_name = new char[strlen(buf) + 1];
		strcpy(_name, buf);

		cout << "Enter type: ";
		cin.getline(buf, 256);

		delete[]_type;
		_type = new char[strlen(buf) + 1];
		strcpy(_type, buf);

		cout << "Enter length: ";
		cin >> _length;

		cout << "Enter width: ";
		cin >> _width;

		cout << "Enter depth: ";
		cin >> _depth;

		cin.ignore();
	}
	void printAll() const
	{
		cout << "Name: " << _name << "\n";
		cout << "Type: " << _type << "\n";
		cout << "Length: " << _length << "\n";
		cout << "Width: " << _width << "\n";
		cout << "Depth: " << _depth << "\n";
	}

	bool isSameType(Reservoir obj) const
	{
		if (strcmp(_type, obj._type) == 0)
		{
			return true;
		}
		return false;
	}
	int areaCompare(Reservoir obj) const
	{
		if (strcmp(_type, obj._type) == 0)//If type is same
		{
			if ((float)(_length * _width * 3.14) > (float)(obj._length * obj._width * 3.14))
				return 1;//Obj smaller
			if ((float)(_length * _width * 3.14) < (float)(obj._length * obj._width * 3.14))
				return -1;//Obj bigger
			else
				return 0;//Same
		}
		else
		{
			return -2;//Wrong type
		}
	}
	void copyDataTo(Reservoir obj) const
	{
		delete[]obj._name;
		obj._name = new char[strlen(_name) + 1];
		strcpy(obj._name, _name);

		delete[]obj._type;
		obj._type = new char[strlen(_type) + 1];
		strcpy(obj._type, _type);

		obj._length = _length;
		obj._width = _width;
		obj._depth = _depth;
	}
	void copyDataFrom(Reservoir obj) const
	{
		delete[]_name;
		_name = new char[strlen(obj._name) + 1];
		strcpy(_name, obj._name);

		delete[]_type;
		_type = new char[strlen(obj._type) + 1];
		strcpy(_type, obj._type);

		_length = obj._length;
		_width = obj._width;
		_depth = obj._depth;
	}
};

void printArray(Reservoir* arr, int size)
{
	cout << "---Array info---\n";
	for (int i = 0; i < size; i++)
	{
		cout << "---Object #" << i << "---\n";
		arr[i].printAll();
	}

}

void addToArray(Reservoir*& arr, int& size, Reservoir obj)
{
	Reservoir* newArr = new Reservoir[size + 1];
	for (int i = 0; i < size; i++)
		newArr[i] = arr[i];
	newArr[size] = obj;
	delete[]arr;
	arr = newArr;
	size++;
}

Reservoir newObj()
{
	Reservoir obj;
	obj.inputAll();
	return obj;
}


int main()
{
	Reservoir* group = nullptr;
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
			if (choice == 1) { system("cls"); addToArray(group, size, newObj()); }
			else if (choice == 0) isActive = 0;
			else { system("cls"); cout << "Wrong choice\n"; }
		}
		else
		{
			cout << "Enter your choice:\n1-Add\n2-Show\n0-Exit\n";
			cin >> choice;
			cin.ignore();
			switch (choice)
			{
			case 1: system("cls"); addToArray(group, size, newObj()); break;
			case 2: system("cls"); printArray(group, size); break;
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

	cout << "Functionality tests:\n";

	cout << "1)Reservoir test:\n";
	Reservoir test1;
	Reservoir test2;
	test1.setType("Lake");
	test2.setType("Lake");
	cout << "Test 1: " << test1.getType() << " = " << test2.getType() << "?\n";
	cout << "Result: " << boolalpha << test1.isSameType(test2);
	test2.setType("Sea");
	cout << "\nTest 2: " << test1.getType() << " = " << test2.getType() << "?\n";
	cout << "Result: " << boolalpha << test1.isSameType(test2);

	cout << "\nPress enter to continue...";
	cin; cin.ignore();
	system("cls");

	cout << "Functionality tests:\n";

	cout << "2)Surface area test:\n";
	cout << "(-1 -> < | 0 -> = | 1 -> >)\n";
	cout << "(-2 -> Wrong type)\n";
	test1.setAll("Object prototype 1", "Lake", 10, 10, 10);
	test2.setAll("Object prototype 2", "Lake", 10, 10, 10);
	cout << "Test 1: " << test1.getArea() << " = " << test2.getArea() << "?\n";
	cout << "Result: " << test1.areaCompare(test2);
	test1.setAll("Object prototype 1", "Lake", 2, 2, 2);
	test2.setAll("Object prototype 2", "Lake", 10, 10, 10);
	cout << "\nTest 2: " << test1.getArea() << " = " << test2.getArea() << "?\n";
	cout << "Result: " << test1.areaCompare(test2);
	test1.setAll("Object prototype 1", "Lake", 10, 10, 10);
	test2.setAll("Object prototype 2", "Lake", 2, 2, 2);
	cout << "\nTest 3: " << test1.getArea() << " = " << test2.getArea() << "?\n";
	cout << "Result: " << test1.areaCompare(test2);
	test1.setAll("Object prototype 1", "Lake", 10, 10, 10);
	test2.setAll("Object prototype 2", "Sea", 10, 10, 10);
	cout << "\nTest 4: " << test1.getArea() << " = " << test2.getArea() << "?\n";
	cout << "Result: " << test1.areaCompare(test2);

	cout << "\nPress enter to continue...";
	cin; cin.ignore();
	system("cls");

	cout << "Functionality tests:\n";
	cout << "3)Constant type test:\n";
	const Reservoir constTest;
	constTest.printAll();
	cout << "Data input test: \n";
	constTest.inputAll();
	constTest.printAll();
	cout << "Volume test: "<< constTest.getLength() <<" * " << constTest.getWidth() <<" * "<< constTest.getDepth() << " = " << constTest.getVolume() << "\n";
	cout << "Result: " << constTest.getVolume();
} 