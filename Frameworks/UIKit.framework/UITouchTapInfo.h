/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITouchTapInfo : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    float _multiTapDelay;
    float _rejectAsTapThrehold;
    } _startPosition;
    double _startTime;
    unsigned int _tapCount;
    float _viewTouchPauseThreshold;
}

- (BOOL)_touchLocationConsideredMovement:(id)arg1;
- (BOOL)cancelTouchTracking;
- (void)clearTapState;
- (void)releaseAndClearWeakRefs;
- (void)touchBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchMoved:(id)arg1 withEvent:(id)arg2;

@end
