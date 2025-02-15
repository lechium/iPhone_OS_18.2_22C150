//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol _UISEGestureFeatureSettings, _UISETouchedEdgesProvider;

__attribute__((visibility("hidden")))
@interface _UISEOrthogonalHysteresisGestureFeature
{
    id <_UISEGestureFeatureSettings> _settings;	// 8 = 0x8
    id <_UISETouchedEdgesProvider> _provider;	// 16 = 0x10
    struct CGPoint _initialLocation;	// 24 = 0x18
    double _initialTimestamp;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000c3496d
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;	// IMP=0x0000000000c346cf
- (id)initWithSettings:(id)arg1 touchedEdgesProvider:(id)arg2;	// IMP=0x0000000000c34639

@end

