//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PXLayoutEngineDataSourceSnapshot;

@interface PXLayoutSnapshot : NSObject
{
    id <PXLayoutEngineDataSourceSnapshot> _dataSourceSnapshot;
    CGRect _contentRect;
}

@property(retain, nonatomic) id <PXLayoutEngineDataSourceSnapshot> dataSourceSnapshot; // @synthesize dataSourceSnapshot=_dataSourceSnapshot;
@property(readonly, nonatomic) CGRect contentRect; // @synthesize contentRect=_contentRect;
// - (void).cxx_destruct;
- (void)enumerateGeometriesForItemsInRect:(CGRect)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (struct _PXLayoutGeometry)geometryForItem:(id)arg1;
- (id)description;
- (id)initWithContentRect:(CGRect)arg1;
- (id)init;

@end
