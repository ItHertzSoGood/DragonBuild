//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface PLVideoPosterFrameView : UIView
{
    UIImageView *_imageView;
    long long _scaleMode;
}

@property(readonly, nonatomic) CGRect imageFrame;
- (id)imageView;
- (id)image;
- (void)setScaleMode:(long long)arg1;
- (void)setImage:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end
