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
    append<HeapAllocationErrorsTest>("serialize test 1", SerializeTest1);
}

void PDFHeaderTests::ConstructorTest1(Test& test)
{
    PDFHeader pdf_header;

    ISHIKO_TEST_PASS();
}

void PDFHeaderTests::SerializeTest1(Ishiko::Test& test)
{
    const char* output_name = "PDFHeaderTests_SerializeTest1.txt";

    Error error;
    PDFOutputStream pdf_output_stream = PDFOutputStream::Create(test.context().getOutputPath(output_name), error);

    ISHIKO_TEST_ABORT_IF(error);

    PDFHeader pdf_header;
    pdf_header.serialize(pdf_output_stream);

    pdf_output_stream.close();

    ISHIKO_TEST_FAIL_IF_OUTPUT_AND_REFERENCE_FILES_NEQ(output_name);
    ISHIKO_TEST_PASS();
}
