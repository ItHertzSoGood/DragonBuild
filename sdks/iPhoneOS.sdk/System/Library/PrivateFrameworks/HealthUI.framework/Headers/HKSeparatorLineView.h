//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface HKSeparatorLineView : UIView
{
    UIColor *_color;
    double _separatorThickness;
    long long _dashStyle;
    double _leadingMargin;
    double _trailingMargin;
}

+ (id)_hkecg_separatorView;
@property(nonatomic) double trailingMargin; // @synthesize trailingMargin=_trailingMargin;
@property(nonatomic) double leadingMargin; // @synthesize leadingMargin=_leadingMargin;
@property(nonatomic) long long dashStyle; // @synthesize dashStyle=_dashStyle;
@property(nonatomic) double separatorThickness; // @synthesize separatorThickness=_separatorThickness;
@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
// - (void).cxx_destruct;
- (void)_applyStyleToContext:(CGContext )arg1;
- (void)drawRect:(CGRect)arg1;
- (BOOL)isOpaque;
- (BOOL)_isVertical;
- (CGSize)intrinsicContentSize;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;

@end
