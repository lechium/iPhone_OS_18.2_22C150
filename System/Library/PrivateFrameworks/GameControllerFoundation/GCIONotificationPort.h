//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface GCIONotificationPort : NSObject
{
    struct IONotificationPort *_port;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_cancellationSource;	// 24 = 0x18
}

- (void)setQueue:(id)arg1 cancellationHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000057747
- (id)debugDescription;	// IMP=0x00000000000576ca
- (id)redactedDescription;	// IMP=0x000000000005766c
- (id)description;	// IMP=0x00000000000575fc
- (void)dealloc;	// IMP=0x00000000000575b3
- (id)init;	// IMP=0x0000000000057598
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000005757a
- (id)initWithMainPort:(unsigned int)arg1 queue:(id)arg2;	// IMP=0x0000000000057565
- (id)initWithMainPort:(unsigned int)arg1 queue:(id)arg2 cancellationHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000057521
- (id)initWithMainPort:(unsigned int)arg1;	// IMP=0x00000000000574ab

@end

