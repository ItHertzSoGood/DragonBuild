//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SnapshotTimer : NSObject
{
    BOOL taskIsComplete;
}

+ (void)takeSnapshotForTask:(id)arg1;
@property(nonatomic) BOOL taskIsComplete; // @synthesize taskIsComplete;
- (void)checkout;
- (void)checkinWithTimeout:(double)arg1 forTask:(id)arg2;
- (id)init;

@end
