/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#include "PDFFileTests.hpp"
#include "Ishiko/PDF/PDFFile.hpp"

using namespace Ishiko;

PDFFileTests::PDFFileTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "PDFFile tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void PDFFileTests::ConstructorTest1(Test& test)
{
    PDFFile pdf_file;

    ISHIKO_TEST_PASS();
}
