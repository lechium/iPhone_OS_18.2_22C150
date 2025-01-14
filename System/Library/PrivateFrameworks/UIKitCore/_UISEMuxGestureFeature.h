//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary, NSString;
@protocol _UISEGestureFeatureSettings;

__attribute__((visibility("hidden")))
@interface _UISEMuxGestureFeature
{
    id <_UISEGestureFeatureSettings> _settings;	// 8 = 0x8
    CDUnknownBlockType _createFeatureBlock;	// 16 = 0x10
    NSMutableDictionary *_subfeatures;	// 24 = 0x18
    unsigned long long _fails;	// 32 = 0x20
    unsigned long long _recognizes;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000c2cacb
@property(readonly, nonatomic) NSDictionary *subfeatures; // @synthesize subfeatures=_subfeatures;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;	// IMP=0x0000000000c2c9d0
- (id)debugDictionary;	// IMP=0x0000000000c2c879
- (void)featureDidChangeState:(id)arg1;	// IMP=0x0000000000c2c7bc
- (id)initWithSettings:(id)arg1 createFeatureBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c2c709

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

