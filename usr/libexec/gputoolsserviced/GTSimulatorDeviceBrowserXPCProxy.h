//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTServiceConnection, NSSet;

@interface GTSimulatorDeviceBrowserXPCProxy : NSObject
{
    GTServiceConnection *_connection;	// 8 = 0x8
    NSSet *_ignoreMethods;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000022264
- (id)deviceProperties:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002214a
- (_Bool)isSimulatorDevice:(id)arg1;	// IMP=0x001000000002206e
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0010000000021fe9
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;	// IMP=0x0010000000021ddc

@end

