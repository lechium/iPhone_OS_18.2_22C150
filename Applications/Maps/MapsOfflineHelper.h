//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, geo_isolater;

@interface MapsOfflineHelper : NSObject
{
    geo_isolater *_completionIsolater;	// 8 = 0x8
    NSMutableArray *_completions;	// 16 = 0x10
}

+ (id)sharedHelper;	// IMP=0x0020000000327a92
- (void).cxx_destruct;	// IMP=0x0020000000327cb8
- (void)_updateForcedOffline;	// IMP=0x0010000000327c47
- (void)valueChangedForGEOConfigKey:(CDStruct_065526f1)arg1;	// IMP=0x0010000000327c22
- (void)startServiceIfEnabled;	// IMP=0x0010000000327bde
- (_Bool)offlineServiceRunning;	// IMP=0x0010000000327b93
- (_Bool)offlineServiceEnabled;	// IMP=0x0010000000327b8b
- (id)init_internal;	// IMP=0x0010000000327af7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
