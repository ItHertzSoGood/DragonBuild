//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSData;

@interface FARegisterPushTokenRequest : FAFamilyCircleRequest
{
    NSData *_pushToken;
}

@property(readonly, copy) NSData *pushToken; // @synthesize pushToken=_pushToken;
// - (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)initWithPushToken:(id)arg1;

@end
