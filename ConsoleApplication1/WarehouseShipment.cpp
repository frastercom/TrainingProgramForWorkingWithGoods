#include "WarehouseShipment.h"
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <stack>
#include "Product.h"

stack <Product> stWarehouse;

void WarehouseShipment::addProduct(Product product)
{
	stWarehouse.push(product);
}

void WarehouseShipment::deleteProduct(int idProduct)
{
	stack <Product> st1;
	int size = stWarehouse.size();
	for (int i = 0; i < size; i++)
	{
		if (i != idProduct)
		{
			st1.push(stWarehouse.top());
			stWarehouse.pop();
		}
		else
		{
			stWarehouse.pop();
		}
	}
	stWarehouse = st1;
}

void WarehouseShipment::printProduct()
{
	stack <Product> st1;
	int size = stWarehouse.size();
	for (int i = 0; i < size; i++)
	{
		Product p = stWarehouse.top();
		cout << "id: " << i << "Наименование магазина: " << p.nameShop << "; Наименование продукта: " << p.nameProduct << "; Стоимость: " << p.money << " Номер партии: " << p.count << ";" << endl;
		st1.push(stWarehouse.top());
		stWarehouse.pop();
	}
	stWarehouse = st1;
}

void WarehouseShipment::printProduct(string name)
{
	stack <Product> st1;
	int size = stWarehouse.size();
	for (int i = 0; i < size; i++)
	{
		Product p = stWarehouse.top();
		if (p.nameProduct == name)
		{
			cout << "id: " << i << "Наименование магазина: " << p.nameShop << "; Наименование продукта: " << p.nameProduct << "; Стоимость: " << p.money << " Номер партии: " << p.count << ";" << endl;
		}
		st1.push(stWarehouse.top());
		stWarehouse.pop();
	}
	stWarehouse = st1;
}

Product WarehouseShipment::getProduct(int count)
{
	stack <Product> st1;
	int size = stWarehouse.size();
	Product sp;
	for (int i = 0; i < size; i++)
	{
		Product p = stWarehouse.top();
		if (p.count == count)
		{
			sp = p;
		}
		else
		{
			st1.push(stWarehouse.top());
		}
		stWarehouse.pop();
	}
	stWarehouse = st1;
	return sp;
}
