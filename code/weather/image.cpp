#include <string>
using namespace std;
#include "image.h"


Image::Image(int width, int height, string flnm) 
    : width(width), height(height)
{
    image_buf = new unsigned char[image_sz()];
}

// copy constructor:
Image::Image(const Image& img2)
{
    copy_fields(img2);
}

Image::~Image()
{
    if (image_buf != nullptr) delete image_buf;
}

Image& Image::operator=(const Image& img2)
{
    if (image_buf != nullptr) delete image_buf;
    copy_fields(img2);
    return *this;
}

int Image::image_sz() { return width * height; }

void Image::copy_fields(const Image& img2)
{
    width = img2.width;
    height = img2.height;
    image_buf = new unsigned char[image_sz()];
    memcpy(image_buf, img2.image_buf, image_sz());
}



