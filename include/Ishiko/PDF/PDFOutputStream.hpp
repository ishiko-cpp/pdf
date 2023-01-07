/*
    Copyright (c) 2011-2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#ifndef GUARD_ISHIKO_CPP_PDF_PDFOUTPUTSTREAM_HPP
#define GUARD_ISHIKO_CPP_PDF_PDFOUTPUTSTREAM_HPP

#include <Ishiko/FileSystem.hpp>
#include <boost/filesystem.hpp>
#include <string>

namespace Ishiko
{
    class PDFOutputStream
    {
    public:
        static PDFOutputStream Create(const boost::filesystem::path& path, Error& error);

        void create(const boost::filesystem::path& path, Error& error);
        void close();

        void write(const char* str);
        void write(const std::string& str);
        void incrementIndentation();
        void decrementIndentation();
        void writeIndentation();

    private:
        TextFile m_file;
        std::string m_indentation;
    };
}

#endif
