//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUSTitleCardSection.h>

@class NSString, SAUIImageResource;

@interface SAUSRichTitleCardSection : SAUSTitleCardSection
{
}

+ (id)richTitleCardSectionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)richTitleCardSection;
@property(retain, nonatomic) SAUIImageResource *titleImage;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *contentRatingText;
@property(nonatomic) BOOL centered;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
