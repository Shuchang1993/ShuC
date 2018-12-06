/*
 * AbstractFactory.h
 *
 *  Created on: 2018Äê12ÔÂ6ÈÕ
 *      Author: Administrator
 */

#ifndef SIMPLEFACTORY_ABSTRACTFACTORY_H_
#define SIMPLEFACTORY_ABSTRACTFACTORY_H_

#include<stdio.h>
#include"abstractProduct.h"

class AbstractFactory
{
public:
    AbstractFactory();
    virtual ~AbstractFactory();
public:
    virtual AbstractProduct* createProduct() = 0;
};

class FactoryA : public AbstractFactory
{
public:
    FactoryA();
    ~FactoryA();

public:
    AbstractProduct* createProduct();
};

class FactoryB : public AbstractFactory
{
public:
    FactoryB();
    ~FactoryB();

public:
    AbstractProduct* createProduct();
};

#endif /* SIMPLEFACTORY_ABSTRACTFACTORY_H_ */
