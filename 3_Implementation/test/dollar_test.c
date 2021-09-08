/**
 * @file dollar_test.c
 * @author Ankita Name Kondagoli
 * @brief 
 * @version 0.1
 * @date 2021-09-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "unity/unity.h"
#include "assert.h"
#include "dollar.h"

/*required by the unity test framework*/
void setUp()
{

}
void tearDown()
{

}
void test_doller(void)
{
    int n1 = 500, n2 = 75;
    TEST_ASSERT_EQUAL(6.8, dollar(n1,n2));
    
}
void test_euro(void)
{
    int n3 = 500, n4 = 87;
    TEST_ASSERT_EQUAL(5.7, euro(n3,n4));
    
    
}

int main(void)
{   
    /*required by the unity test framework*/
    UNITY_BEGIN();
    /*required by the unity test framework*/
    RUN_TEST(test_doller);
    RUN_TEST(test_euro);
    /*required by the unity test framework*/
    return UNITY_END();
}
