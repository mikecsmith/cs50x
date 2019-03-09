# Questions

## What's `stdint.h`?

stdint.h is a header file which provides a set of typedefs for specific width integer types.

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

The definitions represent various pieces or types of data i.e. uint8_t represents a byte, uint32_t represents an unsigned int with a length of 32 bits, int32_t is a signed integer with a length of 32 bits and uint16_t is an unsigned int with a length of 16bits. As they're fixed length values


## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

BYTE = 1 byte
DWORD = 4 bytes
LOND = 4 bytes
WORD = 2 bytes

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

0x42 0x4D

## What's the difference between `bfSize` and `biSize`?

bfSize is the size of the BMP in bytes
biSize is the size of the header

## What does it mean if `biHeight` is negative?

It means the BMP is a top-down image with the first pixel starting in the upper left corner.

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

biBitCount

## Why might `fopen` return `NULL` in lines 24 and 32 of `copy.c`?

If a file pointer is not returned for any reason.

## Why is the third argument to `fread` always `1` in our code?

Because we want to read 1 element (or data structure) at a time, as defined by the second argument.

## What value does line 63 of `copy.c` assign to `padding` if `bi.biWidth` is `3`?

3

## What does `fseek` do?

fseek is a function which sets the file position in relationship to an offset - in this case the padding variable. In our usage it skips any padding in the BMP when looping through and changing values.

## What is `SEEK_CUR`?

SEEK_CUR is a constant which means the current position of the file pointer
