#include <iostream>
#include <cstring>
using namespace std;

class Person {
	private:
		int legs;
		int arms;
		
	public:
	
		string hair;
		string name;
		
		Person(){
			setName();
			setHair();
			legs = 2;
			arms = 2;
		}
		
		string getLegs(){
			return legs;
		}
		
		string getArms(){
			return arms;
		}
		
		void setName(){
			cout << "What is the persons name? ";
			cin >> name;
		}
		
		void setHair(){
			cout << "What hair color do you want? ";
			cin >> hair;
		}
};

int main(){

	Person bob;
	Person sue;
	
	cout << "Our " << bob.name << " has " << bob.getLegs() << " legs & " << 
		bob.getArms() << " arms their hair color is " << bob.hair << endl;
		
	cout << "Our " << sue.name << " has " << sue.getLegs() << " legs & " << 
		sue.getArms() << " arms their hair color is " << sue.hair << endl;

	return 0;
}