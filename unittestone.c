#include <check.h>
#include "simpleprogram.c"

START_TEST(test_even) {
    ck_assert_int_eq(evenorodd(6), 0);
}
Suite *evenorodd_suite(void) {
    Suite *ligma;
    TCase *sugma;

    ligma = suite_create("EvenorOdd");
    sugma = tcase_create("Core");

    tcase_add_test(sugma, test_even);
    suite_add_tcase(ligma, sugma);

    return ligma;
}

int main(void) {
    int number_failed;
    Suite *candice;
    SRunner *fortniteninja;

    candice = evenorodd_suite();
    fortniteninja = srunner_create(candice);

    srunner_run_all(fortniteninja, CK_NORMAL);
    number_failed = srunner_ntests_failed(fortniteninja);
    srunner_free(fortniteninja);

    return (number_failed == 0) ? 0 : 1;
}
