//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface PDAnimateTimeBehavior
{
    NSString *mTo;	// 184 = 0xb8
    NSString *mFrom;	// 192 = 0xc0
    NSString *mBy;	// 200 = 0xc8
    _Bool mHasCalcMode;	// 208 = 0xd0
    int mCalcMode;	// 212 = 0xd4
    _Bool mHasValueType;	// 216 = 0xd8
    int mValueType;	// 220 = 0xdc
}

- (void).cxx_destruct;	// IMP=0x0000000000437f5e
- (void)setValueType:(int)arg1;	// IMP=0x0000000000437f43
- (int)valueType;	// IMP=0x0000000000437f33
- (_Bool)hasValueType;	// IMP=0x0000000000437f23
- (void)setCalcMode:(int)arg1;	// IMP=0x0000000000437f08
- (int)calcMode;	// IMP=0x0000000000437ef8
- (_Bool)hasCalcMode;	// IMP=0x0000000000437ee8
- (void)setBy:(id)arg1;	// IMP=0x0000000000437ed4
- (id)by;	// IMP=0x0000000000437ebf
- (void)setFrom:(id)arg1;	// IMP=0x0000000000437eab
- (id)from;	// IMP=0x0000000000437e96
- (void)setTo:(id)arg1;	// IMP=0x0000000000437e82
- (id)to;	// IMP=0x0000000000437e6d
- (id)init;	// IMP=0x00000000001e93c8

@end

