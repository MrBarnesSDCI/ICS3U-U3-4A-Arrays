// Test definitions. Do NOT edit this file!

#include <tuple>

#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"

#include "student.hpp" // student implementations

//TESTS

TEST_CASE("Exercise Two") //Named ExerciseOne, tagged with example
{
    //Arrays to check, can't pass in raw array data
    int arr2_1[10] = {-80, -13, -79, -61, 23, 95, 49, 100, -13, -65};
    int arr2_2[1] = {5};
    int arr2_3[5] = {84, 19, -12, 67, 31};
    int arr2_4[5] = {-24, 26, 94, -80, 66};
    int arr2_5[100] ={-60, -38, -46, -93, 68, 97, -91, -57, -45, -78, -39, -71, -45, 84, 38, 87, 33, 55, -2, 99, -8, 93, -13, -100, 7, 98, -44, 54, -19, -94, 82, -59, -71, 48, -85, 70, -42, -17, 17, -32, -60, -87, 73, -33, 41, -28, 66, -40, 38, -23, 86, -98, 51, 60, 5, 12, -72, 91, 1, 16, 51, 44, -59, 93, -77, 74, -38, 70, 21, 48, -69, -29, 59, 10, 27, 30, 86, -32, 39, -37, 86, -81, -15, 12, -94, 64, 84, 44, 45, 76, -24, -79, -92, 61, -50, 41, 7, 32, 67, 28};

    //Runnning the checks
    CHECK(exerciseTwo(arr2_1, 10) == -4.4);
    CHECK(exerciseTwo(arr2_2,1 == 5));
    CHECK(exerciseTwo(arr2_3,5) == 37.8);
    CHECK(exerciseTwo(arr2_4,5) == 16.4);
    CHECK(exerciseTwo(arr2_5,100) == 4.03);
}

TEST_CASE("Exercise Three")
{
    //Arrays to check
    int arr3_1[5] = {-90, -13, 37, 91, -80};
    int arr3_2[5] = {294, -987, -519, 854, -755};
    int arr3_3[1] = {9000};
    int arr3_4[1] = {-841};
    int arr3_5[2] = {-241, -842};
    int arr3_6[30] = {680, -127, 387, -317, -988, 22, -776, 217, -373, 225, -331, -716, 994, 170, 972, -934, -328, 419, 319, 108, -737, 88, -739, -694, -938, -491, -608, 471, 669, 603};
    int arr3_7[30] = {-296, -105, -875, 66, 136, 555, 67, -391, -57, 791, 129, 718, 193, -431, -365, -821, -611, 188, -605, -47};

    CHECK(exerciseThree(arr3_1,5) == 91);
    CHECK(exerciseThree(arr3_2, 5) == 854);
    CHECK(exerciseThree(arr3_3,1) == 9000);
    CHECK(exerciseThree(arr3_4,1) == -841);
    CHECK(exerciseThree(arr3_5,2) == -241);
    CHECK(exerciseThree(arr3_6,30) == 994);
    CHECK(exerciseThree(arr3_7,20) == 791);
}
// Notes for teacher: 
// can use variables and libraries
// can use logic operators and loops
// you can run a specific test by using ./tests <TEST CASE NAME HERE>


