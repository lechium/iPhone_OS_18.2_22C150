//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CFPDPurgeableBuffer
{
    struct __CFData *handle;	// 8 = 0x8
    unsigned long long allocSize;	// 16 = 0x10
    _Bool safe;	// 24 = 0x18
    _Bool usedMalloc;	// 25 = 0x19
}

- (void)dealloc;	// IMP=0x000000000004e3df
- (_Bool)purgable;	// IMP=0x000000000004e3d0
- (void)endAccessing;	// IMP=0x000000000004e339
- (_Bool)beginAccessing;	// IMP=0x000000000004e281
- (unsigned long long)length;	// IMP=0x000000000004e271
- (void *)bytes;	// IMP=0x000000000004e246
- (id)initWithPropertyList:(void *)arg1;	// IMP=0x000000000004e0c2
- (id)initWithFileDescriptor:(int)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000004dc93

@end
