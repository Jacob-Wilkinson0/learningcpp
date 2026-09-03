#include <iostream>
#include <string>

int main() {
    std::string first_name;
    std::string friend_name;
    int age = 0;

    std::cout << "Enter the name of the person you want to write to\n";
    std::cin >> first_name;

    std::cout << "Enter the age of the recipient\n";
    std::cin >> age;

    if (age <= 0 || age >= 110) {
        std::cout << "Your Kidding";
        return 1;
    }

    std::cout << "Enter the name of another friend\n";
    std::cin >> friend_name;

    std::cout << "Dear " << first_name << ",\n"
                  << "    How are you? I am fine. I miss you. Have you seen " << friend_name << " lately?\n"
                  << "I hear you just had a birthday and you are " << age << " years old.\n";

    if (age < 12) {
        std::cout << "Next year you will be " << age + 1 << ".\n";
    }
    else if (age == 17) {
        std::cout << "Next year you will be able to vote.\n";
    }
    else if (age > 70) {
        std::cout << "Are you retired?\n";
    }

    std::cout << "Yours sincerely,\n\n";
    std::cout << "Jacob";
}


