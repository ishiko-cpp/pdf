/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#ifndef GUARD_ISHIKO_CPP_PDF_TESTS_PDFOUTPUTSTREAMTESTS_HPP
#define GUARD_ISHIKO_CPP_PDF_TESTS_PDFOUTPUTSTREAMTESTS_HPP

#include <Ishiko/TestFramework/Core.hpp>

class PDFOutputStreamTests : public Ishiko::TestSequence
{
public:
    PDFOutputStreamTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Test& test);
    static void WriteTest1(Ishiko::Test& test);
    static void WriteTest2(Ishiko::Test& test);
};

#endif
