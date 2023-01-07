/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#include "PDFDictionaryObjectTests.hpp"
#include "Ishiko/PDF/PDFDictionaryObject.hpp"

using namespace Ishiko;

PDFDictionaryObjectTests::PDFDictionaryObjectTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "PDFDictionaryObject tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void PDFDictionaryObjectTests::ConstructorTest1(Test& test)
{
    PDFDictionaryObject pdf_dictionary_object;

    ISHIKO_TEST_PASS();
}
