// Work-Cpp.cpp: Здесь я буду делать домашнюю работу по книге Лафре С++ .
//

#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "ctype.h"
#include "conio.h"
#include "cmath"
#include <algorithm>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <sstream>


using namespace std;

#pragma region Функции для заданий

	#pragma region Глава 8

		#pragma region Задание 1
			/*class Distance {
				private:
					int feet;
					float inches;
				public:
					Distance() : feet(0),inches(0.0){ }
					Distance(int ft, float in) : feet(ft),inches(in){ }

					void getdist(){
						cout << "\nВведите футы: "; cin >> feet;
						cout << "Введите дюймы: "; cin >> inches;
					}

					void showdist(){
						cout << feet << "\'-" << inches << '\"';
					}

					Distance operator+ (Distance d2) const{
						int f = feet + d2.feet;
						float i = inches + d2.inches;
						if (i >= 12.0)
						{
							i -= 12.0;
							f++;
						}
						return Distance (f, i );
					}
					
					Distance operator- (Distance d2) const{
						int f = feet - d2.feet;
						float i = inches - d2.inches;
						if (f>0){
							if (i<0){
								i += 12.0;
								f--;
							}
						}
						else{
							cout << "Ошибка в расчетах";
							system("pause");
							exit(1);
						}
						return Distance (f, i );
					}
			};*/
		#pragma endregion

		#pragma region Задание 2 проблемма с заданием
			/*class String{
				private:
					enum { SZ = 80 };
					char str[SZ];
				public:
					String(){
						strcpy_s(str, "");
					}
					String(char s[]){
						strcpy_s(str, s);
					}
					void display() const{
						cout << str;
					}
					String operator+ (String ss) const{
						String temp;
						if (strlen (str) + strlen(ss.str) < SZ ){
							strcpy_s(temp.str, str);
							strcat(temp.str, ss.str);
						}
						else{
							cout << "\nПереполнение!";
							exit(1);
						}
						return temp;
					}
			};*/

		#pragma endregion

		#pragma region Задание 3
			/*class Time {
				private:
					int hours;
					int minute;
					int seconds;

				public:
					Time() {
						hours = 0;
						minute = 0;
						seconds = 0;
					}

					Time(int h, int m, int s) {
						hours = h;
						minute = m;
						seconds = s;
					}

					void display()const {
						cout << hours << ":" << minute << ":" << seconds<<endl;
					}

					Time operator+(Time t1) {
						Time t2;
						t2.seconds = seconds + t1.seconds;
						if (t2.seconds>=60){
							t2.seconds -= 60;
							t2.minute++;
						}
						t2.minute += minute + t1.minute;
						if (t2.minute>=60)
						{
							t2.minute -= 60;
							t2.hours++;
						}
						t2.hours += hours + t1.hours;
						return (t2);
					}
			};*/
		#pragma endregion

		#pragma region Задание 4

		#pragma endregion

		#pragma region Задание 5

		#pragma endregion

		#pragma region Задание 6

		#pragma endregion

		#pragma region Задание 7

		#pragma endregion

		#pragma region Задание 8

		#pragma endregion

		#pragma region Задание 9

		#pragma endregion

		#pragma region Задание 10

		#pragma endregion

		#pragma region Задание 11

		#pragma endregion

		#pragma region Задание 12

		#pragma endregion
	#pragma endregion

