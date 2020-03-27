//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PXMiniHTMLParser : NSObject
{
    id /* CDUnknownBlockType */ _parsedCharactersBlock;
    id /* CDUnknownBlockType */ _parsedMarkupElementStartBlock;
    id /* CDUnknownBlockType */ _parsedMarkupElementEndBlock;
    id /* CDUnknownBlockType */ _parsedErrorBlock;
    NSString *__string;
}

+ (id)stringByConvertingToHTML:(id)arg1;
+ (id)charactersForEntityNames;
@property(readonly, nonatomic) NSString *_string; // @synthesize _string=__string;
@property(copy, nonatomic) id /* CDUnknownBlockType */ parsedErrorBlock; // @synthesize parsedErrorBlock=_parsedErrorBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ parsedMarkupElementEndBlock; // @synthesize parsedMarkupElementEndBlock=_parsedMarkupElementEndBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ parsedMarkupElementStartBlock; // @synthesize parsedMarkupElementStartBlock=_parsedMarkupElementStartBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ parsedCharactersBlock; // @synthesize parsedCharactersBlock=_parsedCharactersBlock;
// - (void).cxx_destruct;
- (void)parse;
- (id)initWithString:(id)arg1;
- (id)init;

@end
