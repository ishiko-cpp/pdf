/*
    Copyright (c) 20211-2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#ifndef GUARD_ISHIKO_CPP_PDF_PDFNAMEOBJECT_HPP
#define GUARD_ISHIKO_CPP_PDF_PDFNAMEOBJECT_HPP

#include "PDFObject.hpp"
#include "PDFOutputStream.hpp"
#include <string>

namespace Ishiko
{
    class PDFNameObject : public PDFObject
    {
    public:
        PDFNameObject(const char* name);

        bool operator<(const PDFNameObject& other) const;

        void serialize(PDFOutputStream& output_stream) const;

    private:
        std::string m_data;
    };
}

#endif
