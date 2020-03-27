//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class PXSnapBackController;

@interface UINavigationController (PXDiagnosticsEnvironment)
+ (id)px_defaultDelegateForNavigationController:(id)arg1;
+ (id)px_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
+ (id)px_navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
+ (id)px_navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (double)px_imageModulationIntensity;
- (double)px_HDRFocus;
- (BOOL)px_isImageModulationEnabled;
- (id)px_topViewController;
- (void)_px_prepareNavigationFromViewController:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;
- (BOOL)canRouteToDestination:(id)arg1;
- (void)px_navigateToStateAllowingTabSwitchingWithOptions:(NSUInteger)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)px_allowsTabSwitching;
- (void)px_pushViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)px_popToViewControllerPreceedingViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)px_preparePopToViewController:(id)arg1 forced:(BOOL)arg2;
- (void)_ppt_setTransitionAnimationCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id /* CDUnknownBlockType */)_ppt_transitionAnimationCompletionHandler;
- (void)ppt_notifyTransitionAnimationDidComplete;
- (void)ppt_installTransitionAnimationCompletionHandler:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) PXSnapBackController *px_snapBackController;
@end
