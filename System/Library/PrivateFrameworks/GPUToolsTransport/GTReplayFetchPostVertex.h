//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GTReplayFetchPostVertex
{
    _Bool _objectShaderThreadgroupBoundsPresent;	// 8 = 0x8
    CDUnion_afa92939 _dispatchUID;	// 16 = 0x10
    struct GTPoint3D _objectShaderThreadgroupBeginBounds;	// 24 = 0x18
    struct GTPoint3D _objectShaderThreadgroupEndBounds;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000005247
@property(nonatomic) struct GTPoint3D objectShaderThreadgroupEndBounds; // @synthesize objectShaderThreadgroupEndBounds=_objectShaderThreadgroupEndBounds;
@property(nonatomic) struct GTPoint3D objectShaderThreadgroupBeginBounds; // @synthesize objectShaderThreadgroupBeginBounds=_objectShaderThreadgroupBeginBounds;
@property(nonatomic) _Bool objectShaderThreadgroupBoundsPresent; // @synthesize objectShaderThreadgroupBoundsPresent=_objectShaderThreadgroupBoundsPresent;
@property(nonatomic) CDUnion_afa92939 dispatchUID; // @synthesize dispatchUID=_dispatchUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000535c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000524f

@end

