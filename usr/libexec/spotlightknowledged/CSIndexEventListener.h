//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface CSIndexEventListener : NSObject
{
    int _indexType;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSArray *_managers;	// 24 = 0x18
}

+ (id)indexEventListenerForType:(int)arg1 allowCreate:(_Bool)arg2;	// IMP=0x004000000006db44
- (void).cxx_destruct;	// IMP=0x002000000006f272
- (void)handleDeviceUnlocked;	// IMP=0x001000000006f14b
- (void)handleDeviceLocking;	// IMP=0x001000000006f024
- (void)lostConnection;	// IMP=0x001000000006eeed
- (void)handleMessage:(id)arg1;	// IMP=0x001000000006e8c9
- (void)processJournalsOnStartupForJournalsPath:(id)arg1;	// IMP=0x001000000006dbf7
- (id)initWithType:(int)arg1;	// IMP=0x001000000006d4ef
- (id)description;	// IMP=0x001000000006d48c

@end

