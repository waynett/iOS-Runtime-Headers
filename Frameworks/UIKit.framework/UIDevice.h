/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSUUID;

@interface UIDevice : NSObject {
    struct { 
        unsigned int batteryMonitoringEnabled : 1; 
        unsigned int proximityMonitoringEnabled : 1; 
        unsigned int expectsFaceContactInLandscape : 1; 
        unsigned int orientation : 3; 
        unsigned int batteryState : 2; 
        unsigned int proximityState : 1; 
    float _batteryLevel;
    } _deviceFlags;
    int _numDeviceOrientationObservers;
}

@property(setter=_setBacklightLevel:) float _backlightLevel;
@property(readonly) float batteryLevel;
@property(getter=isBatteryMonitoringEnabled) BOOL batteryMonitoringEnabled;
@property(readonly) int batteryState;
@property(retain,readonly) NSString * buildVersion;
@property(getter=isGeneratingDeviceOrientationNotifications,readonly) BOOL generatesDeviceOrientationNotifications;
@property(retain,readonly) NSUUID * identifierForVendor;
@property(retain,readonly) NSString * localizedModel;
@property(retain,readonly) NSString * model;
@property(getter=isMultitaskingSupported,readonly) BOOL multitaskingSupported;
@property(retain,readonly) NSString * name;
@property int orientation;
@property(readonly) int orientation;
@property(getter=isProximityMonitoringEnabled) BOOL proximityMonitoringEnabled;
@property(readonly) BOOL proximityState;
@property(retain,readonly) NSString * systemName;
@property(retain,readonly) NSString * systemVersion;
@property(readonly) int userInterfaceIdiom;

+ (BOOL)_isWatch;
+ (BOOL)_isWatchCompanion;
+ (id)currentDevice;
+ (int)currentDeviceOrientationAllowingAmbiguous:(BOOL)arg1;
+ (id)modelSpecificLocalizedStringKeyForKey:(id)arg1;
+ (id)platformString;
+ (id)platformString;

- (float)_backlightLevel;
- (void)_clearGraphicsQualityOverride;
- (id)_currentProduct;
- (id)_deviceInfoForKey:(struct __CFString { }*)arg1;
- (id)_deviceInfoForKey:(struct __CFString { }*)arg1;
- (void)_enableDeviceOrientationEvents:(BOOL)arg1;
- (int)_graphicsQuality;
- (int)_graphicsQualityIncludingMediumN41:(BOOL)arg1;
- (BOOL)_hasGraphicsQualityOverride;
- (BOOL)_isTTYEnabled;
- (int)_keyboardGraphicsQuality;
- (id)_mediumQualityProductsIncludingN41:(BOOL)arg1;
- (void)_playSystemSound:(unsigned long)arg1;
- (int)_predictionGraphicsQuality;
- (void)_registerForSystemSounds:(id)arg1;
- (void)_setActiveUserInterfaceIdiom:(int)arg1;
- (void)_setBacklightLevel:(float)arg1;
- (void)_setBatteryLevel:(float)arg1;
- (void)_setBatteryState:(int)arg1;
- (void)_setExpectsFaceContactInLandscape:(BOOL)arg1;
- (void)_setGraphicsQualityOverride:(int)arg1;
- (void)_setProximityState:(BOOL)arg1;
- (float)_softwareDimmingAlpha;
- (void)_unregisterForSystemSounds:(id)arg1;
- (void)_updateSystemSoundActiveStatus:(id)arg1;
- (float)batteryLevel;
- (int)batteryState;
- (void)beginGeneratingDeviceOrientationNotifications;
- (id)buildVersion;
- (void)endGeneratingDeviceOrientationNotifications;
- (id)identifierForVendor;
- (BOOL)isBatteryMonitoringEnabled;
- (BOOL)isGeneratingDeviceOrientationNotifications;
- (BOOL)isMultitaskingSupported;
- (BOOL)isProximityMonitoringEnabled;
- (id)localizedModel;
- (id)model;
- (id)name;
- (int)orientation;
- (void)playInputClick;
- (BOOL)proximityState;
- (int)sbf_bannerGraphicsQuality;
- (int)sbf_controlCenterGraphicsQuality;
- (void)setBatteryMonitoringEnabled:(BOOL)arg1;
- (void)setOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)setOrientation:(int)arg1;
- (void)setProximityMonitoringEnabled:(BOOL)arg1;
- (id)systemName;
- (id)systemVersion;
- (id)uniqueIdentifier;
- (int)userInterfaceIdiom;

@end
