//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTIndexBasedTaskScheduler-Protocol.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AVTOrderedIndexBasedTaskScheduler : NSObject <AVTIndexBasedTaskScheduler>
{
    NSMutableDictionary _scheduledTasks;
    NSMutableArray _scheduledTasksOrder;
    NSMutableDictionary _readyTasks;
    NSObject<OS_dispatch_queue> *_stateLock;
}

+ (id)rowBaseIndexForIndex:(id)arg1;
+ (id)indexesForReadyTasksToRunGivenScheduledTasks:(NSMutableDictionary )arg1 order:(NSMutableArray )arg2 readyTasks:(NSMutableDictionary )arg3 readyRowIndex:(id)arg4;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock; // @synthesize stateLock=_stateLock;
@property(readonly, nonatomic) NSMutableDictionary *readyTasks; // @synthesize readyTasks=_readyTasks;
@property(readonly, nonatomic) NSMutableArray *scheduledTasksOrder; // @synthesize scheduledTasksOrder=_scheduledTasksOrder;
@property(readonly, nonatomic) NSMutableDictionary *scheduledTasks; // @synthesize scheduledTasks=_scheduledTasks;
// - (void).cxx_destruct;
- (void)cancelTask:(id /* CDUnknownBlockType */)arg1;
- (void)cancelAllTasks;
- (void)taskReady:(id /* CDUnknownBlockType */)arg1 forIndex:(NSUInteger)arg2;
- (void)scheduleTask:(id /* CDUnknownBlockType */)arg1 forIndex:(NSUInteger)arg2;
- (void)performStateWork:(id /* CDUnknownBlockType */)arg1;
- (id)initWithEnvironment:(id)arg1;

@end
