/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFaceFeature : CIFeature {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    } bounds;
    BOOL hasLeftEyePosition;
    BOOL hasMouthPosition;
    BOOL hasRightEyePosition;
    BOOL hasTrackingFrameCount;
    BOOL hasTrackingID;
    } leftEyePosition;
    } mouthPosition;
    } rightEyePosition;
    int trackingFrameCount;
    int trackingID;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property BOOL hasLeftEyePosition;
@property BOOL hasMouthPosition;
@property BOOL hasRightEyePosition;
@property BOOL hasTrackingFrameCount;
@property BOOL hasTrackingID;
@property struct CGPoint { float x1; float x2; } leftEyePosition;
@property struct CGPoint { float x1; float x2; } mouthPosition;
@property struct CGPoint { float x1; float x2; } rightEyePosition;
@property int trackingFrameCount;
@property int trackingID;

+ (id)faceFeatureWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)faceFeaturesWithBoundsArray:(const struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 count:(unsigned int)arg2;

- (id).cxx_construct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (BOOL)hasLeftEyePosition;
- (BOOL)hasMouthPosition;
- (BOOL)hasRightEyePosition;
- (BOOL)hasTrackingFrameCount;
- (BOOL)hasTrackingID;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 hasLeftEyePosition:(BOOL)arg2 leftEyePosition:(struct CGPoint { float x1; float x2; })arg3 hasRightEyePosition:(BOOL)arg4 rightEyePosition:(struct CGPoint { float x1; float x2; })arg5 hasMouthPosition:(BOOL)arg6 mouthPosition:(struct CGPoint { float x1; float x2; })arg7 hasTrackingID:(BOOL)arg8 trackingID:(int)arg9 hasTrackingFrameCount:(BOOL)arg10 trackingFrameCount:(int)arg11;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })leftEyePosition;
- (struct CGPoint { float x1; float x2; })mouthPosition;
- (struct CGPoint { float x1; float x2; })rightEyePosition;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHasLeftEyePosition:(BOOL)arg1;
- (void)setHasMouthPosition:(BOOL)arg1;
- (void)setHasRightEyePosition:(BOOL)arg1;
- (void)setHasTrackingFrameCount:(BOOL)arg1;
- (void)setHasTrackingID:(BOOL)arg1;
- (void)setLeftEyePosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setMouthPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setRightEyePosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTrackingFrameCount:(int)arg1;
- (void)setTrackingID:(int)arg1;
- (int)trackingFrameCount;
- (int)trackingID;
- (id)type;

@end