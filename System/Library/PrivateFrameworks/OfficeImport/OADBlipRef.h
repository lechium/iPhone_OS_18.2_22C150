//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, OADBlip;

__attribute__((visibility("hidden")))
@interface OADBlipRef : NSObject
{
    int mIndex;	// 8 = 0x8
    NSString *mName;	// 16 = 0x10
    NSMutableArray *mEffects;	// 24 = 0x18
    OADBlip *mBlip;	// 32 = 0x20
}

+ (id)inflatedExtensionForGzippedExtension:(id)arg1;	// IMP=0x00100000003058e7
+ (int)blipTypeForImageData:(id)arg1;	// IMP=0x0010000000305608
+ (int)blipTypeForContentType:(id)arg1;	// IMP=0x00100000001a7a3f
+ (int)blipTypeForExtension:(id)arg1;	// IMP=0x001000000030503c
+ (id)blipRefWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3;	// IMP=0x00100000001a81e8
+ (id)blipRefWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4;	// IMP=0x00100000001a820d
- (void).cxx_destruct;	// IMP=0x0000000000305a05
- (id)description;	// IMP=0x00000000003059c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000104a4a
- (unsigned long long)hash;	// IMP=0x0000000000103ec5
- (id)effects;	// IMP=0x00000000001af550
- (_Bool)isNull;	// IMP=0x00000000003059af
- (void)removeEffectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000305026
- (id)effectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000103dd1
- (unsigned long long)effectCount;	// IMP=0x0000000000103dbb
- (void)setEffects:(id)arg1;	// IMP=0x00000000001af55e
- (void)addEffect:(id)arg1;	// IMP=0x00000000000dd365
- (void)setBlip:(id)arg1;	// IMP=0x00000000000ddd7a
- (id)blip;	// IMP=0x00000000000b13ab
- (void)setName:(id)arg1;	// IMP=0x0000000000305015
- (id)name;	// IMP=0x00000000001a82c4
- (void)setIndex:(int)arg1;	// IMP=0x000000000030500c
- (int)index;	// IMP=0x00000000000b13b9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021b280
- (id)initWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3;	// IMP=0x00000000000afa46
- (id)initWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4;	// IMP=0x00000000000afa5b
- (id)init;	// IMP=0x0000000000304ffe

@end

