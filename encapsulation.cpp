#include <iostream>
using std::string;
class Employee{
private:
string Name;
string Address;
int Age;
public:
void setName(string name){
    Name =name;
}
string getName(){
    return Name;
}
void setAddress(string address){
    Address=address;
}
string getAddress(){
   return Address;
}
void setAge(int age){
    Age=age;
}
int getAge(){
    return Age;
}
void Introduction(){
    std::cout<<"Name:"<<Name<<"\n";
    std::cout<<"Address:"<<Address<<"\n";
    std::cout<<"Age:"<<Age<<"\n";

}
//Creating constructor
Employee(string name, string address, int age){   
    Name=name;
    Address=address;
    Age=age;
}
};
int main(){
    //invoking constructor
    Employee employee1=Employee("Shafeeq","Lucknow",22);
    employee1.Introduction();
    employee1.setAge(30);
    std::cout<<employee1.getName()<<"is"<<employee1.setAge()<<" years old";
return 0;
}