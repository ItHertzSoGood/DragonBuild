//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentInsertionLayoutProvider-Protocol.h>

@class SXColumnLayout, SXLayoutBlueprint;
@protocol SXDOMObjectProviding, SXUnitConverterFactory;

@interface SXComponentInsertionLayoutProvider : NSObject <SXComponentInsertionLayoutProvider>
{
    SXLayoutBlueprint *_layoutBlueprint;
    id <SXDOMObjectProviding> _DOMObjectProvider;
    id <SXUnitConverterFactory> _unitConverterFactory;
}

@property(readonly, nonatomic) id <SXUnitConverterFactory> unitConverterFactory; // @synthesize unitConverterFactory=_unitConverterFactory;
@property(readonly, nonatomic) id <SXDOMObjectProviding> DOMObjectProvider; // @synthesize DOMObjectProvider=_DOMObjectProvider;
@property(readonly, nonatomic) SXLayoutBlueprint *layoutBlueprint; // @synthesize layoutBlueprint=_layoutBlueprint;
// - (void).cxx_destruct;
- (id)layoutBlueprintForMarker:(id)arg1;
- (id)unitConverterForMarker:(id)arg1;
- (id)suggestedMarginForMarker:(id)arg1;
- (CGRect)frameForComponent:(id)arg1;
@property(readonly, nonatomic) SXColumnLayout *columnLayout;
@property(readonly, nonatomic) CGSize documentSize;
@property(readonly, nonatomic) CGSize viewportSize;
- (id)initWithBlueprint:(id)arg1 DOMObjectProvider:(id)arg2 unitConverterFactory:(id)arg3;

@end
