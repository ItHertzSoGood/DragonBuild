//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PLPlatterView, SBIconImageView, UILabel;

@interface SBSceneViewAppIconView : UIView
{
    SBIconImageView *_imageView;
    UILabel *_label;
    PLPlatterView *_shadowView;
}

@property(readonly, nonatomic) PLPlatterView *shadowView; // @synthesize shadowView=_shadowView;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) SBIconImageView *imageView; // @synthesize imageView=_imageView;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithIcon:(id)arg1;

@end

