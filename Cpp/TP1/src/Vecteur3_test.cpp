#include "Vecteur3.hpp"
#include <CppUTest/CommandLineTestRunner.h>
TEST_GROUP(Vecteur3Test) { };
TEST(Vecteur3Test, test_vecteur3_1) { // premier test unitaire
  vecteur3 v;
  v.x = 2;
  v.y = 3;
  v.z = 6;
  int result = norme(v);
    CHECK_EQUAL(7, result);
}
TEST(Vecteur3Test, test_doublertest_vecteur3_2) { // deuxième test unitaire
   vecteur3 u;
   u.x = 1;
   u.y = 3;
   u.z = 4;
   int result = norme(u);
   CHECK_EQUAL(4, result);
}


TEST(Vecteur3Test, test_addition) {
  Vecteur3 v1 {2, 3, 6};
  Vecteur3 v2 {-2, 5, 9};
  Vecteur3 result = addition(v1, v2);
  DOUBLES_EQUAL(0.f, result.x, 0.01);
  DOUBLES_EQUAL(8.f, result.y, 0.01);
  DOUBLES_EQUAL(15.f, result.z, 0.01);
}

TEST(Vecteur3Test, test_produitScalaire) {
  Vecteur3 v1 {5, 2, 3};
  Vecteur3 v2 {-2, 5, 1};
  float result = produitScalaire(v1, v2);
  DOUBLES_EQUAL(3, result, 0.01);
}
