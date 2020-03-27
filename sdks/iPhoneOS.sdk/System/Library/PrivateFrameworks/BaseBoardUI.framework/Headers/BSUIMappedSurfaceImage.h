//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

@class NSData;

@interface BSUIMappedSurfaceImage : UIImage
{
    NSData *_mappedSurfaceData;
}

+ (id)mappedSurfaceImageFromPath:(id)arg1 loadEagerly:(BOOL)arg2;
+ (BOOL)writeSurfaceImage:(id)arg1 toFileDescriptor:(int)arg2;
@property(retain, nonatomic, getter=_mappedSurfaceData, setter=_setMappedSurfaceData:) NSData *_mappedSurfaceData; // @synthesize _mappedSurfaceData;
// - (void).cxx_destruct;

@end
