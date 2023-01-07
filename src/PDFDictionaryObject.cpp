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

void PDFDictionaryObject::serialize(PDFOutputStream& output_stream) const
{
	// TODO
	output_stream.write("<<\n");
	output_stream.incrementIndentation();
	for (const std::pair<const PDFNameObject, std::unique_ptr<PDFObject>>& entry : m_entries)
	{
		output_stream.writeIndentation();
		entry.first.serialize(output_stream);
		output_stream.write(" ");
		entry.second->serialize(output_stream);
		output_stream.write("\n");
	}
	output_stream.decrementIndentation();
	output_stream.writeIndentation();
	output_stream.write(">>");
}
