#include <iostream>
#include <sstream>
using namespace std;
#include <string>
/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    private:
        int age, standard;
        string first_name, last_name;
    public:
        void set_age(int ag){
            age = ag; 
        }
        void set_standard(int std){
            standard = std ;
        }
        void set_first_name(string fn){
            first_name = fn;
        }
        void set_last_name(string age){
            last_name = age;
        } 
        int get_age(){
            return age ;
        }
        int get_standard(){
            return standard;
        }
        string get_first_name(){
            return first_name;
        }
        string get_last_name(){
            return last_name;
        } 
        string to_string(){
            stringstream all;
            string result;
            all << age<<"," <<last_name<<","<<first_name<<","<<standard;
            all >> result;
            return result;
        }
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
