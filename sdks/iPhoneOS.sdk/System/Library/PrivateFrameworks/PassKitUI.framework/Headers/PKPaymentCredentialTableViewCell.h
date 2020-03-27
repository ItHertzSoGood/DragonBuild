//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKTableViewCell.h>

@class UIImageView, UILabel;

@interface PKPaymentCredentialTableViewCell : PKTableViewCell
{
    BOOL _showingPlaceholder;
    BOOL _snapshotImageHasBorder;
    UIImageView *_snapshotImageView;
    UILabel *_credentialDetailLabel;
}

+ (CGSize)defaultImageViewSize;
@property(nonatomic) BOOL snapshotImageHasBorder; // @synthesize snapshotImageHasBorder=_snapshotImageHasBorder;
@property(nonatomic) BOOL showingPlaceholder; // @synthesize showingPlaceholder=_showingPlaceholder;
@property(readonly, nonatomic) UILabel *credentialDetailLabel; // @synthesize credentialDetailLabel=_credentialDetailLabel;
@property(readonly, nonatomic) UIImageView *snapshotImageView; // @synthesize snapshotImageView=_snapshotImageView;
// - (void).cxx_destruct;
- (void)prepareForReuse;
- (id)detailTextLabelColor;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

@end
