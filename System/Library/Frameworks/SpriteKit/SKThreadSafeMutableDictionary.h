//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SKThreadSafeMutableDictionary : NSObject
{
    struct _opaque_pthread_mutex_t _storageLock;	// 8 = 0x8
    NSMutableDictionary *_storage;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000001b83e
- (id)description;	// IMP=0x000000000001b828
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000001b7bd
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000001b71f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b68f
- (id)initWithNSMutableDictionary:(id)arg1;	// IMP=0x000000000001b60e

@end
