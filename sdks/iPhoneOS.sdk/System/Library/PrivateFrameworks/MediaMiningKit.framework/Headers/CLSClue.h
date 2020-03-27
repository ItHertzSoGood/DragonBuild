//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSInformant, CLSProfile, NSDictionary, NSString;

@interface CLSClue : NSObject
{
    BOOL _transient;
    NSString *_key;
    id _value;
    double _confidence;
    double _relevance;
    NSDictionary *_extraParameters;
    CLSInformant *_informant;
    CLSProfile *_profile;
    NSString *_informantIdentifier;
    NSString *_profileIdentifier;
    NSUInteger _versionCount;
}

+ (id)_clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4;
+ (id)_clueWithValue:(id)arg1 forKey:(id)arg2;
@property NSUInteger versionCount; // @synthesize versionCount=_versionCount;
@property BOOL transient; // @synthesize transient=_transient;
@property(retain) CLSProfile *profile; // @synthesize profile=_profile;
@property(retain) CLSInformant *informant; // @synthesize informant=_informant;
@property(retain) NSDictionary *extraParameters; // @synthesize extraParameters=_extraParameters;
@property double relevance; // @synthesize relevance=_relevance;
@property double confidence; // @synthesize confidence=_confidence;
@property(retain) id value; // @synthesize value=_value;
@property(copy) NSString *key; // @synthesize key=_key;
// - (void).cxx_destruct;
- (BOOL)isEqualToClue:(id)arg1;
- (long long)compareScore:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
@property(retain) NSString *profileIdentifier; // @synthesize profileIdentifier=_profileIdentifier;
@property(retain) NSString *informantIdentifier; // @synthesize informantIdentifier=_informantIdentifier;
- (double)score;
- (void)_incrementVersionCount;
- (double)doubleValue;
- (long long)integerValue;
- (id)stringValue;
- (NSUInteger)enumValue;
- (NSUInteger)valueHash;
- (id)description;
- (id)init;

@end
