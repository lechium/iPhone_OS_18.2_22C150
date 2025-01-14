//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CMDiagramPointSegmentedPieMapper
{
    double mStartAngle;	// 72 = 0x48
    double mStopAngle;	// 80 = 0x50
    _Bool mDrawArrows;	// 88 = 0x58
    unsigned long long mSegmentIndex;	// 96 = 0x60
    unsigned long long mSegmentCount;	// 104 = 0x68
}

- (id)transformPresentationName;	// IMP=0x000000000045cb5c
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x000000000045c0f7
- (id)_arrowFillWithState:(id)arg1;	// IMP=0x000000000045bf41
- (void)setSegmentCount:(unsigned long long)arg1;	// IMP=0x000000000045bf30
- (void)setSegmentIndex:(unsigned long long)arg1;	// IMP=0x000000000045bf1f
- (void)setDrawArrows:(_Bool)arg1;	// IMP=0x000000000045bf0f
- (void)setStopAngle:(double)arg1;	// IMP=0x000000000045befd
- (void)setStartAngle:(double)arg1;	// IMP=0x000000000045beeb

@end

