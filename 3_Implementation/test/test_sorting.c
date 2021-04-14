#include "unity.h"


/* Modify these two lines according to the project */
#include "Sorting.h"
#define PROJECT_NAME    "Sorting"

/* Prototypes for all the test functions */

void test_BubbleSort(void);
void test_InsertionSort(void);
void test_SelectionSort(void);
void test_QuickSort(void);
void test_MergeSort(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_BubbleSort);
  RUN_TEST(test_InsertionSort);
  RUN_TEST(test_SelectionSort);
  RUN_TEST(test_QuickSort);
  RUN_TEST(test_MergeSort);
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_BubbleSort(void) {
 int expected[]={10, 12, 13};
   int list[]={10, 13, 12};
   int* actual=BubbleSort(list,3);
   TEST_ASSERT_EQUAL_INT_ARRAY(expected,actual,3);
  
  
}

void test_InsertionSort(void) {
   int expected[]={10, 12, 13};
   int list[]={10, 13, 12};
   int* actual=InsertionSort(list,3);
   TEST_ASSERT_EQUAL_INT_ARRAY(expected,actual,3);
  
  
}

void test_SelectionSort(void) {
   int expected[]={10, 12, 13};
   int list[]={10, 13, 12};
   int* actual=SelectionSort(list,3);
   TEST_ASSERT_EQUAL_INT_ARRAY(expected,actual,3);
  
  /* Dummy fail*/
    int expected1[]={3,4,10, 12};
    int list1[]={10,12,4,3};
    int* actual1=SelectionSort(list1,4);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected1,actual1,4);
}

void test_QuickSort(void) {
   int expected[]={10, 12, 13};
   int list[]={10, 13, 12};
   int* actual=QuickSort(list,0,2);
   TEST_ASSERT_EQUAL_INT_ARRAY(expected,actual,3);
}

void test_MergeSort(void) {
   int expected[]={10, 12, 13};
   int list[]={10, 13, 12};
   int* actual=MergeSort(list,0,2);
   TEST_ASSERT_EQUAL_INT_ARRAY(expected,actual,3);
}



