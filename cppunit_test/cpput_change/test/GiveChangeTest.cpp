#include <cppunit/config/SourcePrefix.h>
extern "C" {
#include "give_change.h"
}
#include "GiveChangeTest.h"

#include <iostream>
#include <string>
// strncpy is defined here
#include <cstring>

using namespace std;

void GiveChangeTest::setUp()
{
    cout << "GiveChangeTest setup" << endl;
}


void GiveChangeTest::tearDown()
{
    cout << "GiveChangeTest teardown" << endl;
}


// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION( GiveChangeTest );

// method to test the constructor
void GiveChangeTest::testZeroChange()
{
    char *result_ptr = give_change(50, 50);
    puts(result_ptr);
    int cmp = strncmp (result_ptr, "zero", 4);
    CPPUNIT_ASSERT(cmp == 0);
    free(result_ptr);
}


void GiveChangeTest::testFourIdendicalBills()
{
    char *result_ptr = give_change(50, 130);
    int cmp = strncmp (result_ptr, "4 twenties", 10);
    puts(result_ptr);
    CPPUNIT_ASSERT(cmp == 0);
    free(result_ptr);
}
