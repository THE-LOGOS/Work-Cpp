// Work-Cpp.cpp: Здесь я буду делать домашнюю работу по книге Лафре С++ .
//

#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "ctype.h"
#include "conio.h"

using namespace std;

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
				
		#pragma endregion

		#pragma region Задание 1

		#pragma endregion

	#pragma endregion


	system("pause");
	return 0;
}

