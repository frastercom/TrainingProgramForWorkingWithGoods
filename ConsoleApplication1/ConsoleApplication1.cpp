#include <iostream>
#include <stdlib.h>
#include "MainContains.h"

MainContains contains = MainContains();

void clearConsole()
{
    system("cls");
}

void printOutMenu()
{
    cout << "Меню вывода товара" << endl;
    cout << "1. Вывести все товары" << endl;
    cout << "2. Вывести товар на складе, по названию товара" << endl;
    cout << "3. Вывести товары на складе" << endl;
    cout << "4. Вывести товар на складе, по названию товара" << endl;
    cout << "5. Вывести товары в магазине" << endl;
    cout << "6. Вывести товар в магазине, по названию товара" << endl;
    cout << "7. Назад" << endl;
    cout << "Введите номер меню" << endl;
    int n;
    cin >> n;
    string s;
    switch (n)
    {
    case 1: contains.print();
        break;
    case 2:
        cout << "Введите наименование товара" << endl;
        cin >> s;
        contains.print(s);
        break;
    case 3: contains.printWarehouse();
        break;
    case 4:
        cout << "Введите наименование товара" << endl;
        cin >> s;
        contains.printWarehouse(s);
        break;
    case 5: contains.printWarehouseShipment();
        break;
    case 6:
        cout << "Введите наименование товара" << endl;
        cin >> s;
        contains.printWarehouseShipment(s);
        break;
    default:
        break;
    }
    system("pause");
}

void printMainMenu()
{
    clearConsole();
    cout << "Меню" << endl;
    cout << "1. Добавить товар на склад" << endl;
    cout << "2. Вывести товары" << endl;
    cout << "3. Удалить товар по id на складе" << endl;
    cout << "4. Удалить товар по id в магазине" << endl;
    cout << "5. Отгрузить товар по номеру партии" << endl;
    cout << "6. Вернуть на склад товар по номеру партии" << endl;
    cout << "7. Выход" << endl;
    cout << "Введите номер меню" << endl;
    int n, id;
    cin >> n;
    clearConsole();
    Product p;
    switch (n)
    {
        case 1: 
            cout << "Добавление товара на склад" << endl;
            cout << "Введите наименование товара" << endl;
            cin >> p.nameProduct;
            cout << "Введите наименование магазина" << endl;
            cin >> p.nameShop;
            cout << "Введите стоимость товара" << endl;
            cin >> p.money;
            cout << "Введите номер партии" << endl;
            cin >> p.count;
            contains.addProduct(p);
            break;
        case 2:
            printOutMenu();
            break;
        case 3: 
            cout << "Удаление товара на складе" << endl;
            cout << "Введите id товара" << endl;
            cin >> id;
            contains.deleteWarehouse(id);
            break;
        case 4:
            cout << "Удаление товара в магазине" << endl;
            cout << "Введите id товара" << endl;
            cin >> id;
            contains.deleteWarehouse(id);
            break;
        case 5: 
            cout << "Отгрузка товара по номеру партии" << endl;
            cout << "Введите номер партии" << endl;
            cin >> id;
            contains.transferWarehouseToWarehouseShipment(id);
            break;
        case 6:
            cout << "Возврат товара по номеру партии" << endl;
            cout << "Введите номер партии" << endl;
            cin >> id;
            contains.transferWarehouseShipmentToWarehouse(id);
            break;
        default:
            exit(3);
            break;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    while (true)
    {
        printMainMenu();
    }
}
