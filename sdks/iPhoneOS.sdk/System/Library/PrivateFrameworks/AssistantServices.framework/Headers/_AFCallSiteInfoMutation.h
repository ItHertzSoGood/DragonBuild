//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFCallSiteInfoMutating-Protocol.h>

@class AFCallSiteInfo, NSString;

@interface _AFCallSiteInfoMutation : NSObject <AFCallSiteInfoMutating>
{
    AFCallSiteInfo *_baseModel;
    NSString *_imagePath;
    NSString *_symbolName;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasImagePath:1;
        unsigned int hasSymbolName:1;
    } _mutationFlags;
}

// - (void).cxx_destruct;
- (id)generate;
- (void)setSymbolName:(id)arg1;
- (void)setImagePath:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

@end
