#include <stdio.h>
#include <testRunner.h>
#include "drink.h"

static unsigned int Testdrink(void);

int main(void)
{
    return (int) testRunner(Testdrink);
}

static unsigned int Testdrink(void)
{

    int sum;
    

    TEST_ASSERT_EQUALS(sum % 1 , 0);

    return 0;
}
