//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HFNamedWallpaperSource-Protocol.h>

@interface HUNamedWallpaperFactory : NSObject <HFNamedWallpaperSource>
{
}

+ (id)_gradientWallpaperImageForIdentifier:(id)arg1;
+ (id)_defaultBlackWallpaperImage;
- (id)imageForWallpaper:(id)arg1;
- (id)defaultWallpaperForCollection:(long long)arg1;
- (id)allWallpapersForCollection:(long long)arg1;

@end
