//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKLineSeries;

__attribute__((visibility("hidden")))
@interface _HKAudioVisibleRangeQuantityContextDelegate
{
    HKLineSeries *_audioOverlayLineSeries;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000eb4dd
@property(readonly, nonatomic) HKLineSeries *audioOverlayLineSeries; // @synthesize audioOverlayLineSeries=_audioOverlayLineSeries;
- (id)formatterForTimescope:(long long)arg1;	// IMP=0x00000000000eb4c4
- (void)_enumerateAudioExposureChartPoints:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000eb304
- (id)valueContextString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;	// IMP=0x00000000000eb195
- (id)valueString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;	// IMP=0x00000000000eae00
- (id)alternateLineSeries;	// IMP=0x00000000000eadee
- (id)initWithCustomDataSource:(id)arg1 primaryDisplayType:(id)arg2;	// IMP=0x00000000000ead91

@end
