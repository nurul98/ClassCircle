#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <cmath>
#include <chrono>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

class Circle 
{
	private:

		double radius;      // Data member (Variable)
		string color;       // Data member (Variable)

	public:
	
		// Constructor with default values for data members
		Circle(double r, string c) 
		{
			radius = r;
			color = c;
		}

		double getRadius() 
		{  // Member function (Getter)
			return radius;
		}

		string getColor()
		{   // Member function (Getter)
			return color;
		}

		void displayCircle()
		{	// Member function
			cout << "Radius =  " << getRadius() << " Color =  " << getColor() << endl;
		}

		double calcArea()
		{	// Member function
			double A = 3.14159;
			double R = radius;
			
			return A*std::pow(R,2.0);
		}

		void compareCircles(Circle newC)
		{
			double firstRadius = radius;
			double secondRadius = newC.radius;
			if (firstRadius == secondRadius)
				cout <<endl<<endl<< "The " << getColor() << " circle is equal to " << newC.getColor() << " circle"<<endl;
			else if (firstRadius > secondRadius)
				cout <<endl<<endl<< "The " << getColor() << " circle is larger than the " << newC.getColor() << " circle" << endl;
			else if (firstRadius < secondRadius)
				cout <<endl<< endl << "The " << getColor() << " circle is smaller than the " << newC.getColor() << " circle" << endl;
		}
};   // need to end the class declaration with a semi-colon

// Test driver function
int main() 
{
	double radius1,radius2;
	string color1,color2;

	cout <<endl<< "Enter the radius of the first circle : ";
	cin >> radius1;

	cout <<endl<< "Enter the color of the first circle : ";
	cin >> color1;

	cout <<endl<< "Enter the radius of the second circle : ";
	cin >> radius2;

	cout <<endl<< "Enter the color of the second circle : ";
	cin >> color2;
	
	// Construct a Circle instance
	Circle C1(radius1,color1);

	// Construct another Circle instance
	Circle C2(radius2,color2);

	cout <<endl<< "First circle : ";
	C1.displayCircle();
	cout <<endl<< "Second circle : ";
	C2.displayCircle();
	
	cout <<endl<< "First circle area : " <<C1.calcArea();
	cout <<endl<<endl<< "Second circle area : " <<C2.calcArea();

	C1.compareCircles(C2);
	
	//holds output window open in visual studio
	cin.clear();
	cin.ignore();
	cin.get();
	
	return 0;
}