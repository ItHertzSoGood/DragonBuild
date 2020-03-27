//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/ISImageDescriptor-Protocol.h>

@class NSString;
@protocol NSCopying;

@interface ISImageDescriptor : NSObject <NSSecureCoding, ISImageDescriptor, NSCopying>
{
    CGSize _size;
    double _scale;
    NSUInteger _variantOptions;
    NSUInteger _badgeOptions;
    NSUInteger _backgroundStyle;
    BOOL _preferExtendedColorResources;
    NSString *_preferedResourceName;
    NSUInteger _languageDirection;
}

+ (BOOL)supportsSecureCoding;
+ (id)imageDescriptorNamed:(id)arg1;
+ (id)icnsImageDescriptors;
@property BOOL preferExtendedColorResources; // @synthesize preferExtendedColorResources=_preferExtendedColorResources;
@property(nonatomic) NSUInteger backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) NSUInteger badgeOptions; // @synthesize badgeOptions=_badgeOptions;
@property NSUInteger languageDirection; // @synthesize languageDirection=_languageDirection;
@property(retain) NSString *preferedResourceName; // @synthesize preferedResourceName=_preferedResourceName;
@property(nonatomic) NSUInteger variantOptions; // @synthesize variantOptions=_variantOptions;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) CGSize size; // @synthesize size=_size;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(retain) id <NSCopying> imageCacheKey; // @dynamic imageCacheKey;
@property(readonly) double sanitizedScale;
@property(readonly) CGSize sanitizedSize;
@property(nonatomic) BOOL drawBadge;
@property(nonatomic) BOOL drawBorder;
@property(nonatomic) BOOL shouldApplyMask;
@property(readonly, nonatomic) double continuousCornerRadius;
@property(nonatomic) NSUInteger shape;
@property(nonatomic) BOOL selectedVariant;
@property(nonatomic) BOOL templateVariant;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(CGSize)arg1 scale:(double)arg2;
- (id)init;

@end
