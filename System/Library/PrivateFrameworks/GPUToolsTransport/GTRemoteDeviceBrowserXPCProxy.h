//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTServiceConnection, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface GTRemoteDeviceBrowserXPCProxy : NSObject
{
    GTServiceConnection *_connection;	// 8 = 0x8
    NSSet *_ignoreMethods;	// 16 = 0x10
    NSMutableDictionary *_observerIdToPort;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000030543
- (void)deregisterObserver:(unsigned long long)arg1;	// IMP=0x0000000000030408
- (unsigned long long)registerObserver:(id)arg1;	// IMP=0x00000000000302a6
- (id)allDevices;	// IMP=0x0000000000030206
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000030181
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;	// IMP=0x000000000002ffea

@end

