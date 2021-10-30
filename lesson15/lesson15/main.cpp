
//Функция определяет високосный ли год
bool IsLeapYear(int y)
{
	return (y % 400 != 0 && y % 100 == 0) ? 0 : (y % 4 == 0) ? 1 : 0;
}

int SecondsInMinute()
{
	return 60;
}


int main()
{}