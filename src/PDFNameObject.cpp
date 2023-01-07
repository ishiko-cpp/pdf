/*
    Copyright (c) 2011-2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#include "PDFNameObject.hpp"

using namespace Ishiko;

PDFNameObject::PDFNameObject(const char* name)
    : m_data(name)
{
}

bool PDFNameObject::operator<(const PDFNameObject& other) const
{
    return (m_data < other.m_data);
}

void PDFNameObject::serialize(PDFOutputStream& output_stream) const
{
    // TODO : the name needs to be encoding according to precise rules
    output_stream.write("/");
    output_stream.write(m_data);
}
