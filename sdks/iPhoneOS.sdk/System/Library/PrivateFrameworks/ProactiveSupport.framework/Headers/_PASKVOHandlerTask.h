//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _PASKVOHandlerTask : NSObject
{
    NSString *_keyPath;
    NSObject *_object;
    id /* CDUnknownBlockType */ _afterBlock;
    id /* CDUnknownBlockType */ _beforeAndAfterBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ beforeAndAfterBlock; // @synthesize beforeAndAfterBlock=_beforeAndAfterBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ afterBlock; // @synthesize afterBlock=_afterBlock;
@property(nonatomic) __weak NSObject *object; // @synthesize object=_object;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
// - (void).cxx_destruct;

@end
