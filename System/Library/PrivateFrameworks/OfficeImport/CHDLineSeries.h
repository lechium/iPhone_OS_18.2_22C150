//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHDMarker, NSString;

__attribute__((visibility("hidden")))
@interface CHDLineSeries
{
    CHDMarker *mMarker;	// 128 = 0x80
    _Bool mSmooth;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000038ef45
- (void)setSmooth:(_Bool)arg1;	// IMP=0x00000000001891b6
- (_Bool)isSmooth;	// IMP=0x000000000038ef35
- (void)setMarker:(id)arg1;	// IMP=0x0000000000189704
- (id)marker;	// IMP=0x00000000001898a7
- (id)initWithChart:(id)arg1;	// IMP=0x0000000000189177

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

