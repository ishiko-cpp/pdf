/*
    Copyright (c) 2011-2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/pdf/blob/main/LICENSE.txt
*/

#include "PDFDictionaryObject.hpp"

using namespace Ishiko;

void PDFDictionaryObject::set(const PDFNameObject& key, std::unique_ptr<PDFObject> value)
{
    m_entries[key] = std::move(value);
}
