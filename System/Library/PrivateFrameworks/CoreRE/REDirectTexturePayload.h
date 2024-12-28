//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol DRTexture;

__attribute__((visibility("hidden")))
@interface REDirectTexturePayload
{
    unsigned char _identifier[16];	// 8 = 0x8
    id <DRTexture> _directTexture;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000004266cb
- (void).cxx_destruct;	// IMP=0x0000000000426a85
@property(retain, nonatomic) id <DRTexture> directTexture; // @synthesize directTexture=_directTexture;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000426962
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004267bd
- (id)initWithDirectTexture:(id)arg1;	// IMP=0x00000000004266e3
@property(readonly, nonatomic) const unsigned char (*identifier)[16];

@end
