/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#include "PDFNameObjectTests.hpp"
#include "Ishiko/PDF/PDFNameObject.hpp"
#include "Ishiko/PDF/PDFOutputStream.hpp"

using namespace Ishiko;

PDFNameObjectTests::PDFNameObjectTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "PDFNameObject tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
    append<HeapAllocationErrorsTest>("operator< test 1", LessThanOperatorTest1);
    append<HeapAllocationErrorsTest>("serialize test 1", SerializeTest1);
}

void PDFNameObjectTests::ConstructorTest1(Test& test)
{
    PDFNameObject pdf_name_object{"name"};

    ISHIKO_TEST_PASS();
}

void PDFNameObjectTests::LessThanOperatorTest1(Test& test)
{
    PDFNameObject pdf_name_object_1{"name 1"};
    PDFNameObject pdf_name_object_2{"name 1"};
    PDFNameObject pdf_name_object_3{"name 3"};

    ISHIKO_TEST_FAIL_IF_NOT(pdf_name_object_1 < pdf_name_object_3);
    ISHIKO_TEST_FAIL_IF(pdf_name_object_1 < pdf_name_object_2);
    ISHIKO_TEST_FAIL_IF(pdf_name_object_3 < pdf_name_object_1);
    ISHIKO_TEST_PASS();
}

void PDFNameObjectTests::SerializeTest1(Ishiko::Test& test)
{
    const char* output_name = "PDFNameObjectTests_SerializeTest1.txt";

    Error error;
    PDFOutputStream pdf_output_stream = PDFOutputStream::Create(test.context().getOutputPath(output_name), error);

    ISHIKO_TEST_ABORT_IF(error);

    PDFNameObject pdf_name_object{"name"};
    pdf_name_object.serialize(pdf_output_stream);

    pdf_output_stream.close();

    ISHIKO_TEST_FAIL_IF_OUTPUT_AND_REFERENCE_FILES_NEQ(output_name);
    ISHIKO_TEST_PASS();
}
