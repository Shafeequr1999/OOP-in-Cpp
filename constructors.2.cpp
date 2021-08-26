#include <iostream>
using std::string;
class Employee{
public:
string Name;
string Address;
int Number;
void Introduction(){
    std::cout<<"Name:"<<Name<<"\n";
    std::cout<<"Address:"<<Address<<"\n";
    std::cout<<"Number:"<<Number<<"\n";

}
//Creating constructor
Employee(string name, string address, int number){    
    Name=name;
    Address=address;
    Number=number;
}
};
int main(){
    //invoking constructor
    Employee employee1=Employee("Shafeeq","Lucknow",12345);
    employee1.Introduction();

return 0;
}