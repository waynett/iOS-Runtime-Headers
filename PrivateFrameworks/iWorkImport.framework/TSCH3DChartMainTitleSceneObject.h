/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartMainTitleSceneObject : TSCH3DChartTitleSceneObject {
}

+ (id)paragraphStyleForTitleFontForInfo:(id)arg1;
+ (unsigned long long)styleIndexForInfo:(id)arg1;

- (bool)canEditTextForSelectionPath:(id)arg1 forInfo:(id)arg2;
- (bool)canRenderSelectionPath:(id)arg1 forInfo:(id)arg2;
- (id)convertSelectionPathTo3D:(id)arg1 path:(id)arg2;
- (bool)enabledForInfo:(id)arg1;
- (bool)isAnnotated;
- (struct LabelTransform { struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; } x1; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; } x2; unsigned int x3; float x4; boolx5; })labelTransformForPositioner:(id)arg1;
- (int)labelType;
- (id)selectionPathForInfo:(id)arg1 scene:(id)arg2 pickedPoint:(id)arg3;
- (id)textForInfo:(id)arg1;

@end