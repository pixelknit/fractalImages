/*
 * BitmanFileHeader.h
 *
 *  Created on: 5 Jan 2023
 *      Author: felipepesantez
 */

#ifndef BITMANFILEHEADER_H_
#define BITMANFILEHEADER_H_

#include <cstdint>

using namespace std;

#pragma pack(2)

namespace felipe{
struct BitmapFileHeader{
    char header[2]{'B','M'};
    int32_t fileSize;
    int32_t reserved{0};
    int32_t dataOffset;

};
}




#endif /* BITMANFILEHEADER_H_ */
