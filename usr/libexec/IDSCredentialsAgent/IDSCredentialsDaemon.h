//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSCredentialsDaemon : NSObject
{
    NSMutableDictionary *_uniqueIDToCredentialLoaderMap;	// 8 = 0x8
    void *_transaction;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0040000000006ae5
- (void).cxx_destruct;	// IMP=0x00200000000078dd
- (void)_pidSuspended:(int)arg1;	// IMP=0x00100000000077f1
- (id)credentialLoaderForUniqueID:(id)arg1;	// IMP=0x001000000000778d
- (void)removeCredentialLoaderForUniqueID:(id)arg1;	// IMP=0x0010000000007428
- (void)addCredentialLoader:(id)arg1;	// IMP=0x0010000000007174
- (void)logState;	// IMP=0x001000000000716e
- (void)shutdown;	// IMP=0x001000000000709f
- (void)_terminate;	// IMP=0x0010000000007053
- (void)dealloc;	// IMP=0x0010000000007001
- (id)init;	// IMP=0x0010000000006b3a

@end

