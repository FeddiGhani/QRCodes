//
//  image_data_extractor.hpp
//  QRCode_Mac
//
//  Created by Alexander Graschenkov on 22/11/2018.
//  Copyright © 2018 Alex Development. All rights reserved.
//

#ifndef image_data_extractor_hpp
#define image_data_extractor_hpp

#include <stdio.h>
#include <opencv2/core.hpp>
#include "qr_data_coder.hpp"


QRData getQRBitsData(const cv::Mat &grayImg, int rowSize, cv::Mat *debugImg = nullptr);

#endif /* image_data_extractor_hpp */
