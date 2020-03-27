//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKTextProvider.h>

@class NSString;

@interface CLKSimpleTextProvider : CLKTextProvider
{
    BOOL _useNoContentDashFormatting;
    BOOL _useAllSmallCaps;
    NSString *_text;
    NSString *_shortText;
}

+ (BOOL)supportsSecureCoding;
+ (id)finalizedTextProviderWithText:(id)arg1 monospaceNumbers:(BOOL)arg2;
+ (id)finalizedTextProviderWithText:(id)arg1;
+ (id)textProviderWithText:(id)arg1 shortText:(id)arg2 accessibilityLabel:(id)arg3;
+ (id)textProviderWithText:(id)arg1 shortText:(id)arg2;
+ (id)textProviderWithText:(id)arg1;
@property(nonatomic) BOOL useAllSmallCaps; // @synthesize useAllSmallCaps=_useAllSmallCaps;
@property(nonatomic) BOOL useNoContentDashFormatting; // @synthesize useNoContentDashFormatting=_useNoContentDashFormatting;
@property(copy, nonatomic) NSString *shortText; // @synthesize shortText=_shortText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
// - (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)attributedString;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (void)_validate;
- (id)_sessionAttributedTextForIndex:(NSUInteger)arg1 withStyle:(id)arg2;

@end
