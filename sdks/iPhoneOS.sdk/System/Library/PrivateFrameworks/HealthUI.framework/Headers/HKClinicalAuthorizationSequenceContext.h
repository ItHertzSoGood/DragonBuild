//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKClinicalSourceAuthorizationController, HKSource, NSString;

@interface HKClinicalAuthorizationSequenceContext : NSObject
{
    HKClinicalSourceAuthorizationController *_authorizationController;
    NSString *_readUsageDescription;
    HKSource *_source;
}

@property(copy, nonatomic) HKSource *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *readUsageDescription; // @synthesize readUsageDescription=_readUsageDescription;
@property(retain, nonatomic) HKClinicalSourceAuthorizationController *authorizationController; // @synthesize authorizationController=_authorizationController;
// - (void).cxx_destruct;

@end
