//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ImageHomographyResampler : NSObject
{
    double homographyMatrix[9];
}

- (short)ResampleCVPixels:(struct __CVBuffer )arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3 toPixelBuffer:(struct __CVBuffer )arg4;
- (void)ClearOutOfBoundsPixels:(struct WorkingPixmapRecord )arg1;
- (void)EraseCVPixelBuffer:(struct __CVBuffer )arg1;
- (struct __CVBuffer )ResampleCVPixels:(struct __CVBuffer )arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3;
- (CGImage )ResampleCGImage:(CGImage )arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3;
- (void)setHomographyMatrix:(double )arg1;
- (id)init;

@end
