//
//  LLImageCrop.h
//
//  Created by 李世航 on 2018/12/3.
//

#ifndef LLImageCrop_h
#define LLImageCrop_h

/**
 The shape of the cropping region of this crop view controller
 */
typedef NS_ENUM(NSInteger, LLCropViewCroppingStyle) {
    LLCropViewCroppingStyleDefault, // The regular, rectangular crop box
    LLCropViewCroppingStyleCircular // A fixed, circular crop box
};

/**
 Preset values of the most common aspect ratios that can be used to quickly configure
 the crop view controller.
 */
typedef NS_ENUM(NSInteger, LLCropViewControllerAspectRatioPreset) {
    LLCropViewControllerAspectRatioPresetOriginal,
    LLCropViewControllerAspectRatioPresettSquare,
    LLCropViewControllerAspectRatioPreset3x2,
    LLCropViewControllerAspectRatioPreset5x3,
    LLCropViewControllerAspectRatioPreset4x3,
    LLCropViewControllerAspectRatioPreset5x4,
    LLCropViewControllerAspectRatioPreset7x5,
    LLCropViewControllerAspectRatioPreset16x9,
    LLCropViewControllerAspectRatioPresetCustom
};

#endif /* LLImageCrop_h */
