//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface VSSubscriptionServiceConnection : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001f6b1
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)serviceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f61c
- (void)dealloc;	// IMP=0x000000000001f5da
- (id)init;	// IMP=0x000000000001f518

@end

