#include "MainContains.h"
#include "Warehouse.h"
#include "WarehouseShipment.h"

Warehouse warehouse = Warehouse();
WarehouseShipment warehouseShipment = WarehouseShipment();

void MainContains::addProduct(Product product)
{
	warehouse.addProduct(product);
}

void MainContains::printWarehouse()
{
	warehouse.printProduct();
}

void MainContains::printWarehouse(string name)
{
	warehouse.printProduct(name);
}

void MainContains::printWarehouseShipment()
{
	warehouseShipment.printProduct();
}

void MainContains::printWarehouseShipment(string name)
{
	warehouseShipment.printProduct(name);
}

void MainContains::print()
{
	warehouse.printProduct();
	warehouseShipment.printProduct();
}

void MainContains::print(string name)
{
	warehouse.printProduct(name);
	warehouseShipment.printProduct(name);
}

void MainContains::deleteWarehouse(int idProduct)
{
	warehouse.deleteProduct(idProduct);
}

void MainContains::deleteWarehouseShipment(int idProduct)
{
	warehouseShipment.deleteProduct(idProduct);
}

void MainContains::transferWarehouseToWarehouseShipment(int count)
{
	Product p = warehouse.getProduct(count);
	if (p.count != NULL)
	{
		warehouseShipment.addProduct(p);
	}
	else
	{
		cout << "Товар не найден" << endl;
	}
}

void MainContains::transferWarehouseShipmentToWarehouse(int count)
{
	Product p = warehouseShipment.getProduct(count);
	if (p.count != NULL)
	{
		warehouse.addProduct(p);
	}
	else
	{
		cout << "Товар не найден" << endl;
	}
}
