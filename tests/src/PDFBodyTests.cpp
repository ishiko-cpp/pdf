/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#include "PDFBodyTests.hpp"
#include "Ishiko/PDF/PDFBody.hpp"

using namespace Ishiko;

PDFBodyTests::PDFBodyTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "PDFBody tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void PDFBodyTests::ConstructorTest1(Test& test)
{
    PDFBody pdf_body;

    ISHIKO_TEST_PASS();
}
