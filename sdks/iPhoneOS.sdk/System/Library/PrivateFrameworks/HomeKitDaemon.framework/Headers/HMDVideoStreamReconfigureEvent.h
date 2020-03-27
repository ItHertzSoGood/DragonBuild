//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSDate;

@interface HMDVideoStreamReconfigureEvent : HMFObject
{
    NSUInteger _eventType;
    NSDate *_timestamp;
}

@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSUInteger eventType; // @synthesize eventType=_eventType;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithEventType:(NSUInteger)arg1;

@end
