#include <iostream>
#include <iomanip>

int main()
{
    int choice; // Змінна для зберігання вибору опції користувача
    double temperature; // Змінна для зберігання температури

    // Виводимо меню опцій конвертації
    std::cout << "Виберіть опцію конвертації:\n";
    std::cout << "1. Градуси Фаренгейта в градуси Цельсія\n";
    std::cout << "2. Градуси Цельсія в градуси Фаренгейта\n";
    std::cin >> choice; // Зчитуємо вибір користувача

    if (choice == 1)
    {
        // Введення температури в градусах Фаренгейта
        std::cout << "Введіть температуру в градусах Фаренгейта: ";
        std::cin >> temperature;

        // Конвертація температури в градуси Цельсія
        double celsius = (5.0 / 9.0) * (temperature - 32.0);

        // Виведення результату конвертації
        std::cout << "Температура в градусах Цельсія: " << std::fixed << std::setprecision(2) << celsius << std::endl;
    }
    else if (choice == 2)
    {
        // Введення температури в градусах Цельсія
        std::cout << "Введіть температуру в градусах Цельсія: ";
        std::cin >> temperature;

        // Конвертація температури в градуси Фаренгейта
        double fahrenheit = (temperature * 9.0 / 5.0) + 32.0;

        // Виведення результату конвертації
        std::cout << "Температура в градусах Фаренгейта: " << std::fixed << std::setprecision(2) << fahrenheit << std::endl;
    }
    else
    {
        // Повідомлення про неправильний вибір опції
        std::cout << "Неправильний вибір опції.\n";
    }

    return 0;
}