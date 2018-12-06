/*
 * main.cpp
 *
 *  Created on: 2018Äê12ÔÂ6ÈÕ
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
