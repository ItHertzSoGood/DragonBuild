//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FIUIChartDateAnchorRule : NSObject
{
    NSUInteger _calendarUnit;
    long long _roundingValue;
}

@property(nonatomic) long long roundingValue; // @synthesize roundingValue=_roundingValue;
@property(nonatomic) NSUInteger calendarUnit; // @synthesize calendarUnit=_calendarUnit;
- (BOOL)_componentsSuccessful:(id)arg1;
- (id)_anchorDiffComponents;
- (id)_floorDate:(id)arg1;
- (id)generateAnchorFromDate:(id)arg1;

@end
