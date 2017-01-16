#include <ctest.h>
#include <sqr_eqn.h>

CTEST(sqrt_suite, root_test_two)
{
	//Given
	const double a = 4.00;
	const double b = -3.00;
	const double c = 2.00;

	//When
	double x1 = 0, x2 = 0;
	const int status = resolve(a, b, c, &x1, &x2);

	//Then
	const double expected_x1 = 2.00;
	const double expected_x2 = 1.00;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
	ASSERT_EQUAL(2, status);
}

CTEST(sqrt_suite, root_test_one)
{
	//Given
	const double a = 1.00;
	const double b = -2.00;
	const double c = 1.00;

	//When
	double x1 = 0, x2 = 0;
	const int status = resolve(a, b, c, &x1, &x2);

	//Then
	const double expected_x1 = 1.00;
	const double expected_x2 = expected_x1;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
	ASSERT_EQUAL(1, status);
}

CTEST(sqrt_suite, root_test_one2)
{
	//Given
	const double a = 1.00;
	const double b = -4.00;
	const double c = 4.00;

	//When
	double x1 = 0, x2 = 0;
	const int status = resolve(a, b, c, &x1, &x2);

	//Then
	const double expected_x1 = 2.00;
	const double expected_x2 = expected_x1;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
	ASSERT_EQUAL(1, status);
}
CTEST(sqrt_suite, root_test_two2)
{
	//Given
	const double a = 1.00;
	const double b = 1.00;
	const double c = -6.00;

	//When
	double x1 = 0, x2 = 0;
	const int status = resolve(a, b, c, &x1, &x2);

	//Then
	const double expected_x1 = 2.00;
	const double expected_x2 = -3.00;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
	ASSERT_EQUAL(2, status);
}

CTEST(sqrt_suite, root_test_zero)
{
	//Given
	const double a = 1.00;
	const double b = -1.00;
	const double c = 10.00;

	//When
	double x1 = 0, x2 = 0;
	const int status = resolve(a, b, c, &x1, &x2);

	//Then
	const double expected_x1 = 0.00;
	const double expected_x2 = 0.00;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
	ASSERT_EQUAL(0, status);
}

CTEST(sqrt_suite, root_test_zero2)
{
	//Given
	const double a = 1.00;
	const double b = -2.00;
	const double c = 100.00;

	//When
	double x1 = 0, x2 = 0;
	const int status = resolve(a, b, c, &x1, &x2);

	//Then
	const double expected_x1 = 0.00;
	const double expected_x2 = 0.00;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
	ASSERT_EQUAL(0, status);
}

CTEST(sqrt_suite, root_test_a0)
{
	//Given
	const double a = 0.00;
	const double b = -2.00;
	const double c = 100.00;

	//When
	double x1 = 0, x2 = 0;
	const int status = resolve(a, b, c, &x1, &x2);

	//Then
	const double expected_x1 = 0.00;
	const double expected_x2 = 0.00;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
	ASSERT_EQUAL(-1, status);
}

CTEST(sqrt_suite, root_test_b0)
{
	//Given
	const double a = 2.00;
	const double b = 0.00;
	const double c = -8.00;

	//When
	double x1 = 0, x2 = 0;
	const int status = resolve(a, b, c, &x1, &x2);

	//Then
	const double expected_x1 = 8.00;
	const double expected_x2 = -8.00;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
	ASSERT_EQUAL(2, status);
}

CTEST(sqrt_suite, root_test_c0)
{
	//Given
	const double a = 1.00;
	const double b = -2.00;
	const double c = 0.00;

	//When
	double x1 = 0, x2 = 0;
	const int status = resolve(a, b, c, &x1, &x2);

	//Then
	const double expected_x1 = 2.00;
	const double expected_x2 = 0.00;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
	ASSERT_EQUAL(2, status);
}

CTEST(sqrt_suite, root_test_a0_b0)
{
	//Given
	const double a = 0.00;
	const double b = 0.00;
	const double c = 5.00;

	//When
	double x1 = 0, x2 = 0;
	const int status = resolve(a, b, c, &x1, &x2);

	//Then
	const double expected_x1 = 0.00;
	const double expected_x2 = 0.00;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
	ASSERT_EQUAL(-1, status);
}


