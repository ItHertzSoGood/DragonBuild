//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSDictionary, NSString, _SFPBImage, _SFPBMediaOffer, _SFPBPunchout, _SFPBText;

@protocol _SFPBMediaItem <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _SFPBImage *contentAdvisoryImage;
@property(copy, nonatomic) NSString *contentAdvisory;
@property(copy, nonatomic) NSArray *buyOptions;
@property(copy, nonatomic) NSArray *subtitleCustomLineBreakings;
@property(retain, nonatomic) _SFPBPunchout *punchout;
@property(copy, nonatomic) NSString *reviewText;
@property(retain, nonatomic) _SFPBImage *overlayImage;
@property(retain, nonatomic) _SFPBImage *reviewGlyph;
@property(retain, nonatomic) _SFPBImage *thumbnail;
@property(retain, nonatomic) _SFPBText *subtitleText;
@property(copy, nonatomic) NSString *title;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBMediaOffer *)buyOptionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)buyOptionsCount;
- (void)addBuyOptions:(_SFPBMediaOffer *)arg1;
- (void)clearBuyOptions;
- (NSString *)subtitleCustomLineBreakingAtIndex:(NSUInteger)arg1;
- (NSUInteger)subtitleCustomLineBreakingCount;
- (void)addSubtitleCustomLineBreaking:(NSString *)arg1;
- (void)clearSubtitleCustomLineBreaking;
@end
