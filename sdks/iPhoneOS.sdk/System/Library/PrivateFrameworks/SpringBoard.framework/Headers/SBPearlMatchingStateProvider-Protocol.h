//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SBPearlMatchingStateProviderDelegate;

@protocol SBPearlMatchingStateProvider <NSObject>
@property(readonly, nonatomic) BOOL seenMatchResultSinceScreenOn;
@property(readonly, nonatomic) BOOL pearlMatchEnabledAndPossible;
@property(nonatomic) __weak id <SBPearlMatchingStateProviderDelegate> delegate;
- (void)reset;
@end
