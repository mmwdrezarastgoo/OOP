#include <iostream>  // برای ورودی و خروجی
#include <string>    // برای استفاده از std::string

class Person {
private:
    std::string Name;
    int age;

public:
    // سازنده پیش‌فرض
    Person() {
        Name = "Unknown";
        age = 0;
    }

    // تابع تنظیم نام
    void SetName(std::string newName) {
        Name = newName;
    }

    // تابع دریافت نام
    std::string GetName() {
        return Name;
    }
};

int main() {
    Person P;
    
    // تنظیم نام شخص
    P.SetName("John Doe");

    // دریافت نام شخص
    std::string n = P.GetName();

    std::cout << "Person's name: " << n << std::endl;

    return 0;
}