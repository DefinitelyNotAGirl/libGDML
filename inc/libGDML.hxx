/*
 * Created Date: Saturday July 1st 2023
 * Author: Lilith
 * -----
 * Last Modified: Saturday July 1st 2023 11:13:46 pm
 * Modified By: Lilith (definitelynotagirl115169@gmail.com)
 * -----
 * Copyright (c) 2023 DefinitelyNotAGirl@github
 * 
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */
#pragma once
#include <string>
#include <cstdint>

#ifndef GDML_FULL_H // dont include this header if gdml.hxx has already been included
                    // this header is just a subset of gdml.hxx

#define gdml_repoId_core            0x01
#define gdml_repoId_testenv         0x02
#define gdml_repoId_buildsys        0x03
#define gdml_repoId_toolchain       0x04
#define gdml_repoId_languagesupport 0x05
#define gdml_repoId_docgen          0x06

extern std::string content;

struct GDML_TYPE
{
    std::string name;
    std::string link;
};

#endif