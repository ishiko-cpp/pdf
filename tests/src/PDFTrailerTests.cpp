/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#include "PDFTrailerTests.hpp"
#include "Ishiko/PDF/PDFTrailer.hpp"

using namespace Ishiko;

PDFTrailerTests::PDFTrailerTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "PDFTrailer tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void PDFTrailerTests::ConstructorTest1(Test& test)
{
    PDFTrailer pdf_trailer;

    ISHIKO_TEST_PASS();
}
