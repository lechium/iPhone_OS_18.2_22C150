//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADNotifyAndPushContextCollector, NSXPCConnection;

@interface ADPushContextReceiver : NSObject
{
    int _pid;	// 8 = 0x8
    ADNotifyAndPushContextCollector *_collector;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000030b0af
- (oneway void)sendContext:(id)arg1;	// IMP=0x001000000030afa0
- (id)initWithCollector:(id)arg1 pid:(int)arg2 connection:(id)arg3;	// IMP=0x001000000030af01

@end

