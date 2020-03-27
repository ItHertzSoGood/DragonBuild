//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDStyledLayout.h>

@class NSArray, TSDEditableBezierPathSource, TSDFill, TSDInfoGeometry, TSDLineEnd, TSDMutableStroke, TSDPathSource, TSDShapeInfo, TSUBezierPath;

__attribute__((visibility("hidden")))
@interface TSDShapeLayout : TSDStyledLayout
{
    struct {
        unsigned int path:1;
        unsigned int pathIsOpen:1;
        unsigned int pathIsLineSegment:1;
        unsigned int headAndTail:1;
        unsigned int headLineEnd:1;
        unsigned int tailLineEnd:1;
        unsigned int clippedPath:1;
    } mShapeInvalidFlags;
    TSUBezierPath *mCachedPath;
    BOOL mCachedPathIsOpen;
    BOOL mCachedPathIsLineSegment;
    CDStruct_5bfcb38a mCachedPathBoundsStruct;
    CDStruct_5bfcb38a mCachedPathBoundsWithoutStrokeStruct;
    TSUBezierPath *mCachedClippedPath;
    CDStruct_5bfcb38a mCachedClippedPathStroked;
    CDStruct_5bfcb38a mCachedClippedPathRotatedStroked;
    CGAffineTransform mClippedPathRotatedTransform;
    CDStruct_5bfcb38a mCachedAlignmentFrame;
    CDStruct_5bfcb38a mCachedAlignmentFrameInRoot;
    CGAffineTransform mCachedAlignmentFrameInRootTransformInRoot;
    CGPoint mHeadPoint;
    CGPoint mTailPoint;
    CGPoint mHeadLineEndPoint;
    CGPoint mTailLineEndPoint;
    double mHeadLineEndAngle;
    double mTailLineEndAngle;
    long long mHeadCutSegment;
    long long mTailCutSegment;
    double mHeadCutT;
    double mTailCutT;
    TSDPathSource *mShrunkenPathSource;
    TSDPathSource *mOriginalShrunkenPathSource;
    TSDEditableBezierPathSource *mCachedEditableBezierPathSource;
    TSDPathSource *mCachedPathSource;
    TSDPathSource *mResizePathSource;
    TSDInfoGeometry *mResizeInfoGeometry;
    TSDInfoGeometry *mInitialInfoGeometry;
    TSDMutableStroke *mDynamicStroke;
    TSDFill *mDynamicFill;
    NSArray *mDynamicStrokeOffsetArray;
    BOOL mIsDynamicallyInvisible;
    CGSize mLastParentLimitedSize;
}

// - (void).cxx_destruct;
- (id)p_unitePath:(id)arg1 withLineEndForHead:(BOOL)arg2 stroke:(id)arg3;
- (CGRect)p_boundsOfLineEndForHead:(BOOL)arg1 transform:(CGAffineTransform)arg2;
- (id)p_createClippedPath;
- (void)p_validateTailLineEnd;
- (void)p_validateHeadLineEnd;
- (void)p_validateHeadAndTail;
- (void)p_invalidateClippedPath;
- (void)p_invalidateTail;
- (void)p_invalidateHead;
- (BOOL)p_cachedPathIsLineSegment;
- (BOOL)p_cachedPathIsOpen;
- (CGRect)p_cachedPathBoundsWithoutStroke;
- (CGRect)p_updatedCachedClipRectIfNeededForRotation:(CGAffineTransform)arg1;
- (CGRect)p_cachedClippedPathStroked;
- (CGRect)p_cachedPathBounds;
- (id)p_cachedPath;
- (void)validate;
- (void)transferLayoutGeometryToInfo:(id)arg1 withAdditionalTransform:(CGAffineTransform)arg2 assertIfInDocument:(BOOL)arg3;
- (id)i_computeWrapPathClosed:(BOOL)arg1;
- (id)i_computeWrapPath;
- (int)wrapType;
@property(readonly, nonatomic) TSDLineEnd *strokeTailLineEnd;
@property(readonly, nonatomic) TSDLineEnd *strokeHeadLineEnd;
@property(readonly, nonatomic) CGPoint unclippedTailPoint;
@property(readonly, nonatomic) CGPoint unclippedHeadPoint;
- (BOOL)supportsRotation;
- (CGSize)minimumSize;
- (BOOL)p_isInlineInsideResizingParentContainer;
- (BOOL)supportsResize;
- (void)invalidatePathBounds;
- (void)invalidatePath;
- (void)invalidateFrame;
- (BOOL)supportsCalloutAttributes;
- (BOOL)canResetTextAndObjectHandles;
- (BOOL)canBeIntersected;
@property(readonly, nonatomic) TSDFill *fill;
- (void)aliasPathForScale:(double)arg1 originalStroke:(id)arg2 adjustedStroke:(id )arg3 adjustedPath:(id )arg4 startDelta:(CGPoint )arg5 endDelta:(CGPoint )arg6;
- (void)aliasPathForScale:(double)arg1 adjustedStroke:(id )arg2 adjustedPath:(id )arg3 startDelta:(CGPoint )arg4 endDelta:(CGPoint )arg5;
- (CGRect)aliasedAlignmentFrameForScale:(double)arg1;
- (CGPoint)centerForConnecting;
- (BOOL)isInvisibleAutosizingShape;
- (BOOL)shouldBeDisplayedInShowMode;
- (BOOL)isInvisible;
- (CGRect)shapeFrameWithTransform:(CGAffineTransform)arg1 strokeDrawOptions:(NSUInteger)arg2;
- (CGRect)shapeFrameWithTransform:(CGAffineTransform)arg1;
@property(readonly, nonatomic) TSUBezierPath *clippedPathForLineEnds;
- (double)lineEndScale:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isTailEndOnLeft;
@property(readonly, nonatomic) double tailLineEndAngle;
@property(readonly, nonatomic) double headLineEndAngle;
@property(readonly, nonatomic) CGPoint tailLineEndPoint;
@property(readonly, nonatomic) CGPoint headLineEndPoint;
@property(readonly, nonatomic) CGPoint tailPoint;
@property(readonly, nonatomic) CGPoint headPoint;
@property(readonly, nonatomic) TSDInfoGeometry *layoutInfoGeometry;
@property(readonly, nonatomic) BOOL pathIsLineSegment;
@property(readonly, nonatomic) BOOL pathIsOpen;
- (id)smartPathSource;
@property(readonly, nonatomic) CGRect pathBoundsWithoutStroke;
@property(readonly, nonatomic) CGRect pathBounds;
@property(readonly, nonatomic) TSUBezierPath *path;
- (id)editablePathSource;
@property(readonly, nonatomic) TSDPathSource *pathSource;
@property(readonly, nonatomic) TSDShapeInfo *shapeInfo;
- (id)stroke;
- (BOOL)shouldAdjustForStrokeWidthForCollabCursor;
- (CGRect)frameForCulling;
- (CGRect)boundsForStandardKnobs;
- (void)processChangedProperty:(int)arg1;
- (CGRect)alignmentFrameInRoot;
- (CGRect)alignmentFrame;
- (void)setGeometry:(id)arg1;
- (CGAffineTransform)computeLayoutTransform;
- (double)scaleForInlineClampingUnrotatedSize:(CGSize)arg1 withTransform:(CGAffineTransform)arg2;
- (id)computeLayoutGeometry;
- (void)invalidate;
- (id)reliedOnLayouts;
@property(readonly, nonatomic) BOOL isFreehandDrawingSpacerShape;
- (id)layoutGeometryFromInfo;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;
- (id)textWrapperForExteriorWrap;

@end
