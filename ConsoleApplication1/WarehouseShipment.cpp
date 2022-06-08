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
	int size = stWarehouse.size();
	Product *product = new Product[size];
	for (int i = size - 1; i >= 0; i--)
	{
		product[i] = stWarehouse.top();
		stWarehouse.pop();
		
	}
	for (int i = 0; i < size; i++)
	{
		if (i != idProduct)
		{
			stWarehouse.push(product[i]);
		}
	}	
}

void WarehouseShipment::printProduct()
{
	int size = stWarehouse.size();
	Product* product = new Product[size];
	for (int i = size - 1; i >= 0; i--)
	{
		Product p = stWarehouse.top();
		cout << "id: " << i << "; Наименование магазина: " << p.nameShop << "; Наименование продукта: " << p.nameProduct << "; Стоимость: " << p.money << " Номер партии: " << p.count << ";" << endl;
		product[i] = p;
		stWarehouse.pop();
	}
	for (int i = 0; i < size; i++)
	{
		stWarehouse.push(product[i]);
	}
}

void WarehouseShipment::printProduct(string name)
{
	int size = stWarehouse.size();
	Product* product = new Product[size];
	for (int i = size - 1; i >= 0; i--)
	{
		Product p = stWarehouse.top();
		if (p.nameProduct == name)
		{
			cout << "id: " << i << "; Наименование магазина: " << p.nameShop << "; Наименование продукта: " << p.nameProduct << "; Стоимость: " << p.money << " Номер партии: " << p.count << ";" << endl;
		}
		product[i] = p;
		stWarehouse.pop();
	}
	for (int i = 0; i < size; i++)
	{
		stWarehouse.push(product[i]);
	}
}

Product WarehouseShipment::getProduct(int count)
{
	int size = stWarehouse.size();
	Product* product = new Product[size];
	Product sp;
	for (int i = size - 1; i >= 0; i--)
	{
		product[i] = stWarehouse.top();
		stWarehouse.pop();
	}
	for (int i = 0; i < size; i++)
	{
		if (product[i].count != count)
		{
			stWarehouse.push(product[i]);
		}
		else
		{
			sp = product[i];
		}
	}
	return sp;
}
