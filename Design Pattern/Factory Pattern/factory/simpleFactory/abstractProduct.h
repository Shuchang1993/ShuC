/*
 * abstractProduct.h
 *
 *  Created on: 2018��12��6��
 *      Author: Administrator
 */

#ifndef SIMPLEFACTORY_ABSTRACTPRODUCT_H_
#define SIMPLEFACTORY_ABSTRACTPRODUCT_H_

#include<stdio.h>

class AbstractProduct
{
public:
    AbstractProduct();
    virtual ~AbstractProduct();
public:
    virtual void operation() = 0;

};

class ProductA : public AbstractProduct
{
public:
    ProductA();
    virtual ~ProductA();
public:
    void operation();
};

class ProductB : public AbstractProduct
{
public:
    ProductB();
    virtual ~ProductB();
public:
    void operation();
};



#endif /* SIMPLEFACTORY_ABSTRACTPRODUCT_H_ */
