/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#include "PDFOutputStream.hpp"

using namespace Ishiko;

PDFOutputStream PDFOutputStream::Create(const boost::filesystem::path& path, Error& error)
{
    PDFOutputStream new_output_stream;
    new_output_stream.create(path.c_str(), error);
    return new_output_stream;
}

void PDFOutputStream::create(const boost::filesystem::path& path, Error& error)
{
    m_file.create(path.c_str(), error);
}

void PDFOutputStream::close()
{
    m_file.close();
}

void PDFOutputStream::write(const char* str)
{
    m_file.write(str);
}
