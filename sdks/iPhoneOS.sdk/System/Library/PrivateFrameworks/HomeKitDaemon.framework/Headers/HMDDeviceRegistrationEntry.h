//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, NSArray;

@interface HMDDeviceRegistrationEntry : HMFObject
{
    HMDDevice *_device;
    NSArray *_accessoryUUIDList;
}

@property(readonly, nonatomic) NSArray *accessoryUUIDList; // @synthesize accessoryUUIDList=_accessoryUUIDList;
@property(readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDevice:(id)arg1 accessoryList:(id)arg2;

@end
