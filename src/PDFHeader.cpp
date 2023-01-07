/*
    Copyright (c) 2011-2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#include "PDFHeader.hpp"

using namespace Ishiko;

void PDFHeader::serialize(PDFOutputStream& output_stream) const
{
    output_stream.write("%PDF-1.7\n");
}
