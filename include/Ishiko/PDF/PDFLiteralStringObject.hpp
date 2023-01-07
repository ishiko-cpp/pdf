/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#ifndef GUARD_ISHIKO_CPP_PDF_PDFLITERALSTRINGOBJECT_HPP
#define GUARD_ISHIKO_CPP_PDF_PDFLITERALSTRINGOBJECT_HPP

#include "PDFObject.hpp"
#include "PDFOutputStream.hpp"
#include <string>

namespace Ishiko
{
    class PDFLiteralStringObject : public PDFObject
    {
    public:
        PDFLiteralStringObject(const char* str);

        void serialize(PDFOutputStream& output_stream) const;

    private:
        std::string m_data;
    };
}

#endif
