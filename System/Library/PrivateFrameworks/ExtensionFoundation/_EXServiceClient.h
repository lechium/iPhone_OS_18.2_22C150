//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _EXServiceClient : NSObject
{
    MISSING_TYPE *connectionLock;	// 8 = 0x8
    MISSING_TYPE *_discoveryConnection;	// 16 = 0x10
    MISSING_TYPE *_tccProxyConnection;	// 24 = 0x18
    MISSING_TYPE *_launchConnection;	// 32 = 0x20
    MISSING_TYPE *activeQueries;	// 40 = 0x28
    MISSING_TYPE *activeQueriesLock;	// 48 = 0x30
    MISSING_TYPE *notifyQueue;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x0040000000054aa0
- (void).cxx_destruct;	// IMP=0x0000000000059c30
- (void)dealloc;	// IMP=0x0000000000059c10
- (_Bool)photoServiceAuthorizationStatusForExtensionUUID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000059ab0
- (id)init;	// IMP=0x0000000000055fc0

@end
