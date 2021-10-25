#include <iostream>
#include <string>
using namespace std;
//class Emploee
//{
//public:
//	std::string m_name;
//	int m_id;
//	double m_wage;
//
//	void print()
//	{
//		std::cout << "Имя" << m_name << "\n Id: " << m_id << "\nWage: $" << m_wage << "\n";
//	}
//};

//class Number
//{
//public:
//
//	int num1;
//	int num2;
//
//	void set(int x, int y)
//	{
//		num1 = x;
//		num2 = y;
//	}
//
//	void print()
//	{
//		std::cout << "Числа: " << num1 << "," << num2;
//		cout << "\n";
//	}
//};

//class Fraction
//{
//private:
//
//	int numerator;
//	int denumerator;
//public:
//
//	void setFraction(int numerator, int denumerator)
//	{
//		this->numerator = numerator;
//		this->denumerator = denumerator;
//	}
//
//	void add(int x1, int y1, int x2, int y2)
//	{
//		numerator = (x1 * y2) + (x2 * y1);
//		denumerator = (y1 * y2);
//	}
//
//	void sub(int x1, int y1, int x2, int y2)
//	{
//		numerator = (x1 * y2) - (x2 * y1);
//		denumerator = (y1 * y2);
//	}
//
//	void mult(int x1, int y1, int x2, int y2)
//	{
//		numerator = (x1 * x2);
//		denumerator = (y1 * y2);
//	}
//
//	void div(int x1, int y1, int x2, int y2)
//	{
//		numerator = (x1 * y2);
//		denumerator = (y1 * x2);
//	}
//
//
//	void print()
//	{
//		cout << numerator << "/" << denumerator;
//	}
//};

//class DateClass
//{
//	int m_day;
//	int m_mouth;
//	int m_year;
//public:
//	void SetDate(int day, int mouth, int year)
//	{
//		m_day = day;
//		m_mouth = mouth;
//		m_year = year;
//	}
//
//	void print()
//	{
//		cout << m_day << "." << m_mouth << "." << m_year;
//	}
//	void copyFrom(const DateClass &d)
//	{
//		m_day = d.m_day;
//		m_mouth = d.m_mouth;
//		m_year = d.m_year;
//
//	}
//
//
//};

class Number
{
public:

	float num1;
	float num2;
	float num3;
	void SetValues(float x, float y, float z)
	{
		num1 = x;
		num2 = y;
		num3 = z;
	}

	void print()
	{
		std::cout << "Числа: " << num1 << "," << num2 << "," << num3;
		cout << "\n";
	}

	bool isEqual(Number point1)
	{

		if (point1.num1 == num1)
		{
			return 1;
		}
		else
		{
			return 0;
		}

		if (point1.num1 > num1)
		{
			return 1;
		}
		if (point1.num1 < num1)
		{
			return 0;
		}

	}

};




int main()
{
	setlocale(LC_ALL, "Rus");
	//Emploee john{ " John ",5,30.00 };
	//Emploee max{ " Max ",6,32.75 };
	//john.print();
	//cout << "\n";
	//max.print();

	//Number n1;
	//n1.set(3, 3);
	//Number n2 { 4, 4 };
	//n1.print();
	//n2.print();

	//int x1, x2, y1, y2;
	//cout << "Введите первый числитель: ";
	//cin >> x1;
	//cout << "Введите первый знаменатель: ";
	//cin >> y1;
	//cout << "Введите второй числитель: ";
	//cin >> x2;
	//cout << "Введите второй знаменатель: ";
	//cin >> y2;
	//Fraction n;
	//cout << "Сложение: ";
	//n.add(x1, y1, x2, y2);
	//n.print();
	//cout << "\n";
	//cout << "Вычитание: ";
	//n.sub(x1, y1, x2, y2);
	//n.print();
	//cout << "\n";
	//cout << "Умножение: ";
	//n.mult(x1, y1, x2, y2);
	//n.print();
	//cout << "\n";
	//cout << "Деление: ";
	//n.div(x1, y1, x2, y2);
	//n.print();

	//DateClass date;
	//date.SetDate(25,10,3021);
	//DateClass copy;
	//copy.copyFrom(date);
	//copy.print();

	Number point;
	point.SetValues(3.0, 4.0, 5.0);
	point.print();

	Number point1;
	point1.SetValues(9.0, 9.0, 9.0);
	point1.print();
	if (point.isEqual(point1))
	{
		cout << "\nРавны\n";
	}
	else
	{
		cout << "\nНе равны\n";
	}

	if (point.isEqual(point1))
	{
		cout << "\nБольше\n";
	}
	else
	{
		cout << "\nМеньше\n";
	}





	//Number point2;
	//point2.SetValues(7.0, 9.0, 5.3);
	//if (point.isEqual(point2))
	//{
	//	cout << "\nРавны\n";
	//}
	//else
	//{
	//	cout << "\nНе равны\n";
	//}



	return 0;
}