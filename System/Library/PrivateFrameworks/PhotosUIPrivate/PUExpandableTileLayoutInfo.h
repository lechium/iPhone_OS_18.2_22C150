//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileLayoutInfo.h"

__attribute__((visibility("hidden")))
@interface PUExpandableTileLayoutInfo : PUTileLayoutInfo
{
    _Bool _isExpanded;	// 8 = 0x8
    struct CGSize _expandedSize;	// 16 = 0x10
    struct CGSize _unexpandedSize;	// 32 = 0x20
}

@property(readonly, nonatomic) struct CGSize unexpandedSize; // @synthesize unexpandedSize=_unexpandedSize;
@property(readonly, nonatomic) struct CGSize expandedSize; // @synthesize expandedSize=_expandedSize;
@property(readonly, nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
- (_Bool)isGeometryEqualToLayoutInfo:(id)arg1;	// IMP=0x00000000002a9ebd
- (id)clone;	// IMP=0x00000000002a9d09
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 cornerRadius:(double)arg4 alpha:(double)arg5 transform:(struct CGAffineTransform)arg6 zPosition:(double)arg7 coordinateSystem:(id)arg8 isExpanded:(_Bool)arg9 expandedSize:(struct CGSize)arg10 unexpandedSize:(struct CGSize)arg11;	// IMP=0x00000000002a9c4e
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 cornerRadius:(double)arg4 alpha:(double)arg5 transform:(struct CGAffineTransform)arg6 zPosition:(double)arg7 coordinateSystem:(id)arg8;	// IMP=0x00000000002a9bfe

@end

