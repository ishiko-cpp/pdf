/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#include "PDFLiteralStringObjectTests.hpp"
#include "Ishiko/PDF/PDFLiteralStringObject.hpp"

using namespace Ishiko;

PDFLiteralStringObjectTests::PDFLiteralStringObjectTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "PDFLiteralStringObject tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void PDFLiteralStringObjectTests::ConstructorTest1(Test& test)
{
    PDFLiteralStringObject pdf_literal_string_object{"string"};

    ISHIKO_TEST_PASS();
}
