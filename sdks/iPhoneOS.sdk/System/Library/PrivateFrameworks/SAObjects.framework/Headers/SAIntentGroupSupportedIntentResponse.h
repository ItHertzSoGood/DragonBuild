//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAIntentGroupIntentInvocationResponse.h>

@class NSArray, NSString;

@interface SAIntentGroupSupportedIntentResponse : SAIntentGroupIntentInvocationResponse
{
}

+ (id)supportedIntentResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)supportedIntentResponse;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *useCaseId;
@property(copy, nonatomic) NSArray *commands;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
