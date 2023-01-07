/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#ifndef GUARD_ISHIKO_CPP_PDF_TESTS_PDFNAMEOBJECTTESTS_HPP
#define GUARD_ISHIKO_CPP_PDF_TESTS_PDFNAMEOBJECTTESTS_HPP

#include <Ishiko/TestFramework/Core.hpp>

class PDFNameObjectTests : public Ishiko::TestSequence
{
public:
    PDFNameObjectTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Test& test);
    static void LessThanOperatorTest1(Ishiko::Test& test);
    static void SerializeTest1(Ishiko::Test& test);
};

#endif
