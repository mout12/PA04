#ifndef CLASS_TEST_SORTER_H
#define CLASS_TEST_SORTER_H

#include "DateType.h"
#include "SorterClass.cpp"
#include "SimpleVector.cpp"


class TestSorter: public SorterClass<DateType>
{
public:

	TestSorter();
	~TestSorter();

// Virtual Functions
    void add( const DateType &addedObject );
    int compareTo( const DateType &lhObject, const DateType &rhObject);
    bool sort();
// Look for functions in PA04's functions
    void getValueAt(int index, DateType DateValue) const;
    int getSize() const;
    
private:
};

#endif