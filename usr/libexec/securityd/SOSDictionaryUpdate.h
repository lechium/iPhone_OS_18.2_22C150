//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface SOSDictionaryUpdate : NSObject
{
    char *currentHashBuf;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000025a75e
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)reset;	// IMP=0x001000000025a6ca
- (_Bool)hasChanged:(struct __CFDictionary *)arg1;	// IMP=0x001000000025a5e9
- (void)onqueueFreeHashBuff;	// IMP=0x001000000025a59b
- (void)dealloc;	// IMP=0x001000000025a55d
- (id)init;	// IMP=0x001000000025a4fd

@end
