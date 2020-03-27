//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

#import <VideosUI/VUIImageLoadingOperation-Protocol.h>

@class NSError, TVImage;
@protocol VUIImageLoadParams;

__attribute__((visibility("hidden")))
@interface VUIImageLoadParamsOperation : VUIAsynchronousOperation <VUIImageLoadingOperation>
{
    BOOL _cropToFit;
    TVImage *_image;
    NSUInteger _scalingResult;
    NSError *_error;
    id <VUIImageLoadParams> _params;
    CGSize _scaleToSize;
}

@property(retain, nonatomic) id <VUIImageLoadParams> params; // @synthesize params=_params;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) NSUInteger scalingResult; // @synthesize scalingResult=_scalingResult;
@property(retain, nonatomic) TVImage *image; // @synthesize image=_image;
@property(nonatomic) BOOL cropToFit; // @synthesize cropToFit=_cropToFit;
@property(nonatomic) CGSize scaleToSize; // @synthesize scaleToSize=_scaleToSize;
// - (void).cxx_destruct;
- (id)initWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3;
- (id)init;

@end
