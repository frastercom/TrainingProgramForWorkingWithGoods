#pragma once
#include "Product.h"

class MainContains
{
public:
	void addProduct(Product product);
	void printWarehouse();
	void printWarehouse(string name);
	void printWarehouseShipment();
	void printWarehouseShipment(string name);
	void print();
	void print(string name);
	void deleteWarehouse(int idProduct);
	void deleteWarehouseShipment(int idProduct);
	void transferWarehouseToWarehouseShipment(int count);
	void transferWarehouseShipmentToWarehouse(int count);
};

