/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#ifndef GUARD_ISHIKO_CPP_PDF_PDFHEADER_HPP
#define GUARD_ISHIKO_CPP_PDF_PDFHEADER_HPP

#include "PDFOutputStream.hpp"

namespace Ishiko
{
    class PDFHeader
    {
    public:
        void serialize(PDFOutputStream& output_stream) const;
    };
}

#endif
