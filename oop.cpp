#include <iostream>
#include <string>

using namespace std;

class person {
protected:
    string name;
    int age;

public:
    string GetName() {
        return name;
    }

    int GetAge() {
        return age;
    }
};

class student : private person {
private:
    double Avg;

public:
    double GetAvg() {
        return Avg;
    }

    string GetStudentName() {
        return name;
    }
};

class teacher : public person {
private:
    double salary;

public:
    double GetSalary() {
        return salary;
    }
};

int main() {
    person p;
    student s;
    teacher t;

    // بررسی دسترسی به اعضای کلاس‌ها
    // p.GetName();   // ✔
    // p.GetAge();    // ✔
    // p.name;        // ✘ خطا: name یک عضو protected است
    // p.age;         // ✘ خطا: age یک عضو protected است

    // s.GetName();   // ✘ خطا: به دلیل private ارث‌بری
    // s.GetAge();    // ✘ خطا: به دلیل private ارث‌بری
    // s.name;        // ✘ خطا: private ارث‌بری
    // s.age;         // ✘ خطا: private ارث‌بری
    // s.GetAvg();    // ✔
    // s.GetStudentName(); // ✔

    // t.GetName();   // ✔
    // t.GetAge();    // ✔
    // t.GetSalary(); // ✔
    // t.salary;      // ✘ خطا: salary یک عضو private است

    return 0;
}