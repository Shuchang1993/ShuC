/*
 * main.cpp
 *
 *  Created on: 2018��12��6��
 *      Author: Administrator
 */




#include "AbstractFactory.h"

int main()
{
    AbstractFactory* factory = new FactoryA();
    AbstractProduct* product = factory->createProduct();
    product->operation();
    delete product;
    product = NULL;
    delete factory;
    factory = NULL;
}
