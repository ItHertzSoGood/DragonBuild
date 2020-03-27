//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoControlItemAnimating-Protocol.h>

@class NSMutableArray;
@protocol AVPlayerViewControllerAnimationCoordinator;

@interface SVVideoControlItemAnimationCoordinator : NSObject <SVVideoControlItemAnimating>
{
    id <AVPlayerViewControllerAnimationCoordinator> _coordinator;
    NSMutableArray *_animationBlocks;
    NSMutableArray *_completionBlocks;
}

@property(readonly, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(readonly, nonatomic) NSMutableArray *animationBlocks; // @synthesize animationBlocks=_animationBlocks;
@property(readonly, nonatomic) id <AVPlayerViewControllerAnimationCoordinator> coordinator; // @synthesize coordinator=_coordinator;
// - (void).cxx_destruct;
- (void)animateWithAnimationBlock:(id /* CDUnknownBlockType */)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (id)initWithAnimationCoordinator:(id)arg1;

@end
