//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface EXOfficeArtClient
{
    _Bool mAutoChartFillIsHollow;	// 8 = 0x8
    _Bool mAutoChartStrokeIsHollow;	// 9 = 0x9
}

@property _Bool autoChartStrokeIsHollow; // @synthesize autoChartStrokeIsHollow=mAutoChartStrokeIsHollow;
@property _Bool autoChartFillIsHollow; // @synthesize autoChartFillIsHollow=mAutoChartFillIsHollow;
- (_Bool)chartAutoStrokeIsHollow;	// IMP=0x00000000003b550e
- (_Bool)chartAutoFillIsHollow;	// IMP=0x00000000003b54fe
- (void)readClientDataFromNode:(struct _xmlNode *)arg1 toDrawable:(id)arg2 state:(id)arg3;	// IMP=0x0000000000218a78

@end

