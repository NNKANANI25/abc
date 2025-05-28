#include <iostream>

class Car {
private:
    std::string model;
    std::string color;
    int year;
    double price;

public:
    
    Car(std::string model, std::string color, int year, double price) {
        this->model = model;
        this->color = color;
        this->year = year;
        this->price = price;
    }

    
    void displayDetails() {
        std::cout << "Model: " << model << std::endl;
        std::cout << "Color: " << color << std::endl;
        std::cout << "Year: " << year << std::endl;
        std::cout << "Price: $" << price << std::endl;
        std::cout << std::endl;
    }
};

int main() {
    Car car1("Toyota Camry", "Silver", 2023, 25000.00);
    Car car2("Honda Civic", "Blue", 2022, 23000.00);
    Car car3("Ford Mustang", "Red", 2024, 40000.00);
    Car car4("BMW X5", "Black", 2023, 60000.00);

    
    std::cout << "Car 1 Details:" << std::endl;
    car1.displayDetails();

    std::cout << "Car 2 Details:" << std::endl;
    car2.displayDetails();

    std::cout << "Car 3 Details:" << std::endl;
    car3.displayDetails();

    std::cout << "Car 4 Details:" << std::endl;
    car4.displayDetails();

    return 0;
}
/*OUTPUT
Car 1 Details:
Model: Toyota Camry
Color: Silver
Year: 2023
Price: $25000

Car 2 Details:
Model: Honda Civic
Color: Blue
Year: 2022
Price: $23000

Car 3 Details:
Model: Ford Mustang
Color: Red
Year: 2024
Price: $40000

Car 4 Details:
Model: BMW X5
Color: Black
Year: 2023
Price: $60000
*/