//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class ICIAMMetricEvent, NSMutableArray, NSString;

@interface ICIAMMessageContent : PBCodable <NSCopying>
{
    NSString *_body;
    ICIAMMetricEvent *_cardClickEvent;
    ICIAMMetricEvent *_closeClickEvent;
    NSMutableArray *_contentParameters;
    NSString *_identifier;
    NSMutableArray *_images;
    NSMutableArray *_messageActions;
    ICIAMMetricEvent *_pageEvent;
    NSString *_subtitle;
    NSString *_title;
}

+ (Class)contentParametersType;
+ (Class)messageActionsType;
+ (Class)imagesType;
@property(retain, nonatomic) ICIAMMetricEvent *cardClickEvent; // @synthesize cardClickEvent=_cardClickEvent;
@property(retain, nonatomic) ICIAMMetricEvent *closeClickEvent; // @synthesize closeClickEvent=_closeClickEvent;
@property(retain, nonatomic) ICIAMMetricEvent *pageEvent; // @synthesize pageEvent=_pageEvent;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSMutableArray *contentParameters; // @synthesize contentParameters=_contentParameters;
@property(retain, nonatomic) NSMutableArray *messageActions; // @synthesize messageActions=_messageActions;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
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
@property(readonly, nonatomic) BOOL hasCardClickEvent;
@property(readonly, nonatomic) BOOL hasCloseClickEvent;
@property(readonly, nonatomic) BOOL hasPageEvent;
@property(readonly, nonatomic) BOOL hasIdentifier;
- (id)contentParametersAtIndex:(NSUInteger)arg1;
- (NSUInteger)contentParametersCount;
- (void)addContentParameters:(id)arg1;
- (void)clearContentParameters;
- (id)messageActionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)messageActionsCount;
- (void)addMessageActions:(id)arg1;
- (void)clearMessageActions;
- (id)imagesAtIndex:(NSUInteger)arg1;
- (NSUInteger)imagesCount;
- (void)addImages:(id)arg1;
- (void)clearImages;
@property(readonly, nonatomic) BOOL hasBody;
@property(readonly, nonatomic) BOOL hasSubtitle;
@property(readonly, nonatomic) BOOL hasTitle;

@end
