//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKMessagePartChatItem.h>

@class NSAttributedString, UIItemProvider;

@interface CKTextMessagePartChatItem : CKMessagePartChatItem
{
    UIItemProvider *_dragItemProvider;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL containsExcessiveLineHeightCharacters;
@property(readonly, nonatomic) BOOL containsHyperlink;
@property(readonly, copy, nonatomic) NSAttributedString *subject;
@property(readonly, copy, nonatomic) NSAttributedString *fallbackCorruptText;
@property(readonly, copy, nonatomic) NSAttributedString *text;
- (BOOL)shouldUseBigEmoji;
- (id)_time;
- (id)pasteboardItems;
- (id)dragItemProvider;
- (Class)impactBalloonViewClass;
- (Class)balloonViewClass;
- (id)_attributedTextWithTextColor:(id)arg1;
- (id)_fallbackCorruptMessageTextWithTextColor:(id)arg1;
- (BOOL)showMoneyResults;
- (id)loadTranscriptText;
- (id)sendAnimationTextWithColor:(id)arg1;
- (id)composition;

@end
