//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHDChart, NSData;

__attribute__((visibility("hidden")))
@interface EBEscherShape
{
    NSData *mChartData;	// 32 = 0x20
    _Bool mShowLegend;	// 40 = 0x28
    CHDChart *mChart;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000398131
- (void)setChart:(id)arg1;	// IMP=0x00000000003980e7
- (id)chart;	// IMP=0x00000000003980d2
- (void)setShowLegend:(_Bool)arg1;	// IMP=0x00000000003980c2
- (_Bool)showLegend;	// IMP=0x00000000003980b2
- (void)setChartData:(id)arg1;	// IMP=0x000000000039809e
- (id)chartData;	// IMP=0x0000000000398089

@end

