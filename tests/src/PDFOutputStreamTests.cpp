/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#include "PDFOutputStreamTests.hpp"
#include "Ishiko/PDF/PDFOutputStream.hpp"

using namespace Ishiko;

PDFOutputStreamTests::PDFOutputStreamTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "PDFOutputStream tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void PDFOutputStreamTests::ConstructorTest1(Test& test)
{
    PDFOutputStream pdf_output_stream;

    ISHIKO_TEST_PASS();
}
