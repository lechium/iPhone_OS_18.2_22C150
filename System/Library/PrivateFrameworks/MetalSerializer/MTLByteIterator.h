//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MTLByteIterator : NSObject
{
    void *buffer;	// 8 = 0x8
    unsigned long long currentOffset;	// 16 = 0x10
    unsigned long long length;	// 24 = 0x18
}

+ (id)iteratorForBuffer:(void *)arg1 withLength:(unsigned long long)arg2;	// IMP=0x006000000001b63c
- (void)advance:(unsigned long long)arg1;	// IMP=0x000000000001b724
@property(readonly) unsigned long long bytesLeft;
- (void)truncateTo:(unsigned long long)arg1;	// IMP=0x000000000001b6d9
- (void)readBytes:(unsigned long long)arg1 into:(void *)arg2;	// IMP=0x000000000001b677
- (id)initWithBuffer:(void *)arg1 withLength:(unsigned long long)arg2;	// IMP=0x000000000001b5f9

@end

