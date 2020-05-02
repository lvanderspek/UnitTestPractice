/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};


TEST(PracticeTest, sort_inorder)
{
    int one = 3;
    int two = 2;
    int thr = 1;

    Practice obj;
    obj.sortDescending(one, two, thr);

    ASSERT_EQ(3, one);
    ASSERT_EQ(2, two);
    ASSERT_EQ(1, thr);
}

TEST(PracticeTest, sort_large_last)
{
    int one = 2;
    int two = 3;
    int thr = 1;

    Practice obj;
    obj.sortDescending(one, two, thr);

    ASSERT_EQ(3, one);
    ASSERT_EQ(2, two);
    ASSERT_EQ(1, thr);
}

TEST(PracticeTest, sort_small_first)
{
    int one = 1;
    int two = 3;
    int thr = 2;

    Practice obj;
    obj.sortDescending(one, two, thr);

    ASSERT_EQ(3, one);
    ASSERT_EQ(2, two);
    ASSERT_EQ(1, thr);
}

TEST(PracticeTest, sort_large_sandwich)
{
    int one = 2;
    int two = 1;
    int thr = 2;

    Practice obj;
    obj.sortDescending(one, two, thr);

    ASSERT_EQ(2, one);
    ASSERT_EQ(2, two);
    ASSERT_EQ(1, thr);
}

TEST(PracticeTest, sort_dual_large_last)
{
    int one = 1;
    int two = 2;
    int thr = 2;

    Practice obj;
    obj.sortDescending(one, two, thr);

    ASSERT_EQ(2, one);
    ASSERT_EQ(2, two);
    ASSERT_EQ(1, thr);
}

TEST(PracticeTest, sort_dual_small_first)
{
    int one = 1;
    int two = 1;
    int thr = 2;

    Practice obj;
    obj.sortDescending(one, two, thr);

    ASSERT_EQ(2, one);
    ASSERT_EQ(1, two);
    ASSERT_EQ(1, thr);
}









TEST(PracticeTest, empty_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, single_character)
{
    Practice obj;
    bool actual = obj.isPalindrome("a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_large_palindrome_odd)
{
    Practice obj;
    bool actual = obj.isPalindrome("abababa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_large_palindrome_even)
{
    Practice obj;
    bool actual = obj.isPalindrome("ababbaba");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome_caps)
{
    Practice obj;
    bool actual = obj.isPalindrome("aBabbaba");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ba");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_not_large_palindrome_odd)
{
    Practice obj;
    bool actual = obj.isPalindrome("bbababa");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_not_large_palindrome_even)
{
    Practice obj;
    bool actual = obj.isPalindrome("bbabbaba");
    ASSERT_FALSE(actual);
}


TEST(PracticeTest, is_not_palindrome_caps)
{
    Practice obj;
    bool actual = obj.isPalindrome("Babbaba");
    ASSERT_FALSE(actual);
}
