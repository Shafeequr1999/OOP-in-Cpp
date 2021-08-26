#include <iostream>
using std::string;
class Employee{
public:
string name;
string address;
int number;
void Introduction(){
    std::cout<<"Name:"<<name<<"\n";
    std::cout<<"Address:"<<address<<"\n";
    std::cout<<"Number:"<<number<<"\n";

}
};
int main(){
    Employee employee1;
    employee1.name="Shafeeq";
    employee1.address="Lucknow";
    employee1.number=1234;
    employee1.Introduction();

return 0;
}