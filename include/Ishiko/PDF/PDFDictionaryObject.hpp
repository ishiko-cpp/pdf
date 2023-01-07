/*
    Copyright (c) 2011-2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#ifndef GUARD_ISHIKO_CPP_PDF_PDFDICTIONARYOBJECT_HPP
#define GUARD_ISHIKO_CPP_PDF_PDFDICTIONARYOBJECT_HPP

#include "PDFNameObject.hpp"
#include "PDFObject.hpp"
#include <map>
#include <memory>

namespace Ishiko
{
    class PDFDictionaryObject : public PDFObject
    {
    public:
        void set(const PDFNameObject& key, std::unique_ptr<PDFObject> value);

    private:
        std::map<PDFNameObject, std::unique_ptr<PDFObject>> m_entries;
    };
}

#endif
