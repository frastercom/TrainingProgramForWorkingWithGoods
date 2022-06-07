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
	stack <Product> st1;
	int size = st.size();
	for (int i = 0; i < size; i++)
	{
		if (i != idProduct)
		{
			st1.push(st.top());
			st.pop();
		}
		else
		{
			st.pop();
		}
	}
	st = st1;
}

void Warehouse::printProduct()
{
	stack <Product> st1;
	int size = st.size();
	for (int i = 0; i < size; i++)
	{	
		Product p = st.top();
		cout << "id: " << i << " Наименование магазина: " << p.nameShop << "; Наименование продукта: " << p.nameProduct << "; Стоимость: " << p.money << " Номер партии: " << p.count << ";" << endl;
		st1.push(st.top());
		st.pop();
	}
	st = st1;
}

void Warehouse::printProduct(string name)
{
	stack <Product> st1;
	int size = st.size();
	for (int i = 0; i < size; i++)
	{
		Product p = st.top();
		if (p.nameProduct == name)
		{
			cout << "id: " << i << "Наименование магазина: " << p.nameShop << "; Наименование продукта: " << p.nameProduct << "; Стоимость: " << p.money << " Номер партии: " << p.count << ";" << endl;
		}
		st1.push(st.top());
		st.pop();
	}
	st = st1;
}

Product Warehouse::getProduct(int count)
{
	stack <Product> st1;
	int size = st.size();
	Product sp;
	for (int i = 0; i < size; i++)
	{
		Product p = st.top();
		if (p.count == count)
		{
			sp = p;
		}
		else
		{
			st1.push(st.top());
		}
		st.pop();
	}
	st = st1;
	return sp;
}
