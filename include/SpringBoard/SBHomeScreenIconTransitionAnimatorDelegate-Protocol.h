//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SBHIconAnimationSettings, SBHomeScreenIconTransitionAnimator, SBNestingViewController;

@protocol SBHomeScreenIconTransitionAnimatorDelegate <NSObject>
- (SBHIconAnimationSettings *)animator:(SBHomeScreenIconTransitionAnimator *)arg1 animationSettingsForOperation:(NSUInteger)arg2 childViewController:(SBNestingViewController *)arg3;

@optional
- (BOOL)animator:(SBHomeScreenIconTransitionAnimator *)arg1 canAlterViewHierarchyDuringCleanupUsingBlock:(void (^)(void))arg2;
@end

