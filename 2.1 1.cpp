#include <iostream>


class Employee {
public:
    std::string name;
    int employeeId;
    std::string department;
    float salary;

    void displayDetails() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Employee ID: " << employeeId << std::endl;
        std::cout << "Department: " << department << std::endl;
        std::cout << "Salary: $" << std::fixed << salary << std::endl;
        std::cout << std::endl;
    }
};

int main() {
    Employee employees[5];

    employees[0] = {"John Doe", 101, "Sales", 60000.00};
    employees[1] = {"Jane Smith", 102, "Marketing", 65000.00};
    employees[2] = {"Peter Jones", 103, "IT", 70000.00};
    employees[3] = {"Mary Brown", 104, "HR", 55000.00};
    employees[4] = {"David Wilson", 105, "Finance", 75000.00};
    
    std::cout << "Employee Records:" << std::endl << std::endl;
    for (int i = 0; i < 5; ++i) {
        employees[i].displayDetails();
    }

    return 0;
}
/*OUTPUT
Employee Records:

Name: John Doe
Employee ID: 101
Department: Sales
Salary: $60000.000000

Name: Jane Smith
Employee ID: 102
Department: Marketing
Salary: $65000.000000

Name: Peter Jones
Employee ID: 103
Department: IT
Salary: $70000.000000

Name: Mary Brown
Employee ID: 104
Department: HR
Salary: $55000.000000

Name: David Wilson
Employee ID: 105
Department: Finance
Salary: $75000.000000
*/
/*OUTPUT
Employee Records:

Name: John Doe
Employee ID: 101
Department: Sales
Salary: $60000.00

Name: Jane Smith
Employee ID: 102
Department: Marketing
Salary: $65000.00

Name: Peter Jones
Employee ID: 103
Department: IT
Salary: $70000.00

Name: Mary Brown
Employee ID: 104
Department: HR
Salary: $55000.00

Name: David Wilson
Employee ID: 105
Department: Finance
Salary: $75000.00
*/