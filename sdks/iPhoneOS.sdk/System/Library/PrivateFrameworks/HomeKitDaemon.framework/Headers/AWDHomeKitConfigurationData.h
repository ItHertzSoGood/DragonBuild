//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface AWDHomeKitConfigurationData : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    unsigned int _databaseSize;
    NSMutableArray *_homeConfigurations;
    unsigned int _metadataVersion;
    BOOL _isResidentCapable;
    BOOL _isResidentEnabled;
    struct {
        unsigned int timestamp:1;
        unsigned int databaseSize:1;
        unsigned int metadataVersion:1;
        unsigned int isResidentCapable:1;
        unsigned int isResidentEnabled:1;
    } _has;
}

+ (Class)homeConfigurationsType;
@property(retain, nonatomic) NSMutableArray *homeConfigurations; // @synthesize homeConfigurations=_homeConfigurations;
@property(nonatomic) BOOL isResidentEnabled; // @synthesize isResidentEnabled=_isResidentEnabled;
@property(nonatomic) BOOL isResidentCapable; // @synthesize isResidentCapable=_isResidentCapable;
@property(nonatomic) unsigned int metadataVersion; // @synthesize metadataVersion=_metadataVersion;
@property(nonatomic) unsigned int databaseSize; // @synthesize databaseSize=_databaseSize;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)homeConfigurationsAtIndex:(NSUInteger)arg1;
- (NSUInteger)homeConfigurationsCount;
- (void)addHomeConfigurations:(id)arg1;
- (void)clearHomeConfigurations;
@property(nonatomic) BOOL hasIsResidentEnabled;
@property(nonatomic) BOOL hasIsResidentCapable;
@property(nonatomic) BOOL hasMetadataVersion;
@property(nonatomic) BOOL hasDatabaseSize;
@property(nonatomic) BOOL hasTimestamp;

@end
