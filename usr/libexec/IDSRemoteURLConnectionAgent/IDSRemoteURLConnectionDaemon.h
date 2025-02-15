//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSRemoteURLConnectionDaemon : NSObject
{
    NSMutableDictionary *_uniqueIDToURLLoaderMap;	// 8 = 0x8
    void *_transaction;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0040000000000fcb
- (void).cxx_destruct;	// IMP=0x0020000000001dc9
- (void)_pidSuspended:(int)arg1;	// IMP=0x0010000000001cdd
- (id)urlLoaderForUniqueID:(id)arg1;	// IMP=0x0010000000001c79
- (void)_terminateAfterDelayIfIdle;	// IMP=0x0010000000001af5
- (void)removeURLLoadersForUniqueIDs:(id)arg1;	// IMP=0x0010000000001881
- (void)removeURLLoaderForUniqueID:(id)arg1;	// IMP=0x0010000000001802
- (void)addURLLoader:(id)arg1;	// IMP=0x001000000000159c
- (void)logState;	// IMP=0x0010000000001596
- (void)shutdown;	// IMP=0x00100000000014c7
- (void)_terminate;	// IMP=0x001000000000147b
- (void)dealloc;	// IMP=0x0010000000001429
- (id)init;	// IMP=0x0010000000001020

@end

