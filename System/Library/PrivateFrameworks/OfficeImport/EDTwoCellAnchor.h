//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface EDTwoCellAnchor
{
    struct EDCellAnchorMarker mFrom;	// 8 = 0x8
    struct EDCellAnchorMarker mTo;	// 24 = 0x18
    _Bool mIsRelative;	// 40 = 0x28
    int mEditAs;	// 44 = 0x2c
}

- (id).cxx_construct;	// IMP=0x0000000000140c07
- (void)setEditAs:(int)arg1;	// IMP=0x0000000000140c9b
- (int)editAs;	// IMP=0x00000000003a485f
- (void)setRelative:(_Bool)arg1;	// IMP=0x0000000000140c8b
- (_Bool)isRelative;	// IMP=0x0000000000144245
- (void)setTo:(struct EDCellAnchorMarker)arg1;	// IMP=0x0000000000140cc1
- (struct EDCellAnchorMarker)to;	// IMP=0x0000000000144612
- (void)setFrom:(struct EDCellAnchorMarker)arg1;	// IMP=0x0000000000140cab
- (struct EDCellAnchorMarker)from;	// IMP=0x000000000014422f
- (id)init;	// IMP=0x0000000000140c29

@end
