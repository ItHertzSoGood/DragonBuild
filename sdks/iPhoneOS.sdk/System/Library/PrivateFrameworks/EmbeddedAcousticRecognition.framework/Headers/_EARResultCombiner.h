//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _EARResultCombiner : NSObject
{
    struct unique_ptr<quasar::ResultCombiner, std::__1::default_delete<quasar::ResultCombiner>> _combiner;
}

+ (void)initialize;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)combinedResultWithSystemResults:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end
