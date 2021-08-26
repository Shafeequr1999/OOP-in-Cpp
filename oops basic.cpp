#include<iostream>
std::cout
namespace namespace1{
int variable1=345;
}
namespace namespace2{
int variable1=431;

}
int main(){
cout<<namespace1::variable1<<"\n";
cout<<namespace2::variable1;
return 0;
}