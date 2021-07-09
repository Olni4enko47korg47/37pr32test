#pragma once

#include<iostream>
#include <cstring>
#include <cctype>
#include <ctime>

using namespace std;

struct Date {
	int day = 0;
	int month = 0;
	int year = 0;

	void fillDate() {
		cout << " input day " << endl;
		cin >> day;
		cout << " input month " << endl;
		cin >> month;
		cout << " input year " << endl;
		cin >> year;
	}
	void printDate() {
	cout << year << " " << month / 10 << month % 10 << " " << day / 10 << day % 10 << endl;
	}
	void setNowDate() {
		time_t now = time(NULL);
		tm* tim = new tm;
		localtime_s(tim, &now);
		day = tim->tm_mday;
		month = tim->tm_mon + 1;
		year = tim->tm_year + 1900;
	}
	char* toString() {
		char* str = new char[11];
		sprintf_s(str, 11, "%d.%d%d.%d%d", year, month / 10, month % 10, day / 10, day % 10);
		return str;
	}




};
