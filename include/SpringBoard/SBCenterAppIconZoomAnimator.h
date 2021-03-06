//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBCenterIconZoomAnimator.h>

@class NSMutableArray, SBReversibleLayerPropertyAnimator, UIView;

@interface SBCenterAppIconZoomAnimator : SBCenterIconZoomAnimator
{
    UIView *_appView;
    UIView *_appZoomView;
    CGRect _destinationFrame;
    unsigned char _testCompletionCount;
    double _distantScale;
    SBReversibleLayerPropertyAnimator *_appZoomAnimator;
    NSMutableArray *_animationCompletions;
}

@property(retain, nonatomic) NSMutableArray *animationCompletions; // @synthesize animationCompletions=_animationCompletions;
@property(retain, nonatomic) SBReversibleLayerPropertyAnimator *appZoomAnimator; // @synthesize appZoomAnimator=_appZoomAnimator;
@property double distantScale; // @synthesize distantScale=_distantScale;
// - (void).cxx_destruct;
- (void)_fadeAppForZoomFraction:(double)arg1;
- (void)_translateAppForZoomFraction:(double)arg1;
- (double)_appZPositionForZoomFraction:(double)arg1;
- (void)_zoomAppForZoomFraction:(double)arg1;
- (double)_appZoomDelay;
- (CGPoint)cameraPosition;
- (double)_iconZoomDelay;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(BOOL)arg4 sharedCompletion:(id /* CDUnknownBlockType */)arg5;
- (void)hintToFraction:(double)arg1;
- (NSUInteger)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_prepareAnimation;
- (void)_delayedForRotation;
- (id)initWithFolderController:(id)arg1 appView:(id)arg2;

@end

