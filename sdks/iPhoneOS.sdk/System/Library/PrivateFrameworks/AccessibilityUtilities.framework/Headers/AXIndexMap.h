//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface AXIndexMap : NSObject <NSCopying, NSCoding>
{
    struct __CFDictionary _map;
}

- (id)description;
- (void)addObjectsFromIndexMap:(id)arg1;
- (id)indexes;
- (NSUInteger )_createIndexesWithSize:(NSUInteger )arg1;
- (NSUInteger)count;
- (id)objectForIndex:(NSUInteger)arg1;
- (void)removeAllObjects;
- (void)removeObjectForIndex:(NSUInteger)arg1;
- (void)setObject:(id)arg1 forIndex:(NSUInteger)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)deepCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)_initAndDeepCopyIndexMap:(id)arg1;
- (id)_initWithIndexMap:(id)arg1;
- (id)init;
- (id)initWithObjects:(id )arg1 andIndexes:(NSUInteger )arg2 count:(NSUInteger)arg3;

@end
