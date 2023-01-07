/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#include "PDFCrossReferenceTableTests.hpp"
#include "Ishiko/PDF/PDFCrossReferenceTable.hpp"

using namespace Ishiko;

PDFCrossReferenceTableTests::PDFCrossReferenceTableTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "PDFCrossReferenceTable tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void PDFCrossReferenceTableTests::ConstructorTest1(Test& test)
{
    PDFCrossReferenceTable pdf_cross_reference_table;

    ISHIKO_TEST_PASS();
}
