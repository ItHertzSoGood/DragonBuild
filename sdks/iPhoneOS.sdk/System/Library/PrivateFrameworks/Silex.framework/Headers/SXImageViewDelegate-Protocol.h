//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SXAnimatedImage, SXImageView, UIImage;

@protocol SXImageViewDelegate <NSObject>

@optional
- (void)imageView:(SXImageView *)arg1 didLoadAnimatedImage:(SXAnimatedImage *)arg2;
- (void)imageView:(SXImageView *)arg1 didLoadImage:(UIImage *)arg2 ofQuality:(int)arg3;
@end