/*
	#pragma region Глава 9
		#pragma region Вопросы

		#pragma endregion

		#pragma region Задание 1

		#pragma endregion

		#pragma region Задание 2

		#pragma endregion

		#pragma region Задание 2

		#pragma endregion

		#pragma region Задание 3

		#pragma endregion

		#pragma region Задание 4

		#pragma endregion

		#pragma region Задание 5

		#pragma endregion

		#pragma region Задание 6

		#pragma endregion

		#pragma region Задание 7

		#pragma endregion

		#pragma region Задание 8

		#pragma endregion

		#pragma region Задание 9

		#pragma endregion

		#pragma region Задание 10

		#pragma endregion

		#pragma region Задание 11

		#pragma endregion

		#pragma region Задание 12

		#pragma endregion
	#pragma endregion

	#pragma region Глава 10
		#pragma region Вопросы

		#pragma endregion

		#pragma region Задание 1

		#pragma endregion

		#pragma region Задание 2

		#pragma endregion

		#pragma region Задание 2

		#pragma endregion

		#pragma region Задание 3

		#pragma endregion

		#pragma region Задание 4

		#pragma endregion

		#pragma region Задание 5

		#pragma endregion

		#pragma region Задание 6

		#pragma endregion

		#pragma region Задание 7

		#pragma endregion

		#pragma region Задание 8

		#pragma endregion

		#pragma region Задание 9

		#pragma endregion

		#pragma region Задание 10

		#pragma endregion

		#pragma region Задание 11

		#pragma endregion

		#pragma region Задание 12

		#pragma endregion
	#pragma endregion

	#pragma region Глава 11
		#pragma region Вопросы

		#pragma endregion

		#pragma region Задание 1

		#pragma endregion

		#pragma region Задание 2

		#pragma endregion

		#pragma region Задание 2

		#pragma endregion

		#pragma region Задание 3

		#pragma endregion

		#pragma region Задание 4

		#pragma endregion

		#pragma region Задание 5

		#pragma endregion

		#pragma region Задание 6

		#pragma endregion

		#pragma region Задание 7

		#pragma endregion

		#pragma region Задание 8

		#pragma endregion

		#pragma region Задание 9

		#pragma endregion

		#pragma region Задание 10

		#pragma endregion

		#pragma region Задание 11

		#pragma endregion

		#pragma region Задание 12

		#pragma endregion
	#pragma endregion

	#pragma region Глава 12
		#pragma region Вопросы

		#pragma endregion

		#pragma region Задание 1

		#pragma endregion

		#pragma region Задание 2

		#pragma endregion

		#pragma region Задание 2

		#pragma endregion

		#pragma region Задание 3

		#pragma endregion

		#pragma region Задание 4

		#pragma endregion

		#pragma region Задание 5

		#pragma endregion

		#pragma region Задание 6

		#pragma endregion

		#pragma region Задание 7

		#pragma endregion

		#pragma region Задание 8

		#pragma endregion

		#pragma region Задание 9

		#pragma endregion

		#pragma region Задание 10

		#pragma endregion

		#pragma region Задание 11

		#pragma endregion

		#pragma region Задание 12

		#pragma endregion
	#pragma endregion

	#pragma region Глава 13
		#pragma region Вопросы

		#pragma endregion

		#pragma region Задание 1

		#pragma endregion

		#pragma region Задание 2

		#pragma endregion

		#pragma region Задание 2

		#pragma endregion

		#pragma region Задание 3

		#pragma endregion

		#pragma region Задание 4

		#pragma endregion

		#pragma region Задание 5

		#pragma endregion

		#pragma region Задание 6

		#pragma endregion

		#pragma region Задание 7

		#pragma endregion

		#pragma region Задание 8

		#pragma endregion

		#pragma region Задание 9

		#pragma endregion

		#pragma region Задание 10

		#pragma endregion

		#pragma region Задание 11

		#pragma endregion

		#pragma region Задание 12

		#pragma endregion
	#pragma endregion

	#pragma region Глава 14
		#pragma region Вопросы

		#pragma endregion

		#pragma region Задание 1

		#pragma endregion

		#pragma region Задание 2

		#pragma endregion

		#pragma region Задание 2

		#pragma endregion

		#pragma region Задание 3

		#pragma endregion

		#pragma region Задание 4

		#pragma endregion

		#pragma region Задание 5

		#pragma endregion

		#pragma region Задание 6

		#pragma endregion

		#pragma region Задание 7

		#pragma endregion

		#pragma region Задание 8

		#pragma endregion

		#pragma region Задание 9

		#pragma endregion

		#pragma region Задание 10

		#pragma endregion

		#pragma region Задание 11

		#pragma endregion

		#pragma region Задание 12

		#pragma endregion
	#pragma endregion

	#pragma region Глава 15
		#pragma region Вопросы

		#pragma endregion

		#pragma region Задание 1

		#pragma endregion

		#pragma region Задание 2

		#pragma endregion

		#pragma region Задание 2

		#pragma endregion

		#pragma region Задание 3

		#pragma endregion

		#pragma region Задание 4

		#pragma endregion

		#pragma region Задание 5

		#pragma endregion

		#pragma region Задание 6

		#pragma endregion

		#pragma region Задание 7

		#pragma endregion

		#pragma region Задание 8

		#pragma endregion

		#pragma region Задание 9

		#pragma endregion

		#pragma region Задание 10

		#pragma endregion

		#pragma region Задание 11

		#pragma endregion

		#pragma region Задание 12

		#pragma endregion
	#pragma endregion

	#pragma region Глава 16
		#pragma region Вопросы

		#pragma endregion

		#pragma region Задание 1

		#pragma endregion

		#pragma region Задание 2

		#pragma endregion

		#pragma region Задание 2

		#pragma endregion

		#pragma region Задание 3

		#pragma endregion

		#pragma region Задание 4

		#pragma endregion

		#pragma region Задание 5

		#pragma endregion

		#pragma region Задание 6

		#pragma endregion

		#pragma region Задание 7

		#pragma endregion

		#pragma region Задание 8

		#pragma endregion

		#pragma region Задание 9

		#pragma endregion

		#pragma region Задание 10

		#pragma endregion

		#pragma region Задание 11

		#pragma endregion

		#pragma region Задание 12

		#pragma endregion
	#pragma endregion
*/
#pragma endregion

