#pragma once
#include<iostream>
#include <cstring>
#include <cctype>

using namespace std;

struct MyString
{
	//поля структуры 
	char* str = nullptr;//  динамическая сторока
	// методы структуры
	int length()
	{
		if (str == nullptr)
			return 0;
		else
		{
			int j = 0;
			while (str[j] != '\0') { j++; }
			return j;
		}
	}
	void setMyString(const char* s) {// установить динамич строку
		if (str != nullptr) delete[]str;// освобождение старой памяти
		str = new char[strlen(s) + 1];
		for (int i = 0; i <= strlen(s); i++)
		{
			str[i] = s[i];// посимвольное копирование строки 
		}
		// str = s !!!!!  присвоение адреса
	}
	void toFirstUpper() {
		if (str != NULL) {
			str[0] = toupper(str[0]);
		}
	}
	void toAllLower() {
		if (str != NULL) {
			for (int i = 0; i < strlen(str); i++)
			{
				str[i] = tolower(str[i]);
			}
		}
	}
	void oneSpace() {
		for (int i = 0; i < strlen(str); i++)
		{
			if (str[i] == ' ' && str[i + 1] == ' ') {
				for (int j = i; j < strlen(str); j++)
				{
					str[j] = str[j + 1];
				}
				i--;
			}
			if (str[0] == ' ') {
				for (int j = 0; j < strlen(str); j++)
				{
					str[j] = str[j + 1];
				}
				i--;
			}
		}
		char* tmp = new char[strlen(str) + 1];
		for (int i = 0; i <= strlen(str); i++)
		{
			tmp[i] = str[i];
		}
		setMyString(tmp);
	}
	void spaceInToLine() {
		for (int i = 0; i < strlen(str); i++)
		{
			if (str[i] == ' ') {
				str[i] = '_';
			}
		}
	}
	int words() {
		if (str == nullptr) { return 0; }

		else {
			int count = 0;
			for (int i = 0; i < strlen(str); i++)
			{
				if (str[i] != ' ' & str[i + 1] != ' ') {
					count++;
				}
			}
			if (str[0] != ' ') { count++; }
			return count;
		}

	}
	void  append(const char* s) {
		char* tmp = new char[strlen(s) + strlen(str) + 1];
		int j = 0;
		for (int i = 0; i < strlen(str); i++)
		{
			tmp[i] = str[i];
			j++;
		}
		for (int i = 0; i < strlen(s); i++)
		{
			tmp[j] = s[i];
			j++;
		}
		tmp[j] = '\0';
		setMyString(tmp);
	}
	int  typeOfStr() {
		if (str == NULL) return -1;
		else {
			int point = 0;
			int count = 0;
			for (int i = 0; i < strlen(str); i++)
			{
				if (isdigit(str[i]))
					count++;

				if (str[i] == '.') { point++; }
			}

			if (count == strlen(str)) {
				return 1;
			}
			else if (point == 1 && count == strlen(str) - 1) {
				return 2;
			}
			else return 0;
		}
	}
	





};