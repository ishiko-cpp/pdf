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
    append<HeapAllocationErrorsTest>("write test 1", WriteTest1);
    append<HeapAllocationErrorsTest>("write test 2", WriteTest2);
}

void PDFOutputStreamTests::ConstructorTest1(Test& test)
{
    PDFOutputStream pdf_output_stream;

    ISHIKO_TEST_PASS();
}

void PDFOutputStreamTests::WriteTest1(Test& test)
{
    const char* output_name = "PDFOutputStreamTests_WriteTest1.txt";

    Error error;
    PDFOutputStream pdf_output_stream = PDFOutputStream::Create(test.context().getOutputPath(output_name), error);

    ISHIKO_TEST_ABORT_IF(error);

    pdf_output_stream.write("hello");

    pdf_output_stream.close();

    ISHIKO_TEST_FAIL_IF_OUTPUT_AND_REFERENCE_FILES_NEQ(output_name);
    ISHIKO_TEST_PASS();
}

void PDFOutputStreamTests::WriteTest2(Test& test)
{
    const char* output_name = "PDFOutputStreamTests_WriteTest2.txt";

    Error error;
    PDFOutputStream pdf_output_stream = PDFOutputStream::Create(test.context().getOutputPath(output_name), error);

    ISHIKO_TEST_ABORT_IF(error);

    std::string str{"hello"};
    pdf_output_stream.write(str);

    pdf_output_stream.close();

    ISHIKO_TEST_FAIL_IF_OUTPUT_AND_REFERENCE_FILES_NEQ(output_name);
    ISHIKO_TEST_PASS();
}
