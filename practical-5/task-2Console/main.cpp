#include <iostream> // Підключення бібліотеки для введення та виведення даних через стандартний ввід і вивід.

using namespace std; // Використання простору імен "std" для спрощення доступу до функцій вводу та виводу.

int main() // Оголошення точки входу в програму, функції "main".
{
    // Оголошення змінної для зберігання номера місяця.
    int month;

    // Виведення повідомлення для користувача з проханням ввести номер місяця.
    cout << "Введіть номер місяця (число від 1 до 12): ";
    // Отримання введеного користувачем номера місяця та збереження в змінну "month".
    cin >> month;

    // Перевірка, чи введений номер місяця відповідає зимовим місяцям.
    if (month == 1 || month == 2 || month == 12)
    {
    // Виведення повідомлення про те, що введений місяць відноситься до зими.
        cout << "Зима. Брррр!!!" << endl;
    }
    // Перевірка, чи введений номер місяця відповідає весняним місяцям.
    else if (month >= 3 && month <= 5)
    {
    // Виведення повідомлення про те, що введений місяць відноситься до весни.
        cout << "Весна. Природа оживає." << endl;
    }
    // Перевірка, чи введений номер місяця відповідає літнім місяцям.
    else if (month >= 6 && month <= 8)
    {
    // Виведення повідомлення про те, що введений місяць відноситься до літа.
        cout << "Літо. Спека і сонце." << endl;
    }
    // Перевірка, чи введений номер місяця відповідає осіннім місяцям.
    else if (month >= 9 && month <= 11)
    {
    // Виведення повідомлення про те, що введений місяць відноситься до осені.
        cout << "Осінь. Час опадів і осінніх кольорів." << endl;
    }
    else
    {
    // Виведення повідомлення про некоректний ввід, якщо номер місяця не відповідає жодному з визначених варіантів.
        cout << "Введено некоректний номер місяця. Введіть число від 1 до 12." << endl;
    }

    return 0; // Повернення нульового значення, що вказує на успішне завершення програми.
}
