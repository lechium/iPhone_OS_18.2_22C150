//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OITSUBezierPath;

__attribute__((visibility("hidden")))
@interface MFPhoneRegion
{
    OITSUBezierPath *m_path;	// 8 = 0x8
    struct CGRect m_bounds;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000036aad6
- (int)invert:(id)arg1;	// IMP=0x000000000036aace
- (int)frame:(id)arg1 in_brush:(id)arg2;	// IMP=0x000000000036aac6
- (int)fill:(id)arg1 in_brush:(id)arg2;	// IMP=0x000000000036aaa0
- (id)pathForClippingWithDeviceContext:(id)arg1;	// IMP=0x000000000036a9e6
- (id)initWithPath:(id)arg1 in_bounds:(struct CGRect)arg2;	// IMP=0x000000000036a8e5
- (id)initWithRects:(id)arg1 in_bounds:(struct CGRect)arg2 in_dc:(id)arg3;	// IMP=0x000000000036a664

@end

