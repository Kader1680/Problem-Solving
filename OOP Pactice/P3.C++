// Write a probram with a mother class animal. 
// Inside it define a name and an age variables, and set_value() function.
// Then create two bases variables Zebra and Dolphin which write a message telling the age, 
// the name and giving some extra information (e.g. place of origin).


// ------------------------------------------- my solution ---------------------------------------------
#include <iostream>
#include <string>
using namespace std;

class Animal{
    protected:
        int age;
        string name;
    public:
        void setData(int ag, string nm){
            age = ag;
            name = nm;
        }
        void set_value(){
            cout<<"this is "<<name<<" and he has "<<age;
        }  
};

class Zebra : public Animal{
    protected:
        string origin;  
    public:
        void setproperty(string org){
            origin = org;
        } 
        void getperoprty(){
             cout<<" he leave int"<<origin<<endl;
        }
};
class Dolphin : public Animal{
    protected:
        string origin;  
    public:
        void setproperty(string org){
            origin = org;
        } 
        void getperoprty(){
             cout<<" he leave int"<<origin<<endl;
        }
};

int main()
{
    Zebra z;
    z.setData(345, "ZERT");
    z.setproperty("africa");
    z.set_value();
    z.getperoprty();
    Dolphin d;
    d.setData(123, "DELPH");
    d.setproperty("asia");
    d.set_value();
    d.getperoprty();

    return 0;
}

// -------------------------------------------- other solution ---------------------------------
// Exercises: OOP
// Exercise 3

#include <iostream>
#include <cstring>
using namespace std;

class Animal
{
	protected:
	 int age;char name[10];
	public:
	 void set_data (int a, char b[10])
	 {
		age = a;
		strcpy(b,name);
	 }

};

class Zebra:public Animal
{public:

void message_zebra()
{cout<< "The zebra named "<< name<<" is "<< age << "years old. The zebra comes from Africa. \n";}
};

class Dolphin: public Animal
{public:

void message_dolphin()
{cout<< "The dolphin named "<< name<< " is "<<age << "years old. The dolphin comes from New Zeland.\n";}
};


int main ()
{
	Zebra zeb;
	Dolphin dol;
	char n1[10]="Ana";
	char n2[10]="Jin";

	zeb.set_data (5,n1);
	dol.set_data (2,n2);

	zeb.message_zebra() ;
	dol.message_dolphin() ;

	return 0;
}