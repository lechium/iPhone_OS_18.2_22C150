//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface _PFEvanescentData : NSData
{
    unsigned long long _length;	// 8 = 0x8
    NSURL *_fileURL;	// 16 = 0x10
    int _openfd;	// 24 = 0x18
    const void *_activeMap;	// 32 = 0x20
    int _mapRefCount;	// 40 = 0x28
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x006000000025e880
- (id)subdataWithRange:(struct _NSRange)arg1;	// IMP=0x000000000025e94a
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000025e8e8
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000025e8d1
- (void)getBytes:(void *)arg1;	// IMP=0x000000000025e891
- (Class)classForCoder;	// IMP=0x000000000025e86f
- (const void *)bytes;	// IMP=0x000000000025e832
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025e7b3
- (void)enumerateByteRangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000025e74a
- (unsigned long long)hash;	// IMP=0x000000000025e730
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000025e6af
- (_Bool)isEqualToData:(id)arg1;	// IMP=0x000000000025e69d
- (void)invalidate;	// IMP=0x000000000025e693
- (unsigned long long)length;	// IMP=0x000000000025e3b3
- (id)description;	// IMP=0x000000000025e331
- (id)initWithPath:(id)arg1;	// IMP=0x000000000025e2f7
- (void)dealloc;	// IMP=0x000000000025e24b
- (id)initWithURL:(id)arg1;	// IMP=0x000000000025e0ec

@end

