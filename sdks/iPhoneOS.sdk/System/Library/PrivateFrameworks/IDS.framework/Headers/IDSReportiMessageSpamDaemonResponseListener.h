//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class IDSDaemonRequestTimer;

@interface IDSReportiMessageSpamDaemonResponseListener : NSObject <IDSDaemonListenerProtocol>
{
    IDSDaemonRequestTimer *_requestTimer;
}

// - (void).cxx_destruct;
- (void)iMessageReportSpamCheckUnknownResponseForRequestID:(id)arg1 status:(long long)arg2 abusive:(BOOL)arg3 delay:(double)arg4 withError:(id)arg5;
- (id)initWithRequestTimer:(id)arg1;

@end
