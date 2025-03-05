#include <iostream>  // برای ورودی و خروجی

class BENZ {
public:
    bool Start() {
        bool result = StartEngine() && StartLightSystem();
        return result;
    }

private:
    bool StartEngine() {
        std::cout << "Engine started!" << std::endl;
        return true;  // فرض می‌کنیم که موتور با موفقیت روشن شده است
    }

    bool StartLightSystem() {
        std::cout << "Light system started!" << std::endl;
        return true;  // فرض می‌کنیم که سیستم روشنایی با موفقیت کار می‌کند
    }
};

int main() {
    BENZ b;
    bool result = b.Start();

    if (result) {
        std::cout << "Car started successfully!" << std::endl;
    } else {
        std::cout << "Failed to start the car!" << std::endl;
    }

    return 0;
}