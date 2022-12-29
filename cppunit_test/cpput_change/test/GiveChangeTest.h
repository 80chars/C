#ifndef GiveChangeTest_h
#define GiveChangeTest_h

#include <cppunit/extensions/HelperMacros.h>

class GiveChangeTest : public CPPUNIT_NS::TestFixture
{ 
    CPPUNIT_TEST_SUITE( GiveChangeTest );
    CPPUNIT_TEST( testZeroChange );
    CPPUNIT_TEST( testFourIdendicalBills );
    CPPUNIT_TEST_SUITE_END();

    public:
    void setUp();
    void tearDown();

    void testZeroChange();

    void testFourIdendicalBills();
};
#endif
    
