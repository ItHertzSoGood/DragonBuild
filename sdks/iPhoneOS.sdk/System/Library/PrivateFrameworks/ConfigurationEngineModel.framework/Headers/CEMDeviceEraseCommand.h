//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMCommandBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMDeviceEraseCommand : CEMCommandBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadPreserveDataPlan;
    NSNumber *_payloadDisallowProximitySetup;
    NSString *_payloadPIN;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withPIN:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withPreserveDataPlan:(id)arg2 withDisallowProximitySetup:(id)arg3 withPIN:(id)arg4;
+ (id)allowedPayloadKeys;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *payloadPIN; // @synthesize payloadPIN=_payloadPIN;
@property(copy, nonatomic) NSNumber *payloadDisallowProximitySetup; // @synthesize payloadDisallowProximitySetup=_payloadDisallowProximitySetup;
@property(copy, nonatomic) NSNumber *payloadPreserveDataPlan; // @synthesize payloadPreserveDataPlan=_payloadPreserveDataPlan;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;
- (int)executionLevel;
- (BOOL)mustBeSupervised;

@end
