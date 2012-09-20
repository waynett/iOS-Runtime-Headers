/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, UITouch;

@interface UIKeyboardWipeGestureRecognizer : UIGestureRecognizer  {
    NSMutableArray *_endPoints;
    UITouch *candidateEndpoint;
}

@property(retain) UITouch * candidateEndpoint;


- (void)reset;
- (void)dealloc;
- (BOOL)segmentsLookLikeAWipe:(id)arg1;
- (id)candidateEndpoint;
- (void)setCandidateEndpoint:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end