/*The Builder /Creational Pattern is used to separate the construction of a complex object from its
The Builder Creational Pattern is used to separate the construction of a complex object from its
representation so that the same construction process can create different objects representations.
Define an intermediate object whose member functions define the desired object part by part before
the object is available to the client. Build Pattern lets us defer the construction of the object
until all the options for creation have been specified.
~http://en.wikibooks.org/wiki/C%2B%2B_Programming/Code/Design_Patterns#Builder*/

/*Create character and assign random atributes like sex,hair,eye color,height,etc
like Skyrim and similar games*/

#ifndef BuilderPattern_H
#define BuilderPattern_H

#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    void setName(string name)
    {
        this -> name = name;
    }
    void setJob(string job)
    {
        this -> job = job;
    }
    void setIncome(int income)
    {
        this -> income = income;
    }
    void setSocialClass(string socialClass)
    {
        this -> socialClass = socialClass;
    }
    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Job: " << job << endl;
        cout << "Income: " << income << endl;
        cout << "Social Class: " << socialClass << endl;
    }
private:
    string name;
    string job;
    int income;
    string socialClass;
};

class status: public Person
{
public:
    status()
    {
    }
    Person* getPerson()
    {
        return testPerson;
    }
    void createNewPerson()
    {
        testPerson = new Person;
    }
    virtual void assignNameVariable(){}
    virtual void assignJobVariable(){}
    virtual void assignIncomeVariable(){}
    virtual void assignSocialClass(){}
protected:
    Person* testPerson;
};

class lowerClass: public status
{
public:
    virtual void assignNameVariable()
    {
        testPerson->setName("Joe");
    }
    virtual void assignJobVariable()
    {
        testPerson->setJob("unemployed");
    }
    virtual void assignIncomeVariable()
    {
        testPerson->setIncome(0);
    }
    virtual void assignSocialClass()
    {
        testPerson->setSocialClass("lower");
    }
};

class middleClass: public status
{
    virtual void assignNameVariable()
    {
        testPerson->setName("Tim");
    }
    virtual void assignJobVariable()
    {
        testPerson->setJob("teacher");
    }
    virtual void assignIncomeVariable()
    {
        testPerson->setIncome(45000);
    }
    virtual void assignSocialClass()
    {
        testPerson->setSocialClass("middle");
    }
};

class upperClass: public status
{
    virtual void assignNameVariable()
    {
        testPerson->setName("Steve");
    }
    virtual void assignJobVariable()
    {
        testPerson->setJob("CEO");
    }
    virtual void assignIncomeVariable()
    {
        testPerson->setIncome(200000);
    }
    virtual void assignSocialClass()
    {
        testPerson->setSocialClass("upper");
    }
};

class Create
{
public:
    void setStatus(status* t_person)
    {
        this -> t_person = t_person;
    }
    Person* getStatus()
    {
        return t_person->getPerson();
    }
    void initializeStatus()
    {
        t_person->createNewPerson();
        t_person->assignNameVariable();
        t_person->assignJobVariable();
        t_person->assignIncomeVariable();
        t_person->assignSocialClass();
    }
private:
    status* t_person;
};

#endif
