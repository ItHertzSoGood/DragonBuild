//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/_CPEndNetworkSearchFeedback-Protocol.h>
#import <CoreParsec/_CPFeedbackUUID-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>

@class NSData, NSDictionary, NSString, _CPNetworkTimingData;

@interface _CPEndNetworkSearchFeedback : PBCodable <_CPProcessableFeedback, _CPFeedbackUUID, _CPEndNetworkSearchFeedback, NSSecureCoding>
{
    int _statusCode;
    NSUInteger _timestamp;
    long long _responseSize;
    NSString *_uuid;
    NSString *_parsecStatus;
    NSString *_fbq;
    double _duration;
    NSString *_partialClientIp;
    _CPNetworkTimingData *_timingData;
}

@property(retain, nonatomic) _CPNetworkTimingData *timingData; // @synthesize timingData=_timingData;
@property(copy, nonatomic) NSString *partialClientIp; // @synthesize partialClientIp=_partialClientIp;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *fbq; // @synthesize fbq=_fbq;
@property(copy, nonatomic) NSString *parsecStatus; // @synthesize parsecStatus=_parsecStatus;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) long long responseSize; // @synthesize responseSize=_responseSize;
@property(nonatomic) NSUInteger timestamp;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)init;
@property(readonly, nonatomic) id feedbackJSON;
- (id)_formatNetworkTimingData;
- (id)initWithStartSearch:(id)arg1 responseSize:(long long)arg2 statusCode:(long long)arg3 parsecStatus:(id)arg4 parsecDuration:(double)arg5 fbq:(id)arg6 partialClientIp:(id)arg7 networkTimingData:(id)arg8;
- (id)initWithFacade:(id)arg1;

@end
