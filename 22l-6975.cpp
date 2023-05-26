#include <iostream>
using namespace std;
class FeetInches
{
private:
	int feet;
	int inches;
	void simplify()
	{
		if (inches > 12)
		{
			inches -= 12;
			feet++;
		}
		else if (inches < 0)
		{
			inches += 12;
			feet--;
		}
	}

public:
	FeetInches(int f = 0, int i = 0)
	{
		feet = f;
		inches = i;
		simplify();
	}
	int getf(){
		return feet;
	}
	int getI(){
		return inches;
	}
	void setf(int f){
		feet = f;
	}

	void setI(int I){
		inches = I;
	}
	
	void display(){
		cout<<feet<<" feet "<<inches<<" inches"<<endl;
	}

	void operator + (const FeetInches &obj){
		feet += obj.feet;
		inches += obj.inches;
		simplify();
		cout<<"+ operator"<<endl;
	}

	void operator - (const FeetInches &obj){
		feet -= obj.feet;
		inches -= obj.inches;
		simplify();
		cout<<" - operator"<<endl;
	}

	void operator * (const FeetInches &obj){
		feet *= obj.feet;
		inches *= obj.inches;
		simplify();
		cout<<" * operator"<<endl;
	}

	void operator / (const FeetInches &obj){
		feet /= obj.feet;
		inches /= obj.inches;
		simplify();
		cout<<" / operator"<<endl;
	}

	bool operator > (const FeetInches &obj){
		if (feet > obj.feet)
		{
			return true;
		}
		return false;
		cout<<" > operator"<<endl;
	}

	bool operator < (const FeetInches &obj){
		if (feet < obj.feet)
		{
			return true;
		}
		return false;
		cout<<" < operator"<<endl;
	}

	bool operator >= (const FeetInches &obj){
		if (feet >= obj.feet)
		{
			return true;
		}
		return false;
		cout<<" >= operator"<<endl;
	}

	bool operator <= (const FeetInches &obj){
		if (feet <= obj.feet)
		{
			return true;
		}
		return false;
		cout<<" <= operator"<<endl;
	}
};
int main()
{
	FeetInches f1;
	f1.display();
	FeetInches f2 = f1;
	f2.display();
	FeetInches f3(5, 18);
	f3.display();
	f1 = f3;
	f1.display();
	f3.display();
	system("pause");
	return 0;
}
