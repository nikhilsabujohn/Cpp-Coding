#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Student{
    private:
    int age,std;
    string fn;
    string ln,val;

    public:
    void set_age(int a){
        age=a;
    }
    int get_age(){
        return age;
    }

     void set_fn(string a){
        fn=a;
    }
    string get_fn(){
        return fn;
    }

    void set_ln(string a){
        ln=a;
    }
    string get_ln(){
        return ln;
    }
     void set_std(int a){
        std=a;
    }
    int get_std(){
        return std;
    }

    string to_string(){
        stringstream ss;
        ss<<age<<","<<fn<<","<<ln<<","<<std;
        ss>>val;
        return val;
    }




};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_std(standard);
    st.set_fn(first_name);
    st.set_ln(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_ln() << ", " << st.get_fn() << "\n";
    cout << st.get_std() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}