//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/OABReaderClient-Protocol.h>

__attribute__((visibility("hidden")))
@interface WBOfficeArtReaderClient : NSObject <OABReaderClient>
{
}

+ (id)readDrawableFromPackagePart:(id)arg1 foundInObject:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromObject:(id)arg1 toDrawable:(id)arg2 state:(id)arg3;
+ (int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1 state:(id)arg2;
+ (BOOL)xmlEquivalentOfDrawableCanBeUsed;
+ (BOOL)tablesAreAllowed;
+ (BOOL)escherIsFullySupported;
+ (void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 includeText:(BOOL)arg3 state:(id)arg4;
+ (double)wrapDistanceBottom:(struct EshContentProperties )arg1;
+ (double)wrapDistanceRight:(struct EshContentProperties )arg1;
+ (double)wrapDistanceTop:(struct EshContentProperties )arg1;
+ (double)wrapDistanceLeft:(struct EshContentProperties )arg1;
+ (int)relativeVerticalPosition:(struct EshContentProperties )arg1;
+ (int)verticalPosition:(struct EshContentProperties )arg1;
+ (int)relativeHorizontalPosition:(struct EshContentProperties )arg1;
+ (int)horizontalPosition:(struct EshContentProperties )arg1;
+ (BOOL)allowOverlap:(struct EshContentProperties )arg1;
+ (BOOL)behindText:(struct EshContentProperties )arg1;
+ (void)readFrom:(struct EshContentProperties )arg1 to:(id)arg2;

@end
