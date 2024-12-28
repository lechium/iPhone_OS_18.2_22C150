//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface _NSBPlistMappedData : NSData
{
    void *ptr;	// 8 = 0x8
    unsigned long long size;	// 16 = 0x10
    unsigned long long mappingIndex;	// 24 = 0x18
    CDStruct_f10e9336 bplistTrailer;	// 32 = 0x20
    unsigned long long bplistOffset;	// 64 = 0x40
    unsigned char bplistMarker;	// 72 = 0x48
}

- (_Bool)_getBPlistMarker:(char *)arg1 offset:(unsigned long long *)arg2 trailer:(CDStruct_f10e9336 *)arg3;	// IMP=0x000000000077c4bd
- (unsigned long long)_bplistObjectsRangeEnd;	// IMP=0x000000000077c4a8
- (unsigned long long)length;	// IMP=0x000000000077c497
- (const void *)bytes;	// IMP=0x000000000077c486
- (long long)mappingIndex;	// IMP=0x000000000077c475
- (void)setMappingIndex:(long long)arg1;	// IMP=0x000000000077c464
- (id)initWithFileURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000077c27c
- (void)dealloc;	// IMP=0x000000000077c203
- (id)initWithBinaryPlistData:(void *)arg1 size:(unsigned long long)arg2 trailer:(CDStruct_f10e9336)arg3 offset:(unsigned long long)arg4 marker:(unsigned char)arg5;	// IMP=0x000000000077c137

@end
