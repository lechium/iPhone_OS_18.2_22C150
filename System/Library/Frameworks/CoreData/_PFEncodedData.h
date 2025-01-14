//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface _PFEncodedData : NSData
{
    NSData *_aData;	// 8 = 0x8
    unsigned int _byteCount;	// 16 = 0x10
    unsigned int _reserved;	// 20 = 0x14
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x006000000025ea58
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x000000000025ee20
- (_Bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000025edd5
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x000000000025edbb
- (_Bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000025ed70
- (struct _NSRange)rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;	// IMP=0x000000000025ecd9
- (_Bool)isEqualToData:(id)arg1;	// IMP=0x000000000025ec7b
- (id)subdataWithRange:(struct _NSRange)arg1;	// IMP=0x000000000025ec5a
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000025ec45
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000025ec31
- (const void *)bytes;	// IMP=0x000000000025ec27
- (unsigned long long)length;	// IMP=0x000000000025ec17
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025eb81
- (id)mutableCopy;	// IMP=0x000000000025eb6d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025eb62
- (id)description;	// IMP=0x000000000025eafa
- (_Bool)_tryRetain;	// IMP=0x000000000025eadd
- (_Bool)_isDeallocating;	// IMP=0x000000000025eac0
- (unsigned long long)retainCount;	// IMP=0x000000000025eaa3
- (oneway void)release;	// IMP=0x000000000025ea8d
- (id)retain;	// IMP=0x000000000025ea69
- (Class)classForCoder;	// IMP=0x000000000025ea47
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000025ea35
- (id)init;	// IMP=0x000000000025e9f0

@end

