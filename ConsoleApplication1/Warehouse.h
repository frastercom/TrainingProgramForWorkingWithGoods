#pragma once
#include "Product.h"
class Warehouse
{
public:
	void addProduct(Product product);
	void deleteProduct(int idProduct);
	void printProduct();
	void printProduct(string name);
	Product getProduct(int count);
};

