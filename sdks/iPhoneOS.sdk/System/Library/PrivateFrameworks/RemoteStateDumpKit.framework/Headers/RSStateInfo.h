//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RSStateInfo : NSObject
{
    NSUInteger _stateType;
    long long _actionRevision;
}

@property(nonatomic) long long actionRevision; // @synthesize actionRevision=_actionRevision;
@property(nonatomic) NSUInteger stateType; // @synthesize stateType=_stateType;
- (id)initWithType:(NSUInteger)arg1 revision:(long long)arg2;

@end
