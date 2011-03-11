/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class ADAdDefaultsOverrides, NSString, NSMutableArray;

@interface ADAdBatchResponse : PBCodable  {
    int _error;
    BOOL _hasError;
    NSString *_batchId;
    NSMutableArray *_ads;
    BOOL _supplyMetrics;
    BOOL _hasSupplyMetrics;
    ADAdDefaultsOverrides *_overrideDefaults;
}

@property(readonly) BOOL hasBatchId;
@property(readonly) int adsCount;
@property(readonly) BOOL hasOverrideDefaults;
@property(retain) ADAdDefaultsOverrides * overrideDefaults;
@property(readonly) BOOL hasSupplyMetrics;
@property BOOL supplyMetrics;
@property(retain) NSMutableArray * ads;
@property(retain) NSString * batchId;
@property(readonly) BOOL hasError;
@property int error;

+ (void)initialize;

- (BOOL)hasBatchId;
- (BOOL)hasOverrideDefaults;
- (int)adsCount;
- (void)setAd:(id)arg1 atIndex:(unsigned int)arg2;
- (id)adAtIndex:(unsigned int)arg1;
- (void)addAd:(id)arg1;
- (id)overrideDefaults;
- (void)setOverrideDefaults:(id)arg1;
- (id)ads;
- (void)setAds:(id)arg1;
- (BOOL)hasSupplyMetrics;
- (void)setSupplyMetrics:(BOOL)arg1;
- (BOOL)supplyMetrics;
- (id)batchId;
- (void)setBatchId:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasError;
- (void)writeTo:(id)arg1;
- (int)error;
- (void)setError:(int)arg1;

@end