#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Person{
    std::string name="";
    int age;
public:
    Person(int age,std::string name){
        this->age=age;
        this->name=name;
    }
    Person(std::string name){
        this->name=name;
    }
     Person(int age){
        this->age=age;
    }
    Person() = default;
    virtual void print_info()=0;
    virtual ~Person()=default;
};
class CAO : public Person{
public:
    void print_info() override{
        std::cout<<"no good bird!"<<std::endl;
    }
};
class ZHU : public Person{
public:
    void print_info() override{
        std::cout<<"Good Person!"<<std::endl;
    }
};
int main(){
    std::shared_ptr<std::string> ptr_input = std::make_shared<std::string>();
    std::shared_ptr<Person> per_ptr;
    std::cout << "请输入name" << std::endl;
    std::cin >> *ptr_input;
    if (*ptr_input == "CSH"){
        per_ptr = std::make_shared<CAO>();
        per_ptr->print_info();
    }
    if (*ptr_input == "ZLM"){
        per_ptr = std::make_shared<ZHU>();
        per_ptr->print_info();
    }
}