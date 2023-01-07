/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#include "PDFHeaderTests.hpp"
#include "Ishiko/PDF/PDFHeader.hpp"

using namespace Ishiko;

PDFHeaderTests::PDFHeaderTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "PDFHeader tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void PDFHeaderTests::ConstructorTest1(Test& test)
{
    PDFHeader pdf_header;

    ISHIKO_TEST_PASS();
}
