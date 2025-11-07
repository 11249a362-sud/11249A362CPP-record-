#include <iostream>
#include <string>   

class Student {
public:
    std::string name;
    int rollnumber;

    void displayInfo() {
        std::cout << "Name: " << name << ", Roll No: " << rollnumber << std::endl;
    }
};

int main() {
    Student students[3];   

    students[0].name = "Alice";
    students[0].rollnumber = 101;

    students[1].name = "Bob";
    students[1].rollnumber = 102;

    students[2].name = "Charlie";   
    students[2].rollnumber = 103;

    for (int i = 0; i < 3; ++i) {
        students[i].displayInfo();
    }

    return 0;
}
