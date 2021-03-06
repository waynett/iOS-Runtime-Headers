/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDImageLayout, TSDInfoGeometry, TSDPathSource;

@interface TSDMaskLayout : TSDLayout {
    struct { 
        unsigned int path : 1; 
        unsigned int tightPathBounds : 1; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGPath { } *mCachedPath;
    struct CGPath { } *mCachedPathNoScale;
    } mCachedTightPathBounds;
    } mCachedTightPathBoundsNoScale;
    TSDInfoGeometry *mDynamicInfoGeometry;
    TSDPathSource *mDynamicPathSource;
    } mMaskInvalidFlags;
    float mPathScale;
    BOOL mScalingInMaskMode;
}

@property(readonly) BOOL hasSmartPath;
@property(readonly) TSDImageLayout * imageLayout;
@property float pathScale;

- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })affineTransformForTightPathBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentFrameForProvidingGuidesInRoot;
- (void)beginDynamicOperation;
- (id)computeLayoutGeometry;
- (void)dealloc;
- (id)dependentLayouts;
- (void)dragBy:(struct CGPoint { float x1; float x2; })arg1;
- (void)dynamicMovePathKnobDidBegin;
- (void)dynamicallyMovedSmartShapeKnobTo:(struct CGPoint { float x1; float x2; })arg1 withTracker:(id)arg2;
- (void)endDynamicOperation;
- (struct CGPoint { float x1; float x2; })getControlKnobPosition:(unsigned int)arg1;
- (BOOL)hasSmartPath;
- (id)imageLayout;
- (id)infoGeometry;
- (id)initWithInfo:(id)arg1;
- (void)invalidate;
- (void)invalidatePath;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })layoutTransformInInfoSpace:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (id)maskInfo;
- (void)maskModeScaleDidBegin;
- (void)maskModeScaleDidEnd;
- (unsigned int)numberOfControlKnobs;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })originalTransformForProvidingGuides;
- (struct CGPath { }*)p_cachedPath;
- (struct CGPath { }*)p_cachedPathNoScale;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_cachedTightPathBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_cachedTightPathBoundsNoScale;
- (void)p_calculateCachedPathIfNecessary;
- (void)p_calculateTightPathBoundsIfNecessary;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)p_setDynamicInfoGeometry:(id)arg1;
- (struct CGPath { }*)path;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pathBounds;
- (float)pathScale;
- (id)pathSource;
- (void)processChangedProperty:(int)arg1;
- (void)resizeWithTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 asChild:(BOOL)arg2;
- (void)setControlKnobPosition:(unsigned int)arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)setPathScale:(float)arg1;
- (BOOL)shouldDisplayGuides;
- (BOOL)shouldSnapWhileResizing;
- (void)takeScaledMaskGeometry:(id)arg1;

@end
