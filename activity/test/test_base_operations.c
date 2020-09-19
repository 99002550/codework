#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>
//#include <math.h>

/* Modify these two lines according to the project */
#include <base.h>
#define PROJECT_NAME    "base"

/* Prototypes for all the test functions */
void test_bin2dec(void);
void test_dec2bin(void);
void test_oct2dec(void);
void test_dec2oct(void);
void test_dec2hex(void);
void test_bin2oct(void);

/*void test_notprime(void);*/


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "bin2dec", test_bin2dec);
  CU_add_test(suite, "dec2bin", test_dec2bin);
  CU_add_test(suite, "oct2dec", test_oct2dec);
  CU_add_test(suite, "dec2oct", test_dec2oct);
  CU_add_test(suite, "dec2hex", test_dec2hex);
  CU_add_test(suite, "bin2oct", test_bin2oct);
  //CU_add_test(suite, "not prime", test_notprime);
  
/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_bin2dec(void) {
  CU_ASSERT(439== convertbinarytodecimal(110110111));
   
  
  
}
void test_dec2bin(void) {
  CU_ASSERT(1010== convertdecimaltobinary(10));
   
  
  
}
void test_oct2dec(void) {
  CU_ASSERT(10== convertOctalToDecimal(88));
   
  
  
}
void test_dec2oct(void) {
  CU_ASSERT(12== convertDecimalToOctal(10));
   
  
  
}
void test_dec2hex(void) {
  CU_ASSERT(A== decimal_to_hexadecimal(10));
   
  
  
}
void test_bin2oct(void) {
  CU_ASSERT(17== convertbitooctal(1111));
   
  
  
}




