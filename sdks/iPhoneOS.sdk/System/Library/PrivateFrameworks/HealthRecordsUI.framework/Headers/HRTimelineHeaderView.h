//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class MISSING_TYPE;
@protocol HRTimelineHeaderViewDelegate;

@interface HRTimelineHeaderView : UITableViewHeaderFooterView
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *$__lazy_storage_$_titleLabel;
    MISSING_TYPE *$__lazy_storage_$_subtitleLabel;
    MISSING_TYPE *$__lazy_storage_$_backgroundEffectView;
    MISSING_TYPE *$__lazy_storage_$_separatorView;
}

+ (id)reuseIdentifier;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
@property(nonatomic) BOOL floating;
- (void)prepareForReuse;
- (void)applyStyleFromNavigationBar:(id)arg1;
- (void)applyTitle:(id)arg1 subtitle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
@property(nonatomic) __weak id <HRTimelineHeaderViewDelegate> delegate; // @synthesize delegate;

@end
