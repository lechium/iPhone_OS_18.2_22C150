//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CUIPSDGradientDoubleColorStop
{
    struct _psdGradientColor leadOutColor;	// 48 = 0x30
}

+ (id)doubleColorStopWithLocation:(double)arg1 leadInColor:(struct _psdGradientColor)arg2 leadOutColor:(struct _psdGradientColor)arg3;	// IMP=0x001000000002826a
+ (void)initialize;	// IMP=0x001000000002822e
- (id)description;	// IMP=0x0000000000028616
- (_Bool)isDoubleStop;	// IMP=0x000000000002860e
- (struct _psdGradientColor)leadOutColor;	// IMP=0x00000000000285ee
- (struct _psdGradientColor)leadInColor;	// IMP=0x00000000000285bb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002848b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000028378
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000028329
- (id)initWithLocation:(double)arg1 leadInColor:(struct _psdGradientColor)arg2 leadOutColor:(struct _psdGradientColor)arg3;	// IMP=0x00000000000282c9

@end
