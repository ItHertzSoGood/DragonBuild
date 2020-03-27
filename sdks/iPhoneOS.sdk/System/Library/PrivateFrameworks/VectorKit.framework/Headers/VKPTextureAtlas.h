//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData;

__attribute__((visibility("hidden")))
@interface VKPTextureAtlas : PBCodable <NSCopying>
{
    unsigned int _quadHeight;
    unsigned int _quadWidth;
    NSData *_texture;
}

@property(nonatomic) unsigned int quadHeight; // @synthesize quadHeight=_quadHeight;
@property(nonatomic) unsigned int quadWidth; // @synthesize quadWidth=_quadWidth;
@property(retain, nonatomic) NSData *texture; // @synthesize texture=_texture;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;

@end
