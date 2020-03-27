//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPBitmapStore, NSMutableDictionary;

@interface ICLetterpressImageCache : NSObject
{
    NSMutableDictionary *_imageCache;
    CPBitmapStore *_serializedCache;
}

+ (id)serializedCacheKeyForImageNamed:(id)arg1 tintColor:(id)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 version:(NSUInteger)arg5;
+ (id)letterpressedImageForImage:(id)arg1 tintColor:(id)arg2 scale:(double)arg3 addAlignmentInsets:(BOOL)arg4 appearanceInfo:(id)arg5;
+ (id)imageWithLetterpressAlignmentInsetsForImage:(id)arg1;
+ (double)letterpressImagePadding;
+ (id)sharedCache;
@property(retain, nonatomic) CPBitmapStore *serializedCache; // @synthesize serializedCache=_serializedCache;
@property(retain, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
// - (void).cxx_destruct;
- (void)purge;
- (id)imageWithCacheName:(id)arg1 tintColor:(id)arg2 addAlignmentInsets:(BOOL)arg3 appearanceInfo:(id)arg4 version:(NSUInteger)arg5 imageCreationBlock:(id /* CDUnknownBlockType */)arg6;
- (id)imageNamed:(id)arg1 tintColor:(id)arg2 appearanceInfo:(id)arg3 version:(NSUInteger)arg4;
- (id)imageNamed:(id)arg1 tintColor:(id)arg2 addAlignmentInsets:(BOOL)arg3 appearanceInfo:(id)arg4 version:(NSUInteger)arg5;
- (id)init;

@end
