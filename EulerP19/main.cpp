#include<iostream>
#include<map>

using namespace std;

class Date {
public:
    int year;
    int date;
    int month;
    Date(int d, int m, int y);
    void day_pp();
    void month_pp();
    void year_pp() {++year;}
    map <int, int> month_days;
    void print();


};


Date::Date(int d, int m, int y) {

    date = d;
    month = m;
    year = y;

    month_days[1] = 31;
    month_days[3] = 31;
    month_days[4] = 30;
    month_days[5] = 31;
    month_days[6] = 30;
    month_days[7] = 31;
    month_days[8] = 31;
    month_days[9] = 30;
    month_days[10] = 31;
    month_days[11] = 30;
    month_days[12] = 31;

}

void Date::day_pp() {

    if(month != 2) {

        if(date == month_days[month]) { date = 1; month_pp(); return;}

        ++date;

        return;

    }

    if(date == 28) {

        if(year % 4 != 0 || (year % 100 == 0 && year % 400 != 0) ) { month_pp(); date = 1; return;}
        else { ++date; return; }

    }

    if(date == 29) { month_pp(); date = 1; return; }

    date++;

}


void Date::month_pp() {

    if(month != 12)
        ++month;
    else{ month = 1; year_pp(); }

}

void increase_day(int & i) {

    if(i == 7) { i = 1; return; }
    ++i;
    return;

}

void Date::print() {

    cout << date << "/" << month << "/" << year << endl;

}

int main() {

    Date date(1, 1, 1901);

    int i = 1;

    int sum = 0;

    while(date.year != 2000) {

        if(i == 7 && date.date == 1) ++sum;
        increase_day(i);
        date.day_pp();
        cout << i << '\t';
        date.print();


    }

    cout << sum << endl;

    return 0;

}
