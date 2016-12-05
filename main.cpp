#include <iostream>

using namespace std;

struct courent{
    const int year = 2016;
    const int month = 12;
    const int day = 5;
};

struct birth{
    int year;
    int month;
    int day;
};

struct age{
    int year;
    int month;
    int day;
};

int main()
{
    courent courent;
    birth birth;
    age age;

    cout << "Enter your year, month and day of birth" << endl;
    cin >> birth.year >> birth.month >> birth.day;

    if(courent.year < birth.year){
        if(courent.month < birth.month){
            if(courent.day < birth.day){
                cout << "Incorrect data" << endl;
                return 0;
            }
            cout << "Incorrect data" << endl;
            return 0;
        }

        cout << "Incorrect data" << endl;
        return 0;
    }

    age.year = courent.year - birth.year;
    age.month = courent.month - birth.month;
    age.day = courent.day - birth.day;

    if(age.year == 0 && age.month == 0 && age.day == 0){
        cout << "Congratulations on your birth!!!" << endl;
        return 0;
    }

    if(age.month == 0 && age.day == 0){
        cout << "Happy birthday, my " << age.year << " year old friend!!!" <<endl;
        return 0;
    }

    if(age.day < 0){
        if(age.month == 1 || age.month == 3 || age.month == 5 || age.month == 7
                            || age.month == 8 || age.month == 10 || age.month == 12){
            age.day = 31 + age.day;
            age.month--;
        }
        else if(age.month == 2 && courent.year % 2 == 0){
            age.day = 29 + age.day;
            age.month--;
        }
        else if (age.month == 2 && courent.year % 2 == 1) {
            age.day = 21 + age.day;
            age.month--;
        }
        else {
            age.day = 30 + age.day;
            age.month--;
        }

    }

    if(age.month < 0){
        age.month = 12 + age.month;
        age.year--;
    }

    cout << age.year << " " << age.month << " " << age.day << endl;

    return 0;
}
