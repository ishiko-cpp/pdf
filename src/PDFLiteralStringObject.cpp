/*
    Copyright (c) 2011-2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#include "PDFLiteralStringObject.hpp"

using namespace Ishiko;

PDFLiteralStringObject::PDFLiteralStringObject(const char* str)
    : m_data{str}
{
}

void PDFLiteralStringObject::serialize(PDFOutputStream& output_stream) const
{
    // TODO
    output_stream.write("(");
    output_stream.write(m_data);
    output_stream.write(")");
}
