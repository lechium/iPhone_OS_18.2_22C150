//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface OADSubBlip
{
    int mType;	// 20 = 0x14
    NSData *mData;	// 24 = 0x18
    struct CGSize mSizeInPoints;	// 32 = 0x20
    int mSizeInBytes;	// 48 = 0x30
    struct CGRect mFrame;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000305d43
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000305bb1
- (unsigned long long)hash;	// IMP=0x0000000000305a90
- (_Bool)isLoaded;	// IMP=0x00000000000b15f8
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000000def12
- (struct CGRect)frame;	// IMP=0x0000000000305a70
- (void)setSizeInBytes:(int)arg1;	// IMP=0x00000000001a81d8
- (int)sizeInBytes;	// IMP=0x0000000000305a60
- (void)setSizeInPoints:(struct CGSize)arg1;	// IMP=0x00000000000deefa
- (struct CGSize)sizeInPoints;	// IMP=0x0000000000305a48
- (void)setType:(int)arg1;	// IMP=0x0000000000305a38
- (int)type;	// IMP=0x00000000000b18e3
- (void)setData:(id)arg1;	// IMP=0x00000000000b186e
- (id)data;	// IMP=0x00000000000b18f3
- (id)initWithData:(id)arg1 type:(int)arg2;	// IMP=0x000000000001d758

@end

