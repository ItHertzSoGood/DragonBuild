//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView;

@interface CAMCreativeCameraButton : UIButton
{
    BOOL _useCompactLayout;
    BOOL __overContent;
    long long _layoutStyle;
    long long _orientation;
    UIImageView *__circleBackgroundView;
    UIEdgeInsets _tappableEdgeInsets;
}

@property(retain, nonatomic) UIImageView *_circleBackgroundView; // @synthesize _circleBackgroundView=__circleBackgroundView;
@property(readonly, nonatomic, getter=_isOverContent) BOOL _overContent; // @synthesize _overContent=__overContent;
@property(nonatomic, setter=useCompactLayout:) BOOL useCompactLayout; // @synthesize useCompactLayout=_useCompactLayout;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
// - (void).cxx_destruct;
@property(nonatomic, getter=isActive) BOOL active;
- (void)setOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (UIEdgeInsets)alignmentRectInsets;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateImages;
- (id)initForOverContent;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_commonCAMCreativeCameraButtonInitializationWithStyle:(long long)arg1 overContent:(BOOL)arg2;

@end
