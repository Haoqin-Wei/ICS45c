#include <gtest/gtest.h>

#include "convert_knots.hpp"
#include "stack.hpp"
#include "letter_count.hpp"

TEST(StudentKnots, ThreeKnots) {
    EXPECT_NEAR(0.0575, knots_to_miles_per_minute(3), 0.01);
}

TEST(StudentStack, LIFO) {
    Stack st;

    st.push('a');
    st.push('b');
    st.push('c');

    EXPECT_EQ('c', st.pop());
    EXPECT_EQ('b', st.pop());
    EXPECT_EQ('a', st.pop());
}

TEST(StudentStack, EmptyBehavior) {
    Stack st;

    EXPECT_TRUE(st.isEmpty());
    EXPECT_EQ('@', st.top());
    EXPECT_EQ('@', st.pop());
}

TEST(StudentCount, CaseInsensitive) {
    int counts[N_CHARS] = {0};

    count("AaBbC!", counts);

    EXPECT_EQ(2, counts[char_to_index('A')]);
    EXPECT_EQ(2, counts[char_to_index('B')]);
    EXPECT_EQ(1, counts[char_to_index('C')]);
}

TEST(StudentCount, IndexConversion) {
    EXPECT_EQ(0, char_to_index('A'));
    EXPECT_EQ(25, char_to_index('Z'));

    EXPECT_EQ('A', index_to_char(0));
    EXPECT_EQ('Z', index_to_char(25));
}

TEST(StudentCount, LowercaseCharToIndex) {
    EXPECT_EQ(0, char_to_index('a'));
    EXPECT_EQ(25, char_to_index('z'));
}

TEST(StudentCount, MiddleLettersBothCases) {
    EXPECT_EQ(12, char_to_index('M'));
    EXPECT_EQ(12, char_to_index('m'));

    EXPECT_EQ(7, char_to_index('H'));
    EXPECT_EQ(7, char_to_index('h'));
}
