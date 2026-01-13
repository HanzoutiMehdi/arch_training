#ifdef TEST

#include "unity.h"
#include "stdint.h"
#include "processing.h"
#include "mock_util.h"
#include "mock_led.h"


void setUp(void)
{
    led_red_control_Ignore();
    led_green_control_Ignore();
    led_blue_control_Ignore();
}


void tearDown(void)
{
}



void test_module1_THREHSOLD1()
{
	uint8_t ret;
	int16_t Pattern[]={-101,1,4};


	ret=process_data(Pattern);

	TEST_ASSERT_EQUAL(ret,0 );


}
void test_module1_THREHSOLD2()
{
	uint8_t ret;
	int16_t Pattern[]={101,1,4};


	ret=process_data(Pattern);

	TEST_ASSERT_EQUAL(ret,4 );


}

#endif // TEST
