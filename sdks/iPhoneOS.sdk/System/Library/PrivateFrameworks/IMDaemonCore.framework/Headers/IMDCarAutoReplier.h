//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/IMDAutoReplying-Protocol.h>

@class CARAutomaticDNDStatus, NSMutableDictionary;
@protocol IMDAutoReplyDelegate, OS_dispatch_queue;

@interface IMDCarAutoReplier : NSObject <IMDAutoReplying>
{
    id <IMDAutoReplyDelegate> _replyDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    CARAutomaticDNDStatus *_automaticDNDStatus;
    NSMutableDictionary *_propertiesForChatIdentifiers;
}

@property(readonly, nonatomic) NSMutableDictionary *propertiesForChatIdentifiers; // @synthesize propertiesForChatIdentifiers=_propertiesForChatIdentifiers;
@property(retain, nonatomic) CARAutomaticDNDStatus *automaticDNDStatus; // @synthesize automaticDNDStatus=_automaticDNDStatus;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)processMessages:(id)arg1 inChat:(id)arg2;
@property(nonatomic) __weak id <IMDAutoReplyDelegate> replyDelegate;
- (void)_handleReceivedUrgentRequestForMessages:(id)arg1;
- (void)_handleGeneratedAutoReplyText:(id)arg1 forChat:(id)arg2;
- (BOOL)_audience:(NSUInteger)arg1 allowsRepliesToChat:(id)arg2;
- (id)_customizedAutoReplyMessage;
- (NSUInteger)_autoReplyAudiencePreference;
- (BOOL)_hasRecentOutgoingMessagesInChat:(id)arg1;
- (BOOL)_favoritesContainsParticipants:(id)arg1;
- (BOOL)_contactsContainsParticipants:(id)arg1;
- (BOOL)_urgentTriggerMatchInText:(id)arg1;
- (id)_propertiesForChat:(id)arg1;
- (BOOL)_isActive;
- (void)_updateDNDStatus;
- (void)dealloc;
- (id)init;

@end
