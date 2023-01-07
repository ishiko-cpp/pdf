/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#ifndef GUARD_ISHIKO_CPP_PDF_PDFOUTPUTSTREAM_HPP
#define GUARD_ISHIKO_CPP_PDF_PDFOUTPUTSTREAM_HPP

#include <Ishiko/FileSystem.hpp>
#include <boost/filesystem.hpp>

namespace Ishiko
{
    class PDFOutputStream
    {
    public:
        static PDFOutputStream Create(const boost::filesystem::path& path, Error& error);

        void create(const boost::filesystem::path& path, Error& error);
        void close();

        void write(const char* str);

    private:
        TextFile m_file;
    };
}

#endif
