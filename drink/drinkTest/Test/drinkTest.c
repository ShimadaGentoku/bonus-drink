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
    int n;
    int sum;
  
    TEST_ASSERT_EQUALS(n==0,sum==0);

    TEST_ASSERT_EQUALS(n==1,sum==1);

    TEST_ASSERT_EQUALS(n==3,sum==4);

    TEST_ASSERT_EQUALS(n==11,sum==16);

    TEST_ASSERT_EQUALS(n==100,sum==149);

    TEST_ASSERT_EQUALS(n==0,sum==10);

    return 0;
}
