#include "Warehouse.h"
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <stack>
#include "Product.h"

stack <Product> st;

void Warehouse::addProduct(Product product)
{
	st.push(product);
}

void Warehouse::deleteProduct(int idProduct)
{
	int size = st.size();
	Product* product = new Product[size];
	for (int i = size - 1; i >= 0; i--)
	{
		product[i] = st.top();
		st.pop();

	}
	for (int i = 0; i < size; i++)
	{
		if (i != idProduct)
		{
			st.push(product[i]);
		}
	}
}

void Warehouse::printProduct()
{
	int size = st.size();
	Product* product = new Product[size];
	for (int i = size - 1; i >= 0; i--)
	{
		Product p = st.top();
		cout << "id: " << i << "; Наименование магазина: " << p.nameShop << "; Наименование продукта: " << p.nameProduct << "; Стоимость: " << p.money << " Номер партии: " << p.count << ";" << endl;
		product[i] = p;
		st.pop();
	}
	for (int i = 0; i < size; i++)
	{
		st.push(product[i]);
	}
}

void Warehouse::printProduct(string name)
{
	int size = st.size();
	Product* product = new Product[size];
	for (int i = size - 1; i >= 0; i--)
	{
		Product p = st.top();
		if (p.nameProduct == name)
		{
			cout << "id: " << i << "; Наименование магазина: " << p.nameShop << "; Наименование продукта: " << p.nameProduct << "; Стоимость: " << p.money << " Номер партии: " << p.count << ";" << endl;
		}
		product[i] = p;
		st.pop();
	}
	for (int i = 0; i < size; i++)
	{
		st.push(product[i]);
	}
}

Product Warehouse::getProduct(int count)
{
	int size = st.size();
	Product* product = new Product[size];
	Product sp;
	for (int i = size - 1; i >= 0; i--)
	{
		product[i] = st.top();
		st.pop();
	}
	for (int i = 0; i < size; i++)
	{
		if (product[i].count != count)
		{
			st.push(product[i]);
		}
		else
		{
			sp = product[i];
		}
	}
	return sp;
}
