//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSRegularExpression, NSString;

@interface GKRoute : NSObject
{
    NSRegularExpression *_regex;
    NSArray *_parameterNames;
    NSString *_scheme;
}

- (BOOL)matchesURL:(id)arg1 parameters:(id )arg2;
- (BOOL)matchesURL:(id)arg1;
- (id)nonParameterCharacterSet;
- (void)dealloc;
- (id)initWithString:(id)arg1 scheme:(id)arg2;
- (id)initWithString:(id)arg1;

@end
