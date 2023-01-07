/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#include "PDFBodyTests.hpp"
#include "PDFCrossReferenceTableTests.hpp"
#include "PDFDictionaryObjectTests.hpp"
#include "PDFFileTests.hpp"
#include "PDFHeaderTests.hpp"
#include "PDFTrailerTests.hpp"
#include <Ishiko/TestFramework/Core.hpp>

using namespace Ishiko;

int main(int argc, char* argv[])
{
    try
    {
        TestHarness::CommandLineSpecification commandLineSpec;
        Configuration configuration = commandLineSpec.createDefaultConfiguration();
        CommandLineParser::parse(commandLineSpec, argc, argv, configuration);

        TestHarness theTestHarness("Ishiko/C++ PDF Library Tests", configuration);

        TestSequence& theTests = theTestHarness.tests();
        theTests.append<PDFDictionaryObjectTests>();
        theTests.append<PDFHeaderTests>();
        theTests.append<PDFBodyTests>();
        theTests.append<PDFCrossReferenceTableTests>();
        theTests.append<PDFTrailerTests>();
        theTests.append<PDFFileTests>();

        return theTestHarness.run();
    }
    catch (const std::exception& e)
    {
        return TestApplicationReturnCode::exception;
    }
    catch (...)
    {
        return TestApplicationReturnCode::exception;
    }
}
