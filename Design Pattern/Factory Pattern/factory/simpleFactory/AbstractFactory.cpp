/*
 * AbstractFactory.cpp
 *
 *  Created on: 2018Äê12ÔÂ6ÈÕ
 *      Author: Administrator
 */



#include "AbstractFactory.h"


AbstractFactory::AbstractFactory()
{
}


AbstractFactory::~AbstractFactory(){
}


FactoryA::FactoryA(){
}


FactoryA::~FactoryA(){
}

 AbstractProduct* FactoryA::createProduct()
{
    AbstractProduct* temp = NULL;
    temp = new ProductA();
    return temp;
}

FactoryB::FactoryB(){
}


FactoryB::~FactoryB(){
}

AbstractProduct* FactoryB::createProduct()
{
    AbstractProduct* temp = NULL;
    temp = new ProductB();
    return temp;
}

