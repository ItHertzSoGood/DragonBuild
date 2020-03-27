//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarKit/SCNMaterialPropertyTextureProvider-Protocol.h>

@class AVTCompositorPipeline, AVTCompositor_GPU, AVTMemoji, NSMutableSet, NSString;

@interface AVTCompositorTextureProvider : NSObject <SCNMaterialPropertyTextureProvider>
{
    AVTMemoji *_memoji;
    AVTCompositor_GPU *_compositor;
    AVTCompositorPipeline *_pipeline;
    NSString *_propertyName;
    BOOL _skinIsDirty;
    long long _componentDirtyMask;
    NSMutableSet *_helperTokens;
}

// - (void).cxx_destruct;
- (void)renderToTexture:(id)arg1 computeCommandHandler:(id /* CDUnknownBlockType */)arg2 blitCommandHandler:(id /* CDUnknownBlockType */)arg3 helper:(id)arg4;
- (id)newTextureForDevice:(id)arg1;
- (void)componentDidChangeForType:(long long)arg1;
- (void)skinColorDidChange;
- (void)dealloc;
- (id)initWithCompositor:(id)arg1 memoji:(id)arg2 propertyName:(id)arg3;

@end