int main()
{
	setlocale(LC_ALL, "Russian");

	#pragma region Глава 8

		#pragma region Задание 1
			/*Distance distl, dist2, dist3, dist4;
			distl.getdist();
			dist2.getdist();
			dist3 = distl + dist2;
			dist4 = dist3 - (distl + dist2);

			cout << "distl = "; distl.showdist(); cout << endl;
			cout << "dist2 = "; dist2.showdist(); cout << endl;
			cout << "dist3 = "; dist3.showdist(); cout << endl;
			cout << "dist4 = "; dist4.showdist(); cout << endl;*/
		#pragma endregion
		
		#pragma region Задание 2
			/*String s1 = "\nC Рождеством! "; 
			String s2 = "С Новым годом!";
			String s3;
			s1.display();
			s2.display();
			s3.display();
			s3 = s1 + s2; 
			s3.display();
			cout << endl;*/
		#pragma endregion
		
		#pragma region Задание 3
			/*Time time1(1,10,30);
			Time time2(15, 40, 41);
				
			time1.display();
			time2.display();

			Time t3;
			t3= time1+time2;
			t3.display();*/
		#pragma endregion
		
		#pragma region Задание 4
			
		#pragma endregion
		
		#pragma region Задание 5

		#pragma endregion
		
		#pragma region Задание 6

		#pragma endregion
		
		#pragma region Задание 7

		#pragma endregion
		
		#pragma region Задание 8

		#pragma endregion
		
		#pragma region Задание 9

		#pragma endregion
		
		#pragma region Задание 10

		#pragma endregion
		
		#pragma region Задание 11

		#pragma endregion
		
		#pragma region Задание 12

		#pragma endregion
	#pragma endregion

/*
	#pragma region Глава 9
		#pragma region Вопросы

		#pragma endregion
		
		#pragma region Задание 1

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 3

		#pragma endregion
		
		#pragma region Задание 4

		#pragma endregion
		
		#pragma region Задание 5

		#pragma endregion
		
		#pragma region Задание 6

		#pragma endregion
		
		#pragma region Задание 7

		#pragma endregion
		
		#pragma region Задание 8

		#pragma endregion
		
		#pragma region Задание 9

		#pragma endregion
		
		#pragma region Задание 10

		#pragma endregion
		
		#pragma region Задание 11

		#pragma endregion
		
		#pragma region Задание 12

		#pragma endregion
	#pragma endregion

	#pragma region Глава 10
		#pragma region Вопросы

		#pragma endregion
		
		#pragma region Задание 1

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 3

		#pragma endregion
		
		#pragma region Задание 4

		#pragma endregion
		
		#pragma region Задание 5

		#pragma endregion
		
		#pragma region Задание 6

		#pragma endregion
		
		#pragma region Задание 7

		#pragma endregion
		
		#pragma region Задание 8

		#pragma endregion
		
		#pragma region Задание 9

		#pragma endregion
		
		#pragma region Задание 10

		#pragma endregion
		
		#pragma region Задание 11

		#pragma endregion
		
		#pragma region Задание 12

		#pragma endregion
	#pragma endregion

	#pragma region Глава 11
		#pragma region Вопросы

		#pragma endregion
		
		#pragma region Задание 1

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 3

		#pragma endregion
		
		#pragma region Задание 4

		#pragma endregion
		
		#pragma region Задание 5

		#pragma endregion
		
		#pragma region Задание 6

		#pragma endregion
		
		#pragma region Задание 7

		#pragma endregion
		
		#pragma region Задание 8

		#pragma endregion
		
		#pragma region Задание 9

		#pragma endregion
		
		#pragma region Задание 10

		#pragma endregion
		
		#pragma region Задание 11

		#pragma endregion
		
		#pragma region Задание 12

		#pragma endregion
	#pragma endregion

	#pragma region Глава 12
		#pragma region Вопросы

		#pragma endregion
		
		#pragma region Задание 1

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 3

		#pragma endregion
		
		#pragma region Задание 4

		#pragma endregion
		
		#pragma region Задание 5

		#pragma endregion
		
		#pragma region Задание 6

		#pragma endregion
		
		#pragma region Задание 7

		#pragma endregion
		
		#pragma region Задание 8

		#pragma endregion
		
		#pragma region Задание 9

		#pragma endregion
		
		#pragma region Задание 10

		#pragma endregion
		
		#pragma region Задание 11

		#pragma endregion
		
		#pragma region Задание 12

		#pragma endregion
	#pragma endregion

	#pragma region Глава 13
		#pragma region Вопросы

		#pragma endregion
		
		#pragma region Задание 1

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 3

		#pragma endregion
		
		#pragma region Задание 4

		#pragma endregion
		
		#pragma region Задание 5

		#pragma endregion
		
		#pragma region Задание 6

		#pragma endregion
		
		#pragma region Задание 7

		#pragma endregion
		
		#pragma region Задание 8

		#pragma endregion
		
		#pragma region Задание 9

		#pragma endregion
		
		#pragma region Задание 10

		#pragma endregion
		
		#pragma region Задание 11

		#pragma endregion
		
		#pragma region Задание 12

		#pragma endregion
	#pragma endregion

	#pragma region Глава 14
		#pragma region Вопросы

		#pragma endregion
		
		#pragma region Задание 1

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 3

		#pragma endregion
		
		#pragma region Задание 4

		#pragma endregion
		
		#pragma region Задание 5

		#pragma endregion
		
		#pragma region Задание 6

		#pragma endregion
		
		#pragma region Задание 7

		#pragma endregion
		
		#pragma region Задание 8

		#pragma endregion
		
		#pragma region Задание 9

		#pragma endregion
		
		#pragma region Задание 10

		#pragma endregion
		
		#pragma region Задание 11

		#pragma endregion
		
		#pragma region Задание 12

		#pragma endregion
	#pragma endregion

	#pragma region Глава 15
		#pragma region Вопросы

		#pragma endregion
		
		#pragma region Задание 1

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 3

		#pragma endregion
		
		#pragma region Задание 4

		#pragma endregion
		
		#pragma region Задание 5

		#pragma endregion
		
		#pragma region Задание 6

		#pragma endregion
		
		#pragma region Задание 7

		#pragma endregion
		
		#pragma region Задание 8

		#pragma endregion
		
		#pragma region Задание 9

		#pragma endregion
		
		#pragma region Задание 10

		#pragma endregion
		
		#pragma region Задание 11

		#pragma endregion
		
		#pragma region Задание 12

		#pragma endregion
	#pragma endregion

	#pragma region Глава 16
		#pragma region Вопросы

		#pragma endregion
		
		#pragma region Задание 1

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 2

		#pragma endregion
		
		#pragma region Задание 3

		#pragma endregion
		
		#pragma region Задание 4

		#pragma endregion
		
		#pragma region Задание 5

		#pragma endregion
		
		#pragma region Задание 6

		#pragma endregion
		
		#pragma region Задание 7

		#pragma endregion
		
		#pragma region Задание 8

		#pragma endregion
		
		#pragma region Задание 9

		#pragma endregion
		
		#pragma region Задание 10

		#pragma endregion
		
		#pragma region Задание 11

		#pragma endregion
		
		#pragma region Задание 12

		#pragma endregion
	#pragma endregion
*/

	system("pause");
	return 0;
}