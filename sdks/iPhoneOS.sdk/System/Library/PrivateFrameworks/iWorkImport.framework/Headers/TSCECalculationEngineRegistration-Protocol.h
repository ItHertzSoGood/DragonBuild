//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKModel-Protocol.h>

@class TSCECalculationEngine, TSPObject;
@protocol TSCECalculationEngineRegistration, TSCEFormulaOwning;

@protocol TSCECalculationEngineRegistration <TSKModel>
- (id <TSCEFormulaOwning>)formulaOwner;
- (TSPObject<TSCECalculationEngineRegistration> *)objectToArchiveInDependencyTracker;
- (UUIDData_5fbc143e)formulaOwnerUID;
- (BOOL)registerLast;
- (void)unregisterFromCalcEngine:(TSCECalculationEngine *)arg1;
- (void)registerWithCalcEngineForDocumentLoad:(TSCECalculationEngine *)arg1;
@end
