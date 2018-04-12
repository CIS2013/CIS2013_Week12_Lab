#include <iostream>
#include <cstring>
using namespace std;

class Human {
	private:
		int legs;
		int arms;
		
	public:
	
		string hair;
		string name;
		
		Human(){
			setName();
			setHair();
			legs = 2;
			arms = 2;
		}
		
		int getLegs(){
			return legs;
		}
		
		int getArms(){
			return arms;
		}
		
		void setLegs(){
			cout << "How many legs does this person have? ";
			cin >> legs;
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

class Man: public Human {
	public:
	
		bool hasEgo = true;
		string pee = "standing";
};

class Woman: public Human {
	public:
	
		bool hasEgo = false;
		string pee = "sitting";
};

int main(){

	Man bob;
	Woman sue;
	
	cout << "Our " << bob.name << " has " << bob.getLegs() << " legs & " << 
		bob.getArms() << " arms their hair color is " << bob.hair << endl;
		
	cout << bob.name << " has an ego? " << bob.hasEgo << endl << " and pees " << bob.pee << endl;
	
	// All Functions that are part of a class are called METHODS
	cout << "Our " << sue.name << " has " << sue.getLegs() << " legs & " << 
		sue.getArms() << " arms their hair color is " << sue.hair << endl;
		
	cout << sue.name << " has an ego? " << sue.hasEgo << endl << " and pees " << sue.pee << endl;

	return 0;
}