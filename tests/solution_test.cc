#include "src/lib/solution.h"
#include "gtest/gtest.h"
using namespace std;

TEST(Test1, Handle1) {
  Solution solution;
  std::string from = "add";
  std::string to = "egg";
  solution.Mapping(from, to);
  std::string expected = "{ (a->e) (d->g) }";
  EXPECT_EQ(solution.Mapping(from, to), true);
}

TEST(Test2, Handle2) {
  Solution solution;
  std::string from2 = "extreme";
  std::string to2 = "egg";
  solution.Mapping(from2, to2);
  std::string expected = "{}";
  EXPECT_EQ(solution.Mapping(from2, to2), false);
}

TEST(Test3, Handle3) {
  Solution solution;
  std::string from3 = "harder";
  std::string to3 = "waiter";
  solution.Mapping(from3, to3);
  std::string expected = "{}";
  EXPECT_EQ(solution.Mapping(from3, to3), false);
}

TEST(Test4, Handle4) {
  Solution solution;
  std::string from4 = "aabbrr";
  std::string to4 = "ddeekk";
  solution.Mapping(from4, to4);
  std::string expected = "{ (a->d) (b->e) (r->k) }";
  EXPECT_EQ(solution.Mapping(from4, to4), true);
}