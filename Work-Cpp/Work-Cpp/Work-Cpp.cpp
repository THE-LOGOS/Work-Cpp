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

using namespace std;

#pragma region Функции для заданий
	#pragma region Глава 5
		#pragma region Вопросы
			/*void foo() {
				cout << "foo" << endl;
			}*/

			/*int times(int a){
				return (a * 2);
			}*/
	
			/*inline float footbar(float a){
				return a+a;
			}*/


			/*char byth(int a, float b) {

				return b;
			}*/
		#pragma endregion	
		
		#pragma region Задание 1
			/*float circArea (float radius){
				const float PI = 3.14159f;
				float area = PI * (radius*radius);
				return area;
			}*/
		#pragma endregion

		#pragma region Задание 2
			/*double power (double n, int p){
				double sum = 1;
				for (int i = 1; i <= p; i++)
				{
					sum *= n;
				}
				return sum;
			}*/
		#pragma endregion

		#pragma region Задание 3
			/*void zeroSmaller(int& a, int& b) {
				if (a != b) {
					if (a > b) { b = 0; }
					else { a = 0; }
				}
				else
				{ cout << "Ты ошибся!" << endl; }
			}*/
		#pragma endregion

		#pragma region Задание 4
			/*struct Distance{
				int a;
				float b;
			};

			Distance func(Distance d1, Distance d2) {
				if ((d1.a == d2.a) && (d1.b == d2.b)) {
					cout << "Они равны";
					d1.a = 0;
					d1.b = 0;
					return d1;
				}
				else if (d1.a > d2.a)
				{
					return d1;
				}
				else if (d1.a < d2.a)
				{
					return d2;
				}
				else if (d1.b > d2.b) {
					return d1;
				}
				else if (d1.b < d2.b) {
					return d2;
				}
			}

			void endDisp(Distance disp) {
				cout <<"Наибольшее из аргументов равно = " << disp.a << " " << disp.b;
			}*/
		#pragma endregion

		#pragma region Задание 5
			/*long hms_to_secs(int hours, int minute, int sec){
				long second = (hours * 3600) + (minute * 60) + sec;
				return second;
			}*/
		#pragma endregion

		#pragma region Задание 6
			/*struct Time {
				int hours;
				int minutes;
				int seconds;
			};

			long time_to_sec(Time t) {
				long sec = (t.hours * 3600) + (t.minutes * 60) + t.seconds;
				return sec;
			}

			Time secs_to_time(long sec) {
				Time ti1;
				ti1.hours = sec / 3600 ^ 0;
				ti1.minutes = (sec - ti1.hours * 3600) / 60 ^ 0;
				ti1.seconds = sec - ti1.hours * 3600 - ti1.minutes * 60;
				return ti1;
			}

			void endDipl(Time time) {
				cout << "Часы = " << time.hours << " " << "Минуты = " << time.minutes << " " << "Секунды = " << time.seconds << endl;
			}*/	
		#pragma endregion

		#pragma region Задание 7
			/*double power (double n, int p){
				double sum = 1;
				for (int i = 1; i <= p; i++)
				{
					sum *= n;
				}
				return sum;
			}
			
			double power (long n, char p){
				double sum = 1;
				for (int i = 1; i <= p; i++)
				{
					sum *= n;
				}
				return sum;
			}
			
			double power (float n, int p){
				double sum = 1;
				for (int i = 1; i <= p; i++)
				{
					sum *= n;
				}
				return sum;
			}*/
			
		#pragma endregion

		#pragma region Задание 8
			/*void swop(int& a, int& b){
				const int z = 12;
				const int x = 22;
				a += z;
				b += x;
				cout << "Значения в функции swop = " << "a =" << a << " " << "b = " << b << endl;
				cout << "Значения констант в функции swop = " << "z =" << z << " " << "x = " << x << endl;
			}*/
		#pragma endregion

		#pragma region Задание 9
			/*struct Time{
				int hours;
				int minutes;
				int seconds;
			};

			void swap (Time& t1, Time& t2) {
				const int h = 1;
				const int m = 2;
				const int s = 3;
				t1.hours += h;
				t1.minutes += m;
				t1.seconds += s;
				
				t2.hours += h;
				t2.minutes += m;
				t2.seconds += s;
			}	 */			
		#pragma endregion

		#pragma region Задание 10
			/*void funk (){
				static int i = 0;
				++i;
				cout << "Эта функция использовалсь " << i << " раз" << endl;
			}*/
		#pragma endregion

		#pragma region Задание 11
			
		#pragma endregion

		#pragma region Задание 12
			//struct fraction{
			//	float slog;
			//	float suslog_2;
			//	float result;
			//};

			//fraction fadd (fraction num_1 , fraction num_2) {
			//	fraction f1;
			//	cout << num_1.slog << "/" << num_1.suslog_2 << "+" << num_2.slog << "/" << num_2.suslog_2 << " ";
			//	f1.result = (num_1.slog*num_2.suslog_2 + num_1.suslog_2 * num_2.slog) / (num_1.suslog_2*num_2.suslog_2);
			//	//cout << " Равно: " << f1.result << endl;

			//	return f1;
			//}

			//fraction fsub (fraction num_1, fraction num_2) {
			//	fraction f2;
			//	cout << num_1.slog << "/" << num_1.suslog_2 << "-" << num_2.slog << "/" << num_2.suslog_2 << " ";
			//	f2.result = (num_1.slog*num_2.suslog_2 - num_1.suslog_2 * num_2.slog) / (num_1.suslog_2*num_2.suslog_2);
			//	//cout << " Равно: " << f2.result << endl;

			//	return f2;
			//}

			//fraction fmul(fraction num_1, fraction num_2) {
			//	fraction f3;
			//	cout << num_1.slog << "/" << num_1.suslog_2 << "*" << num_2.slog << "/" << num_2.suslog_2 << " ";
			//	f3.result = (num_1.slog*num_2.slog) / (num_1.suslog_2 * num_2.suslog_2);
			//	//cout << " Равно: " << f3.result << endl;

			//	return f3;
			//}

			//fraction fdiv(fraction num_1, fraction num_2) {
			//	fraction f4;
			//	cout << num_1.slog << "/" << num_1.suslog_2 << "/" << num_2.slog << "/" << num_2.suslog_2 << " ";
			//	f4.result = (num_1.slog*num_2.suslog_2) / (num_1.suslog_2 * num_2.slog);
			//	//cout << " Равно: " << f4.result << endl;

			//	return f4;
			//}
		#pragma endregion

	#pragma endregion

	#pragma region Глава 6
		#pragma region Вопросы
			/*class Leverage
			{
				private:
					int crowbar;

				public:
					void pry() {}

					int getcrow() {
						return crowbar;
					}
				
				Leverage() {
					crowbar = 0;
				}
			};*/
		#pragma endregion

		#pragma region Задание 1
			/*class Int {
				private:
					int i;

				public:
					Int() {
						i = 0;
					}

					Int(int i1) {
						i = i1;
					}
				
					void add(Int i2,Int i3) {
						i = i2.i + i3.i;
					}
				
					void display() {
						cout << i;
					}

			};*/
		#pragma endregion

		#pragma region Задание 2
			/*class toolBoth{
				private:
					unsigned int car;
					double money;

				public:
					toolBoth(){
						car = 0;
						money = 0;
					}
					void paingCar() {
						car++;
						money += 0.50;
					}
				
					void nonCar() {
						car++;
					}

					void display() {
						cout << "Проехало машин = " << car << "\n";
						cout << "Заплатили = " << money << " ";
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

					void timeSum(Time t1 , Time t2) {
						
						seconds = t1.seconds + t2.seconds;
						if (seconds>=60){
							seconds -= 60;
							minute++;
						}
						minute += t1.minute + t2.minute;
						if (minute>=60)
						{
							minute -= 60;
							hours++;
						}
						hours += t1.hours + t2.hours;
						
					}
			};*/
		#pragma endregion

		#pragma region Задание 4
			///*class Emploee{
			//	private:
			//		int identif;
			//		float oklad;
			//	
			//	public:
			//		void getPersonal(int id, float zp) {
			//			identif = id;
			//			oklad = zp;
			//		}

			//		void showPersonal() {
			//			cout << "Номер работника: " << identif << endl;
			//			cout << "Зарплата работника: " << oklad << endl;
			//			cout << endl;
			//		}
			//
			//};*/
		#pragma endregion

		#pragma region Задание 5
			/*class date{
				private:
					int month, day, year;
					
				public:
					void getDate(int d, int m, int y) {
						month = m;
						day = d;
						year = y;
					}

					void showData() {
						cout << day << "/" << month << "/" << year << endl;
					}
			};*/
		#pragma endregion

		#pragma region Задание 6
			/*class Date{
				public:
					int month, day, year;

					Date() : day(0), month(0), year(0) {}
					Date(int d, int m, int y) : day(d), month(m), year(y) {}
			};

			class Employee {
				private:
					int number;
					float salary;
					Date date;
					char letter;
					int post;
					enum specials { laborer, secretary, manager};

				public:
					Employee() :number(0), salary(0){}
					Employee(int id, float zp):number(id),salary(zp){}

					void get_empl()
					{
						char ch;
						cout << "Введите номер сотрудника" << endl;
						cin >> number;
						cout << "зарплату" << endl;
						cin >> salary;
						cout << "Введите начало работы сотрудника в формаде (ДД/ММ/ГГГГ) " << endl;
						cin >> date.day >> ch >> date.month >> ch >> date.year;
						cout << "Введите должность сотрудника указав первую букву (laborer, secretary, manager)" << endl;
						cin >> letter;
						switch (letter)
						{
						case 'l': post = laborer; break;
						case 's': post = secretary; break;
						case 'm': post = manager; break;
						}

					}
					void put_empl()const
					{
						cout << "Сотрудник " << number << ", Зарплата " << salary << "$," << " Дата принятия на работу " << date.day << "/" << date.month << "/" << date.year << ", должность ";
						switch (post)
						{
						case laborer: cout << "laborer" << endl; break;
						case secretary: cout << "secretary" << endl; break;
						case manager: cout << "manager" << endl; break;
						}
					}
			};*/
		#pragma endregion

		#pragma region Задание 7
			//class Angle{
			//	private:
			//		int angle;
			//		float minute;
			//		char simbols;

			//	public:
			//		Angle() :angle(0), minute(0), simbols(0) {}

			//		Angle(int a, float m, char s) :angle(a), minute(m), simbols(s) {
			//			//cout << angle << "°" << minute << "°" << simbols << endl;
			//		}

			//		void getAngle(int a, float m, char s) {
			//			angle = a;
			//			minute = m;
			//			simbols = s;
			//		}

			//		void showAngle() {
			//			cout << angle << "°" << minute << "°" << simbols << endl;
			//		}
			//};
		#pragma endregion
			
		#pragma region Задание 8
			/*class myObject{
				private:
					static int start;
					int id;

				public:
					myObject() {
						start++;
						id = start;
					}
					int getid() {
						return id;
					}
			};

			int myObject::start = 0;*/
		#pragma endregion

		#pragma region Задание 9
			/*class Fraction{
				private:
					int chislit;
					int znamenat;
				
				public:
					Fraction() :chislit(0), znamenat(0) {};
					void getValue(int c,int z){
						chislit = c;
						znamenat = z;
					};

					void getPlus(Fraction m1, Fraction m2){
						cout << m1.chislit << "\\" << m1.znamenat << " + " << m2.chislit << "\\" << m2.znamenat << " ";
						chislit = m1.chislit*m2.znamenat + m1.znamenat * m2.chislit;
						znamenat = m1.znamenat*m2.znamenat;
						double result = (chislit / znamenat);
							cout << " Равно: " << chislit << "\\" <<znamenat << "\nРано: " << result << endl;
					}
			};*/
		#pragma endregion

		#pragma region Задание 10
			/*class Ship{
				private:
					static int start;
					int id;
					int angle;
					char simbols;

				public:
					Ship():id(0),angle(0),simbols(0) {
						start++;
						id = start;
					}

					Ship(int angle, char simbols): angle(angle),simbols(simbols) {}

					void getShip() {
						cout << "Введите координаты корабля № " << id << " <ХХХ°> и <N, S, E, W>" << endl;
						cin >> angle >> simbols;
					}

					void showShip() {
						cout << "Номер карабля: " << id << " Местонахождение: " << angle << "° " << "Долготы: " << simbols << endl;
					}
			};

			int Ship::start = 0;*/
		#pragma endregion

		#pragma region Задание 11
			//class fraction{
			//	private:
			//		float slog;
			//		float suslog_2;

			//	public:
			//		fraction(): slog(0), suslog_2(0){}

			//		void getFraction(int slog, int suslog_2){
			//			this->slog = slog;
			//			this->suslog_2 = suslog_2;
			//		}

			//		void fadd (fraction num_1 , fraction num_2) {
			//			cout << num_1.slog << "/" << num_1.suslog_2 << "+" << num_2.slog << "/" << num_2.suslog_2 << " ";
			//			slog = num_1.slog*num_2.suslog_2 + num_1.suslog_2 * num_2.slog;
			//			suslog_2 = num_1.suslog_2*num_2.suslog_2;
			//		}

			//		void fsub (fraction num_1, fraction num_2) {
			//			cout << num_1.slog << "/" << num_1.suslog_2 << "-" << num_2.slog << "/" << num_2.suslog_2 << " ";
			//			slog = num_1.slog*num_2.suslog_2 - num_1.suslog_2 * num_2.slog;
			//			suslog_2 = num_1.suslog_2*num_2.suslog_2;
			//		}

			//		void fmul(fraction num_1, fraction num_2) {
			//			cout << num_1.slog << "/" << num_1.suslog_2 << "*" << num_2.slog << "/" << num_2.suslog_2 << " ";
			//			slog = num_1.slog*num_2.slog;
			//			suslog_2 = num_1.suslog_2 * num_2.suslog_2;
			//		}

			//		void fdiv(fraction num_1, fraction num_2) {
			//			cout << num_1.slog << "/" << num_1.suslog_2 << "/" << num_2.slog << "/" << num_2.suslog_2 << " ";
			//			slog = num_1.slog*num_2.suslog_2;
			//			suslog_2 = num_1.suslog_2 * num_2.slog;
			//		}

			//		void showFraction() {
			//			cout << "Равно: " << slog << "/" << suslog_2 << endl;
			//		}

			//		void  lowterms() {
			//			long tnum, tden, temp, gcd;
			//			tnum = labs(slog); // используем неотрицательные 
			//			tden = labs(suslog_2);// значения (нужен cmath) 
			//				if (tden == 0) // проверка знаменателя на О 
			//				{
			//					cout << "Недопустимый знаменатель!";
			//					system ("pause");
			//					exit(1);
			//				}
			//				else if (tnum == 0) // проверка числителя на О 
			//				{
			//					tnum = 0;
			//					tden = 1;
			//					return;
			//				}
			//			while (tnum != 0) // нахождение наибольшего общего делителя 
			//			{
			//				if (tnum < tden) // если числитель больше знаменателя. 
			//				{
			//					//меняем их местами
			//					temp = tnum; 
			//					tnum = tden;
			//					tden = temp;  
			//				}
			//				tnum = tnum - tden; // вычитание 
			//			}
			//			gcd = tden; // делим числитель и знаменатель на 
			//			slog = slog / gcd; // полученный наибольший общий делитель 
			//			suslog_2 = suslog_2 / gcd;
			//		}
			//};
		#pragma endregion

		#pragma region Задание 12
			/*int number;
			class Fraction{
				private:

				public:
					int numerator, denominator;
					
					Fraction() :numerator(0), denominator(0){}

					void mul_fr(Fraction f1, Fraction f2)
					{
						numerator = f1.numerator * f2.numerator;
						denominator = f1.denominator * f2.denominator;
					}
					void lowterms()
					{
						long tnum, tden, temp, gcd;
						tnum = labs(numerator);
						tden = labs(denominator);
					
						if (tden == 0)
						{
							cout << "Недопустимый знаменатель!"; exit(1);
						}
						else if (tnum == 0)
						{
							numerator = 0; denominator = 1; return;
						}
						while (tnum != 0)
						{
							if (tnum < tden)
							{
								temp = tnum; tnum = tden; tden = temp;
							}
							tnum = tnum - tden;
						}
						gcd = tden;
						numerator = numerator / gcd;
						denominator = denominator / gcd;
					}
					void disp_fr()const
					{
						cout << setw(5) << numerator << "/" << denominator;
					}
				};*/
		#pragma endregion
	#pragma endregion

