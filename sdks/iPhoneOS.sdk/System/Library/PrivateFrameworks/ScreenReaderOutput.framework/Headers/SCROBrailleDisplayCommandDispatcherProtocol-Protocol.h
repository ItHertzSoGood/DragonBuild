//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SCROBrailleKey;
@protocol SCROBrailleDisplayCommandDispatcherDelegate;

@protocol SCROBrailleDisplayCommandDispatcherProtocol <NSObject>
@property(nonatomic) __weak id <SCROBrailleDisplayCommandDispatcherDelegate> delegate;
- (BOOL)handleBrailleKeyEvent:(SCROBrailleKey *)arg1;
@end
