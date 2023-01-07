/*
    Copyright (c) 2011-2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#ifndef GUARD_ISHIKO_CPP_PDF_PDFFILE_HPP
#define GUARD_ISHIKO_CPP_PDF_PDFFILE_HPP

#include "PDFBody.hpp"
#include "PDFCrossReferenceTable.hpp"
#include "PDFHeader.hpp"
#include "PDFTrailer.hpp"
#include "PDFOutputStream.hpp"

namespace Ishiko
{
    class PDFFile
    {
    public:
        void serialize(PDFOutputStream& output_stream) const;

    private:
        PDFHeader m_header;
        PDFBody m_body;
        PDFCrossReferenceTable m_cross_reference_table;
        PDFTrailer m_trailer;
    };
}

#endif
