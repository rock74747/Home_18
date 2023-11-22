#include <iostream>



double sum_five(double num1, double num2 = 0, double num3 = 0, double num4 = 0, double num5 = 0) {
    double sum = num1 + num2 + num3 + num4 + num5;
    return sum;
}

inline double Sr(double num1, double num2, double num3) {
    return (num1 + num2 + num3) / 3;
}

int max_val(int num1, int num2, int num3) {
    std::cout << "Передан int\n";
    if (num1 >= num2 && num1 >= num3)
        return num1;
    if (num2 >= num1 && num2 >= num3)
        return num2; 
    if (num3 >= num1 && num3 >= num2)
        return num3;
}
short max_val(short num1, short num2, short num3) {
    std::cout << "Передан short\n";
    if (num1 >= num2 && num1 >= num3)
        return num1;
    if (num2 >= num1 && num2 >= num3)
        return num2;
    if (num3 >= num1 && num3 >= num2)
        return num3;
}
double max_val(double num1, double num2, double num3) {
    std::cout << "Передан double\n";
    if (num1 >= num2 && num1 >= num3)
        return num1;
    if (num2 >= num1 && num2 >= num3)
        return num2;
    if (num3 >= num1 && num3 >= num2)
        return num3;
}
  

template <typename T>
 void arr_index(T arr[], const int lenght) {
    for (int i = 0; i < lenght; i++) {
        int n = 1;
        if (arr[i] < 0)
            while (i + n < lenght)

            {
                arr[i + n] = 0;
                n++;
            }
            
        std::cout << arr[i] << std::endl;
    }
}

int main()
{
	setlocale(LC_ALL, "Russian");
	
    std::cout << "Задание 1 \n";
    double a, b, c, d, e;
    std::cout << "Введите количество чисел до 5 ->";
    std::cin >> a >> b >> c >> d >> e;
    std::cout << "Сумма равна: " << sum_five(a, b, c);
    std::cout << std::endl;

    std::cout << "Задание 2 \n";
    double f, g, h;
    std::cout << "Введите три числа->";
    std::cin >> f >> g >> h; '\n';
    std::cout << "Среднее арифметическое равно: " << Sr(f, g, h);
    std::cout << std::endl;

    std::cout << "Задание 3 \n";
    std::cout << "Введите три числа->";
    std::cin >> f >> g >> h;
    std::cout << "Largest number: " << max_val(f, g, h);
    std::cout << std::endl;

    std::cout << "Задание 4 \n";
    const int length = 5;
    double arr[length]{ 3.2, -5, 7.5, -4, 0.3 };
    arr_index (arr, length);

	return 0;
}