//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CHDBar3DType
{
    int mGapDepth;	// 60 = 0x3c
    int mShapeType;	// 64 = 0x40
}

+ (id)stringWithShapeType:(int)arg1;	// IMP=0x006000000038b918
+ (_Bool)is3DType;	// IMP=0x006000000021acfa
- (void)setShapeType:(int)arg1;	// IMP=0x00000000001df9e9
- (int)shapeType;	// IMP=0x000000000021aa99
- (void)setGapDepth:(int)arg1;	// IMP=0x00000000001df983
- (int)gapDepth;	// IMP=0x000000000038b908
- (id)initWithChart:(id)arg1;	// IMP=0x00000000001df933

@end
