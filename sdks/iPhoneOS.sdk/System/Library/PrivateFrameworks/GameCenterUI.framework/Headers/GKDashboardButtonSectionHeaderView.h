//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKDashboardSectionHeaderView.h>

@class NSLayoutConstraint, NSString, UIButton;

@interface GKDashboardButtonSectionHeaderView : GKDashboardSectionHeaderView
{
    id _buttonTarget;
    SEL _buttonAction;
    UIButton *_button;
    NSLayoutConstraint *_titleToButtonConstraint;
    NSLayoutConstraint *_rightMarginConstraint;
}

+ (CGSize)platformSizeForTitle:(id)arg1 buttonTitle:(id)arg2;
+ (double)widthForTitle:(id)arg1 buttonTitle:(id)arg2;
+ (CGSize)platformSizeForTitle:(id)arg1;
+ (double)widthForTitle:(id)arg1;
@property(nonatomic) NSLayoutConstraint *rightMarginConstraint; // @synthesize rightMarginConstraint=_rightMarginConstraint;
@property(nonatomic) NSLayoutConstraint *titleToButtonConstraint; // @synthesize titleToButtonConstraint=_titleToButtonConstraint;
@property(nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) SEL buttonAction; // @synthesize buttonAction=_buttonAction;
@property(nonatomic) id buttonTarget; // @synthesize buttonTarget=_buttonTarget;
- (void)buttonPressed:(id)arg1;
- (CGSize)intrinsicContentSize;
@property(copy, nonatomic) NSString *buttonTitle; // @dynamic buttonTitle;
- (void)awakeFromNib;

@end
