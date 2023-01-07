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
    m_file.create(path, error);
}

void PDFOutputStream::close()
{
    m_file.close();
}

void PDFOutputStream::write(const char* str)
{
    m_file.write(str);
}

void PDFOutputStream::write(const std::string& str)
{
    m_file.write(str);
}

void PDFOutputStream::incrementIndentation()
{
    m_indentation.push_back('\t');
}

void PDFOutputStream::decrementIndentation()
{
    // TODO: what if negative indentation
    if (!m_indentation.empty())
    {
        m_indentation.resize(m_indentation.size() - 1);
    }
}

void PDFOutputStream::writeIndentation()
{
    m_file.write(m_indentation);
}
