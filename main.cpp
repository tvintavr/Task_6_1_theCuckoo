#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "Который час (0-23)?\n";

    int hour;
    std::cin>>hour;

    bool rightTime=((hour > -1) && (hour < 24));

    while (hour>0 && rightTime) {
        std::cout<<"Ку-ку!\n";
        --hour;
    }

    if (!rightTime) {
        std::cout<<"Время некорректное";
    }
}
