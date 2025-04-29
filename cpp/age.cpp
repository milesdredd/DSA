#include <iostream>
#include <ctime>

int main() {
    // Get current time
    time_t now = time(0);
    tm* ltm = localtime(&now);
    
    // Get birth date from user
    int birthYear, birthMonth, birthDay;
    std::cout << "Enter your birth year: ";
    std::cin >> birthYear;
    std::cout << "Enter your birth month (1-12): ";
    std::cin >> birthMonth;
    std::cout << "Enter your birth day: ";
    std::cin >> birthDay;

    // Calculate age
    int age = ltm->tm_year + 1900 - birthYear;
    
    // Adjust age if birthday hasn't occurred this year
    if (ltm->tm_mon + 1 < birthMonth || 
        (ltm->tm_mon + 1 == birthMonth && ltm->tm_mday < birthDay)) {
        age--;
    }

    // Calculate exact age with months and days
    int months = ltm->tm_mon + 1 - birthMonth;
    if (months < 0) {
        months += 12;
    }
    
    int days = ltm->tm_mday - birthDay;
    if (days < 0) {
        months--;
        days += 30; // Approximating month length
    }

    // Output results
    std::cout << "\nYour exact age is:\n";
    std::cout << age << " years, " << months << " months, and " << days << " days\n";
    
    return 0;
}
