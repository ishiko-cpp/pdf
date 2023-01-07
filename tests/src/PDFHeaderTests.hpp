/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#ifndef GUARD_ISHIKO_CPP_PDF_TESTS_PDFHEADERTESTS_HPP
#define GUARD_ISHIKO_CPP_PDF_TESTS_PDFHEADERTESTS_HPP

#include <Ishiko/TestFramework/Core.hpp>

class PDFHeaderTests : public Ishiko::TestSequence
{
public:
    PDFHeaderTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Test& test);
};

#endif
