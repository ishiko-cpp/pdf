/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#include "PDFDictionaryObjectTests.hpp"
#include "Ishiko/PDF/PDFDictionaryObject.hpp"
#include "Ishiko/PDF/PDFLiteralStringObject.hpp"

using namespace Ishiko;

PDFDictionaryObjectTests::PDFDictionaryObjectTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "PDFDictionaryObject tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
    append<HeapAllocationErrorsTest>("serialize test 1", SerializeTest1);
    append<HeapAllocationErrorsTest>("serialize test 2", SerializeTest2);
    append<HeapAllocationErrorsTest>("serialize test 3", SerializeTest3);
}

void PDFDictionaryObjectTests::ConstructorTest1(Test& test)
{
    PDFDictionaryObject pdf_dictionary_object;

    ISHIKO_TEST_PASS();
}

void PDFDictionaryObjectTests::SerializeTest1(Ishiko::Test& test)
{
    const char* output_name = "PDFDictionaryObjectTests_SerializeTest1.txt";

    Error error;
    PDFOutputStream pdf_output_stream = PDFOutputStream::Create(test.context().getOutputPath(output_name), error);

    ISHIKO_TEST_ABORT_IF(error);

    PDFDictionaryObject pdf_dictionary_object;
    pdf_dictionary_object.serialize(pdf_output_stream);

    pdf_output_stream.close();

    ISHIKO_TEST_FAIL_IF_OUTPUT_AND_REFERENCE_FILES_NEQ(output_name);
    ISHIKO_TEST_PASS();
}

void PDFDictionaryObjectTests::SerializeTest2(Ishiko::Test& test)
{
    const char* output_name = "PDFDictionaryObjectTests_SerializeTest2.txt";

    Error error;
    PDFOutputStream pdf_output_stream = PDFOutputStream::Create(test.context().getOutputPath(output_name), error);

    ISHIKO_TEST_ABORT_IF(error);

    PDFDictionaryObject pdf_dictionary_object;
    std::unique_ptr<PDFLiteralStringObject> item_1{new PDFLiteralStringObject("Hello World!")};
    pdf_dictionary_object.set("Message", std::move(item_1));
    pdf_dictionary_object.serialize(pdf_output_stream);

    pdf_output_stream.close();

    ISHIKO_TEST_FAIL_IF_OUTPUT_AND_REFERENCE_FILES_NEQ(output_name);
    ISHIKO_TEST_PASS();
}

void PDFDictionaryObjectTests::SerializeTest3(Ishiko::Test& test)
{
    const char* output_name = "PDFDictionaryObjectTests_SerializeTest3.txt";

    Error error;
    PDFOutputStream pdf_output_stream = PDFOutputStream::Create(test.context().getOutputPath(output_name), error);

    ISHIKO_TEST_ABORT_IF(error);

    PDFDictionaryObject pdf_dictionary_object;
    std::unique_ptr<PDFLiteralStringObject> item_1{new PDFLiteralStringObject("Hello World!")};
    pdf_dictionary_object.set("Message1", std::move(item_1));
    std::unique_ptr<PDFLiteralStringObject> item_2{new PDFLiteralStringObject("Bye World!")};
    pdf_dictionary_object.set("Message2", std::move(item_2));
    pdf_dictionary_object.serialize(pdf_output_stream);

    pdf_output_stream.close();

    ISHIKO_TEST_FAIL_IF_OUTPUT_AND_REFERENCE_FILES_NEQ(output_name);
    ISHIKO_TEST_PASS();
}
