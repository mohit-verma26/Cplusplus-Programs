using namespace std;
#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        age=initialAge;
        if(initialAge<0)
        {

            cout<<"Age is not valid, setting age to 0."<<endl;
            initialAge=0;
        }

    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console
        if(age<13)
        {
            cout<<"you are young."<<endl;
        }
        else if(age>=13 && age<=17)
        {
            cout<<"you are teenager."<<endl;
        }
        else
        {
            cout<<"you are old."<<endl;
        }


    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        age++;

    }

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i<t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses();
        }
        p.amIOld();

		cout << '\n';
    }

    return 0;
}