#pragma endregion

int main()
{
	setlocale(LC_ALL, "Russian");

	#pragma region Глава 2

		#pragma region Задание 1
			/*const float futGalon = 7.481f;
			int galon;
			float value;
			cout << "Введите количество галонов" << endl;
			cin >> galon;
			value = futGalon * galon;
			cout << "Кол-во головнов = " << galon << " Объем в кубических футах = " << value << endl;*/
		#pragma endregion

		#pragma region Задание 2	
			/*cout << 1990 << setw(9) << 135 << "\n" <<
			1991 << setw(9) << 7290 << "\n" <<
			1992 << setw(9) << 11300 << "\n" <<
			1993 << setw(9) << 16200 << endl;*/
		#pragma endregion

		#pragma region Задание 3
			/*const int constValue = 10;
			int value = constValue + 10;
			int dicrementValue = value;
			cout <<constValue <<"\n"<< value << "\n" << --dicrementValue << endl;*/
		#pragma endregion

		#pragma region Задание 4
			/*cout << "Симон!!!!" << "\n"
			<< "Не верь в свою веру в себя" << "\n"
			<< "Вверь в мою веру в тебя" << endl;*/
		#pragma endregion

		#pragma region Задание 5
			/*	cout << "Введите букву" << endl;
			char simbol;
			cin >> simbol;
			cout << "Если вы ввели заглавную вы увидете 0, а если строчную цело число"<< endl
			<< "Число = "
			<< islower(simbol) << endl;*/
		#pragma endregion

		#pragma region Задание 6
			/*int funt;
			const float dollar = 1.487f;
			const float frank = 0.172f;
			const float marka = 0.584f;
			const float iena = 0.009955f;
			cout << "Введите кол-во фунтов: ";
			cin >> funt;
			cout <<"Цены на бирже за фунт \n"
			<< "Долар "<< setw(18) << funt * dollar << endl
			<< "Франк "<< setw(18) << funt * frank << endl
			<< "Немецкие марки "<< setw(9) << funt * marka << endl
			<< "Йена "<< setw(22) <<  funt * iena << endl;*/
		#pragma endregion

		#pragma region Задание 7
			/*	float gradus;
			float foringete;
			cout << "Введите температуру в градусах: ";
			cin >> gradus;
			foringete = (gradus * 1.8) + 32;
			cout <<"Температура в форингейтах " <<foringete << endl;*/
		#pragma endregion

		#pragma region Задание 8
			//char dot = '.';
			//cout << setfill(dot) << 
			//1990 << setw(9) << 135 << "\n" <<
			//1991 << setw(9) << 7290 << "\n" <<
			//1992 << setw(9) << 11300 << "\n" <<
			//1993 << setw(9) << 16200 << endl;
		#pragma endregion

		#pragma region Задание 9 не получилось
			/*int oneDrob;
			int twoDrob;

			int threeDrob;
			int fourDrob;
			int value;

			cout << "ВВедите первую дробь  ";
			cin >> oneDrob;
			cout << " / ";
			cin >> twoDrob;

			cout << "ВВедите вторую дробь  ";
			cin >> threeDrob;
			cout << " / ";
			cin >> fourDrob;

			value = ((oneDrob * fourDrob) + (twoDrob * threeDrob)) / (twoDrob*fourDrob);
			cout << "Сумма равна " << value << endl;*/
		#pragma endregion

		#pragma region Задание 10
			/*int funt;
			int shiling;
			int pens;

			cout << "Введите кол-во Фунтов: ";
			cin >> funt;

			cout << "Введите кол-во Шиллингов: ";
			cin >> shiling;

			cout << "Введите кол-во Пенсов: ";
			cin >> pens;*/
		#pragma endregion

	#pragma endregion

	#pragma region Глава 3
		#pragma region Вопросы вернуться позже
			/*char game ='n';

			do
			{
			int user = 0;

			cout << "Введите :\n 1.Цикл for \n 2.Цикл while \n 3.Цикл Do while " << endl;
			cin >> user;

			if ((!cin) || user == 1 || user == 2 || user == 3)
			{
			if (user == 1) {
			cout << "Цикл for будет выводить числа от 100 - 110" << endl;
			for (int i = 100; i <= 110; i++)
			{
			cout << i << endl;
			}
			}
			else if (user == 2) {
			cout << "Цикл while будет выводить числа от 100 - 110" << endl;
			int i = 100;
			while (i <= 110)
			{
			cout << i++ << endl;
			}
			}
			else if (user == 3) {
			cout << "Цикл Do while будет выводить числа от 100 - 110" << endl;
			int i = 100;
			do
			{
			cout << i++ << endl;
			} while (i <= 110);
			}
			}
			else
			{
			cout << "Вы ошиблись, попробуйте еще раз!" << endl;
			continue;
			}

			cout << "Хотите повторить ? y/n:  ";
			cin >> game;
			} while (game != 'n');*/
		#pragma endregion

		#pragma region Задание 1
			/*int n;
			cout << "Введите значение: " << endl;
			cin >> n;
			for (int i = 1; i <= 100; i++) {
			cout << n * i<<' ';
			if (i % 10==0)
			cout << endl;
			}*/
		#pragma endregion

		#pragma region Задание 2
			/*int n;
			cout << "Введите значение: " << endl;
			cin >> n;
			for (int i = 1; i <= 100; i++) {
			cout << n * i<<' ';
			if (i % 10==0)
			cout << endl;
			}*/
		#pragma endregion

		#pragma region Задание 2
			/*char tryAgain;

			do
			{
			cout << "Нажмите 1 для  перевода шкалы Цельсия в шкалу Фарингейта \n"
			<< "Нажмите 2 для перевода шкалы Фарингейта в шкалу Цельсия" << endl;

			int simb;
			cin >> simb;

			if (simb / 1) {
			if (simb == 1) {
			cout << "Введите градусы в Цельсия: "<< endl;
			double celsia;
			cin >> celsia;
			celsia = (celsia *1.8)+32;
			cout << "Градусы в Фарингейтах: "<< celsia << endl;
			}
			else if (simb == 2) {
			cout << "Введите градусы в Фарингейтах: " << endl;
			double faring;
			cin >> faring;
			faring = (faring - 32)* 0.5555555555555556;
			cout << "Градусы в Цельсиях: " << faring << endl;
			}

			cout << "Хотите попробоавать? y/n: ";
			cin >> tryAgain;

			if (tryAgain == 'y'){
			tryAgain = 'y';
			}
			else if(tryAgain == 'n'){
			tryAgain = 'n';
			}
			}
			else {
			cout << "Вы ошиблись!" << endl;
			continue;
			}

			} while (tryAgain !='n');*/
		#pragma endregion

		#pragma region Задание 3 не получилось
			/*	cout << "Введите цисло: ";
			char num;
			unsigned long total = 0;
			while ((num = _getche()) != '\r')
			total = total * 10 + (num - '48');
			cout << "Числоп получившееся: " << total << endl;*/
		#pragma endregion

		#pragma region Задание 4
			/*char tryAgain;
			do
			{
			cout << "Введите (первый аперанд - Знак - второй аперанд): " << endl;
			int num_1;
			int num_2;
			int result;
			char simb;
			cin >> num_1>>simb>> num_2;

			switch (simb)
			{
			case '+': result = num_1 + num_2;
			break;
			case '-': result = num_1 - num_2;
			break;
			case '/': result = num_1 / num_2;
			break;
			case '*': result = num_1 * num_2;
			break;
			}

			cout << "Результат: " << result << endl;

			cout << "Хотите попробоавать? y/n: ";
			cin >> tryAgain;

			if (tryAgain == 'y') {
			tryAgain = 'y';
			}
			else if (tryAgain == 'n') {
			tryAgain = 'n';
			}

			} while (tryAgain != 'n');*/

		#pragma endregion

		#pragma region Задание 5
			/*int size = 19;
			for (int i = 1; i < 20; i += 2)
			{
			cout << setw(size);
			for (int j = 0; j < i; j++)
			{
			cout <<'x';
			}
			cout << setw(size--) << endl;
			}*/
		#pragma endregion

		#pragma region Задание 6
			/*unsigned int numb;

			do
			{
			unsigned long fact = 1;
			cout << "Введите число: ";
			cin >> numb;

			for (int j = numb; j > 0; j--)
			fact *= j;
			cout << fact << endl;
			} while (numb != 0);*/

		#pragma endregion

		#pragma region Задание 7
			/*float vklad;
			float age;
			float stavka;

			cout << "Введите первоночальный вклад: ";
			cin >> vklad;
			cout << "Введите количество лет: ";
			cin >> age;
			cout << "Введите процентную ставку: ";
			cin >> stavka;

			for (int i = 0; i < age; i++)
			{
			vklad = vklad + (vklad*(stavka/100.00));
			}
			cout << "Итог: " << vklad<<endl;*/
		#pragma endregion

			//Задание про шилинги ебанутое я не делал

		#pragma region Задание 9
			//unsigned int mest = 4;
			//int frends;
			//int result=1;
			////int result2=0;
			//cout << "Введите кол-во гостей:";
			//cin >> frends;

			//for (; mest >= 1; mest--)
			//{	
			//	result *= frends;
			//	//result2 *= result;
			//	frends--;
			//}
			//cout << "Itog " << result << endl;
		#pragma endregion

		#pragma region Задание 10
			/*float vklad;
			float sum;
			int age=0;
			float stavka;

			cout << "Введите первоночальный вклад: ";
			cin >> vklad;
			cout << "Введите желаемую сумму: ";
			cin >> sum;
			cout << "Введите процентную ставку: ";
			cin >> stavka;

			while (sum >= vklad)
			{
			vklad = vklad + (vklad*(stavka / 100.00));
			age++;
			}
			cout << "Ждать лет: " << age <<endl;*/
		#pragma endregion

			//Задание 11 в пизду идет ШИЛИНГИ ЕБАННЫЕ

		#pragma region Задание 12
			/*float num_1;
			float num_2;
			char znak;
			char tryAgain;
			float num_3;
			float num_4;
			float result;

			do
			{
			cout << "Введите числитель первой дроби - / - знаменатель первой дроби:" << endl;
			cin >> num_1 >> znak >> num_2;
			cout << "Введите числитель второй дроби - / - знаменатель второй дроби:" << endl;
			cin >> num_3 >> znak >> num_4;

			cout << "Введите знак (+ - * /): ";
			cin >> znak;

			switch (znak)
			{
			case'+': {
			cout << num_1 << "/" << num_2 << znak << num_3 << "/" << num_4 << " ";
			result = (num_1*num_4 + num_2 * num_3) / (num_2*num_4);
			cout << " Равно: " << result << endl;
			} break;

			case'-': {
			cout << num_1 << "/" << num_2 << znak << num_3 << "/" << num_4 << " ";
			result = (num_1*num_4 - num_2 * num_3) / (num_2*num_4);
			cout << " Равно: " << result << endl;;
			}break;

			case'*': {
			cout << num_1 << "/" << num_2 << znak << num_3 << "/" << num_4 << " ";
			result = (num_1*num_3) / (num_2 * num_4);
			cout << " Равно: " << result << endl;;
			}break;
			case'/': {
			cout << num_1 << "/" << num_2 << znak << num_3 << "/" << num_4 << " ";
			result = (num_1*num_4) / (num_2 * num_3);
			cout << " Равно: " << result << endl;;
			}break;

			default: cout << "Вы ввели не тот символ!";
			break;
			}

			cout << "Хотите попробовать еще раз? y/n: ";
			cin >> tryAgain;
			} while (tryAgain != 'n');*/
		#pragma endregion

	#pragma endregion

	#pragma region Глава 4
		#pragma region Вопросы
			/*struct Time
			{
			int hrs;
			int mins;
			int secs;
			};

			Time myTime;
			myTime.hrs = 11;
			myTime.mins = 10;
			myTime.secs = 59;
			cout << myTime.hrs << " " << myTime.mins << " " << myTime.secs;;*/

			/*enum Players	{B1,B2,SS,B3,RF,CF,LF,P,C};

			Players joe = LF;
			Players tom = P;*/

			/*enum Speeds {absolete = 78,single = 45,album = 33};*/
		#pragma endregion

		#pragma region Задание 1
			/*struct Phone
			{
			int code;
			int nomerStation;
			int nomerAbanenta;
			};

			Phone phone = { 980,540,1564 };

			Phone myPhone;
			cin >> myPhone.code >> myPhone.nomerStation >> myPhone.nomerAbanenta;

			cout << "(" << phone.code << ")" << "-" << phone.nomerStation << "-" << phone.nomerAbanenta << endl;
			cout << "(" << myPhone.code << ")" << "-" << myPhone.nomerStation << "-" << myPhone.nomerAbanenta << endl;*/
		#pragma endregion

		#pragma region Задание 2
			/*struct Point
			{
			int x;
			int y;
			};

			Point p1;
			cout << "Введите значения для точек Х и Y:  ";
			cin >> p1.x >> p1.y;

			Point p2;
			cout << "Введите значения для точек Х и Y:  ";
			cin >> p2.x >> p2.y;

			Point p3;
			p3.x = p1.x + p2.x;
			p3.y = p1.y + p2.y;

			cout << "p3 = " << p3.x << " " << p3.y << endl;*/
		#pragma endregion

		#pragma region Задание 3 в пизду пусть идет
			/*struct Volume
			{
			int feat;
			float inches;

			};*/
		#pragma endregion

		#pragma region Задание 4
			/*struct Emploe
			{
			int id;
			float zarplata;
			};

			Emploe emploe1;
			Emploe emploe2;
			Emploe emploe3;
			cout << "Введите номер и зп первого сотрудника: "; cin >> emploe1.id >> emploe1.zarplata;
			cout << "Введите номер и зп второго сотрудника: "; cin >> emploe2.id >> emploe2.zarplata;
			cout << "Введите номер и зп третьего сотрудника: "; cin >> emploe3.id >> emploe3.zarplata;

			cout << emploe1.id << " " << emploe1.zarplata << endl;
			cout << emploe2.id << " " << emploe2.zarplata << endl;
			cout << emploe3.id << " " << emploe3.zarplata << endl;*/
		#pragma endregion

		#pragma region Задание 5
			/*struct Data
			{
			int date;
			int month;
			int year;
			};
			cout << "Введите дату в формате дд/мм/гг: ";
			Data data;
			cin >> data.date >> data.month >> data.year;

			cout << data.date << "/" << data.month << "/" << data.year << endl;*/

		#pragma endregion

		#pragma region Задание 6
			/*enum eType {laborer,secretary,manager,accountant,executive,resercher};
			eType etype;
			char simb;
			cout << "Введите первую букву должности: \n" << "(laborer,secretary,manager,accountant,executive,resercher)" << endl;
			cin >> simb;

			switch (simb)
			{
			case 'l': etype = laborer; break;
			case 's': etype = secretary; break;
			case 'm': etype = manager; break;
			case 'a': etype = accountant; break;
			case 'e': etype = executive; break;
			case 'r': etype = resercher; break;
			}
			switch (etype)
			{
			case 0: cout << "laborer"; break;
			case 1: cout << "secretary"; break;
			case 2: cout << "manager"; break;
			case 3: cout << "accountant"; break;
			case 4: cout << "executive"; break;
			case 5: cout << "resercher"; break;
			}*/
		#pragma endregion

		#pragma region Задание 7
			/*struct Emploe
			{
			enum eType { laborer, secretary, manager, accountant, executive, resercher };

			int id;
			float zarplata;

			int date;
			int month;
			int year;
			};

			Emploe emploe1;
			int type;
			char simb;
			cout << "Введите первую букву должности: \n" << "(laborer,secretary,manager,accountant,executive,resercher)" << endl;
			cin >> simb;

			switch (simb)
			{
			case 'l': type = emploe1.laborer; break;
			case 's': type = emploe1.secretary; break;
			case 'm': type = emploe1.manager; break;
			case 'a': type = emploe1.accountant; break;
			case 'e': type = emploe1.executive; break;
			case 'r': type = emploe1.resercher; break;
			}

			Emploe emploe2;
			cout << "\nВведите номер и зп сотрудника: "; cin >> emploe2.id >> emploe2.zarplata;

			Emploe emploe3;
			cout << "Введите дату принятия на работу в формате дд/мм/гг : "; cin >> emploe3.date >> emploe3.month >> emploe3.year;

			switch (type)
			{
			case 0: cout << "laborer"; break;
			case 1: cout << "secretary"; break;
			case 2: cout << "manager"; break;
			case 3: cout << "accountant"; break;
			case 4: cout << "executive"; break;
			case 5: cout << "resercher"; break;
			}

			cout << " " << emploe2.id << " " << emploe2.zarplata << " " << emploe3.date << "/" << emploe3.month << "/" << emploe3.year << endl;
			*/
		#pragma endregion

		#pragma region Задание 8
			//struct Fraction
			//{
			//	float num_1;
			//	float num_2;
			//};
			//
			//char znak;
			//char tryAgain;
			//float result;

			//Fraction f1;
			//Fraction f2;

			//do
			//{
			//	cout << "Введите числитель первой дроби - / - знаменатель первой дроби:" << endl;
			//	cin >> f1.num_1 >> znak >> f1.num_2;
			//	cout << "Введите числитель второй дроби - / - знаменатель второй дроби:" << endl;
			//	cin >> f2.num_1 >> znak >> f2.num_2;

			//	cout << "Введите знак (+ - * /): ";
			//	cin >> znak;

			//	switch (znak)
			//	{
			//		case'+': {
			//			cout << f1.num_1 << "/" << f1.num_2 << znak << f2.num_1 << "/" << f2.num_2 << " ";
			//			result = (f1.num_1*f2.num_2 + f1.num_2 * f2.num_1) / (f1.num_2*f2.num_2);
			//			cout << " Равно: " << result << endl;
			//		} break;

			//		/*case'-': {
			//			cout << num_1 << "/" << num_2 << znak << num_3 << "/" << num_4 << " ";
			//			result = (num_1*num_4 - num_2 * num_3) / (num_2*num_4);
			//			cout << " Равно: " << result << endl;;
			//		}break;

			//		case'*': {
			//			cout << num_1 << "/" << num_2 << znak << num_3 << "/" << num_4 << " ";
			//			result = (num_1*num_3) / (num_2 * num_4);
			//			cout << " Равно: " << result << endl;;
			//		}break;
			//		case'/': {
			//			cout << num_1 << "/" << num_2 << znak << num_3 << "/" << num_4 << " ";
			//			result = (num_1*num_4) / (num_2 * num_3);
			//			cout << " Равно: " << result << endl;;
			//		}break;

			//		default: cout << "Вы ввели не тот символ!";
			//		break;*/
			//	}

			//	cout << "Хотите попробовать еще раз? y/n: ";
			//	cin >> tryAgain;
			//} while (tryAgain != 'n');
		#pragma endregion

		#pragma region Задание 9
			/*struct Time
			{
			int hours;
			int minutes;
			int seconds;
			};

			Time t1;
			cout << "Введите время в формате чч/мм/сс: ";
			cin >> t1.hours >> t1.minutes >> t1.seconds;
			cout << "Сколько сек в введенном времени " << t1.hours * 3500 + t1.minutes * 60 + t1.seconds<<endl;*/
		#pragma endregion

		#pragma region Задание 11
			/*struct Time
			{
			int hours;
			int minutes;
			int seconds;
			int value;
			};

			Time t1;
			cout << "Введите время в формате чч/мм/сс: ";
			cin >> t1.hours >> t1.minutes >> t1.seconds;
			t1.value = (t1.hours * 3600) + (t1.minutes * 60) + t1.seconds;
			cout << "Сколько сек в введенном времени " << t1.value << endl;

			t1.hours = t1.value / 3600 ^ 0;
			t1.minutes = (t1.value - t1.hours * 3600) / 60 ^ 0;
			t1.seconds = t1.value - t1.hours * 3600 - t1.minutes * 60;

			cout << "Времени: " << t1.hours << " " << t1.minutes << " " << t1.seconds << endl;*/
		#pragma endregion
	#pragma endregion

	#pragma region Глава 5
		#pragma region Вопросы
			//foo();

			/*int b = 0;
			b = times(2);
			cout <<b<<endl;*/
			
			/*float b = 10.0f;
			footbar(b);
			cout << b << endl;*/

			/*int a = 1;
			float b = 3.14159f;
			byth(a, b);
			cout << byth << endl;*/
		#pragma endregion

		#pragma region Задание 1
			/*float rad = 0;
			cout << "Введите радиус" << endl;
			cin >> rad;
			float area = 0;
			area = circArea(rad);
			cout << rad << endl;*/
		#pragma endregion

		#pragma region Задание 2
			/*int p = 2;
			double n = 0;

			cout << "Введите значение и степень:" << endl;
			cin >> n >> p;

			if (p <= 0) {
				cout << "Вы не указали значение для сетпени, по умолчанию присвоится 2: " << endl;
				p = 2;
			}

			double sum = power(n, p);

			cout << sum << endl;*/
		#pragma endregion

		#pragma region Задание 3
			/*int a, b;
			cout << "Введите значения аргументов a and b" << endl;
			cin >> a >> b;
			zeroSmaller(a, b);
			cout << "a = " << a << "\nb = " << b << endl;*/
		#pragma endregion

		#pragma region Задание 4
			/*cout << "Введите значения для d1" << endl;
			Distance di1, di2,di3;
			cin >> di1.a >> di1.b;

			cout << "Введите значения для d2" << endl;
			cin >> di2.a >> di2.b;
			di3 = func(di1, di2);
			endDisp(di3);*/
		#pragma endregion

		#pragma region Задание 5
			/*bool repeat = true;
			do
			{
				int h = 0;
				int m = 0;
				int s = 0;
				long rezult = 0;
				cout << "Введите часы - минуты - секунды" << endl;
				cin >> h >> m >> s;
				if (h!=0 || m!=0 || s!=0) {
					rezult = hms_to_secs(h, m, s);
					cout << "Секунд = " << rezult << endl;
				}
				else { repeat = false; }

			} while (repeat);*/
		#pragma endregion

		#pragma region Задание 6
			/*bool repeat = true;
			do
			{
				Time time, secTime;
				time.hours = 0;
				time.minutes = 0;
				time.seconds = 0;
				long rezult = 0;
				cout << "Введите часы - минуты - секунды" << endl;
				cin >> time.hours >> time.minutes >> time.seconds;
				if (time.hours != 0 || time.minutes != 0 || time.seconds != 0) {
				rezult = time_to_sec(time);
				cout << "Секунд = " << rezult << endl;
	
				secTime = secs_to_time(rezult);

				endDipl(secTime);
			}
			else { repeat = false; }

			} while (repeat);*/
		#pragma endregion

		#pragma region Задание 7
			/*int p = 2;
			double n = 0;

			cout << "Введите значение и степень:" << endl;
			cin >> n >> p;

			if (p <= 0) {
				cout << "Вы не указали значение для сетпени, по умолчанию присвоится 2: " << endl;
				p = 2;
			}

			double sum = power(n, p);

			cout << sum << endl;
			
			char c = 2;
			long l = 0;

			cout << "Введите значение и степень:" << endl;
			cin >> l >> c;

			if (c <= 0) {
				cout << "Вы не указали значение для сетпени, по умолчанию присвоится 2: " << endl;
				c = 2;
			}

			long sum2 = power(l, c);

			cout << sum << endl;
			
			int c2 = 2;
			float f = 0;

			cout << "Введите значение и степень:" << endl;
			cin >> f >> c2;

			if (c2 <= 0) {
				cout << "Вы не указали значение для сетпени, по умолчанию присвоится 2: " << endl;
				c2 = 2;
			}

			long sum3 = power(f,c2);

			cout << sum3 << endl;*/
		#pragma endregion

		#pragma region Задание 8
			/*int a = 30;
			int b = 40;
			swop(a, b);
			cout << "Значения в функции маин = " << "a =" << a << " " << "b = " << b << endl;*/
		#pragma endregion

		#pragma region Задание 9
			/*Time time1, time2;
			cout << "Введите значения h,m,s" << endl;
			cin >> time1.hours >> time1.minutes >> time1.seconds;
			cout << "Введите значения h,m,s для тайм2" << endl;
			cin >> time2.hours >> time2.minutes >> time2.seconds;
			swap(time1, time2);

			cout << "Тайм 1" << " " << time1.hours << ":" << time1.minutes << ":" << time1.seconds << endl;
			cout << "Тайм 2" << " " << time2.hours << ":" << time2.minutes << ":" << time2.seconds << endl;*/
		#pragma endregion

		#pragma region Задание 10
			/*for (int i = 1; i <= 10; i++)
			{
				funk();
			}*/
		#pragma endregion

		#pragma region Задание 11 не решено
			
		#pragma endregion

		#pragma region Задание 12
			/*fraction fr1, fr2, fr3;
			cout << "Введите числитель первой дроби - / - знаменатель первой дроби:" << endl;
			cin >> fr1.slog >> fr1.suslog_2;
			cout << "Введите числитель второй дроби - / - знаменатель второй дроби:" << endl;
			cin >> fr2.slog >> fr2.suslog_2;

			fr3 = fadd(fr1, fr2);
			cout << " Равно: " << fr3.result  << endl;

			fr3 = fsub(fr1, fr2);
			cout << " Равно: " << fr3.result  << endl;

			fr3 = fmul(fr1, fr2);
			cout << " Равно: " << fr3.result  << endl;

			fr3 = fdiv(fr1, fr2);
			cout << " Равно: " << fr3.result  << endl;*/
		#pragma endregion

	#pragma endregion

	#pragma region Глава 6
		#pragma region Вопросы
			/*Leverage lever;
			int a = 1;
			a = lever.getcrow();
			cout << a;*/
		#pragma endregion
	
		#pragma region Задание 1
			/*Int Int1(3);
			Int Int2(12);
			Int Int3;
			Int3.add(Int1, Int2);
			Int3.display();*/
		#pragma endregion
	
		#pragma region Задание 2
			/*char ch;
			const char ESC = 27;
			toolBoth Tool;
			
			do
			{
				cout << "Введите число, 1 - учет машины и оплата за проезд" << endl;
				cout << "Введите число, 2 - учет машины" << endl;
				cout << "Введите ESC для выхода" << endl;

				cout << endl;

				ch = _getche();

				cout << endl;

				if (ch == '1')
				{
					Tool.paingCar();
				}
				else if (ch == '2')
				{
					Tool.nonCar();
				}
			} while (ch != ESC);

			Tool.display();*/
		#pragma endregion
	
		#pragma region Задание 3
			/*Time time1(2,55,30);
			Time time2(15, 40, 41);
				
			time1.display();
			time2.display();

			Time t3;
			t3.timeSum(time1, time2);
			t3.display();*/
		#pragma endregion
	
		#pragma region Задание 4
			/*Emploee emp1, emp2;				
			int id;
			float zp;
			cout << "Введите номер и зп работника: ";
			cin >> id >> zp;
			emp1.getPersonal(id,zp);

			cout << "Введите номер и зп работника: ";
			
			cin >> id >> zp;
			emp2.getPersonal(id,zp);
	
			emp1.showPersonal();
			emp2.showPersonal();*/
		#pragma endregion
	
		#pragma region Задание 5
			/*date d1;
			int m, d, y;
			cin >> d >> m >> y;
			d1.getDate(d, m, y);
			d1.showData();*/
		#pragma endregion
	
		#pragma region Задание 6
			/*Employee Emp1, Emp2;
			Emp1.get_empl();
			Emp2.get_empl();
			Emp1.put_empl();
			Emp2.put_empl();*/
		#pragma endregion
	
		#pragma region Задание 7
			/*Angle angle1(135, 34.5f, 'S');
			Angle angle2;
			char tryAgain;
			do
			{
				int angl;
				float minut;
				char simb;
				cout << "Введите градусы: ";
				cin >> angl;
				cout << "минуты (ХХ.Х): ";
				cin >> minut;
				cout << "направление (N,S,E,W): ";
				cin >> simb;

				angle2.getAngle(angl, minut, simb);
				angle2.showAngle();

				cout << "Try again? y/n: " << endl;
				cin >> tryAgain;
			} while (tryAgain != 'n');*/
			
		#pragma endregion
	
		#pragma region Задание 8
			/*myObject myobj1, myobj2, myobj3;
			cout<<"Мой порядковый номер: "<<myobj1.getid()<< endl;
			cout<<"Мой порядковый номер: "<<myobj2.getid()<< endl;
			cout<<"Мой порядковый номер: "<<myobj3.getid()<< endl;*/
		#pragma endregion
	
		#pragma region Задание 9
			/*Fraction f1, f2, f3;
			char tryAgain;
			do
			{
				int chislit, znamenat;
				char znak;
				cout << "Введите первую дробь X/X" << endl;
				cin >> chislit >> znak >> znamenat;
				f1.getValue(chislit, znamenat);
					
				cout << "Введите первую дробь X/X" << endl;
				cin >> chislit >> znak >> znamenat;
				f2.getValue(chislit, znamenat);

				f3.getPlus(f1, f2);

				cout << "Try Again? y/n " << endl;
				cin >> tryAgain;
			} while (tryAgain != 'n');*/

			
		#pragma endregion
	
		#pragma region Задание 10
			/*Ship ship1, ship2, ship3;
			
			ship1.getShip();
			ship2.getShip();
			ship3.getShip();

			ship1.showShip();
			ship2.showShip();
			ship3.showShip();*/
		#pragma endregion
	
		#pragma region Задание 11
			//fraction fr1, fr2, fr_sum;
			//int slog, suslog_2;
			//char znak, drob;
			//cout << "Введите числитель первой дроби - / - знаменатель первой дроби:" << endl;
			//cin >> slog >>drob>> suslog_2;
			//fr1.getFraction(slog, suslog_2);

			//cout << "Введите знак: <+ - * />" << endl;
			//cin >> znak;

			//cout << "Введите числитель второй дроби - / - знаменатель первой дроби:" << endl;
			//cin >> slog >> drob >> suslog_2;
			//fr2.getFraction(slog, suslog_2);

			//switch (znak)
			//{
			//case '+': fr_sum.fadd(fr1, fr2); break;
			//case '-': fr_sum.fsub(fr1, fr2); break;
			//case '*': fr_sum.fmul(fr1, fr2); break;
			//case '/': fr_sum.fdiv(fr1, fr2); break;
			//}
			////Вывод на экран
			//{
			//	fr_sum.showFraction();
			//	fr_sum.lowterms();
			//}
		#pragma endregion
	
		#pragma region Задание 12
			/*Fraction fr1, fr2, fr3;
			fr1.denominator = fr2.denominator = number;
			cout << "Введите знаменатель: " << endl; 
			cin >> number;

			for (int j = 1; j<number; j++)
			{
				fr1.numerator = j;
				fr1.denominator = number;
				fr1.lowterms();
				fr1.disp_fr();
			}
			cout << endl;
			for (int i = 1; i < number; i++)
			{
				fr2.numerator = i;
				fr2.denominator = number;
				fr2.lowterms();
				fr2.disp_fr();

				for (int j = 1; j < number; j++)
				{
					fr1.numerator = j;
					fr1.denominator = number;
					fr3.mul_fr(fr1, fr2);
					fr3.lowterms();
					fr3.disp_fr();
				}
				cout << endl;
			}*/
		#pragma endregion
	#pragma endregion



	system("pause");
	return 0;
}