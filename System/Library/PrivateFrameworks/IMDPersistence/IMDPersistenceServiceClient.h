//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol IMDRemoteDatabaseProtocol;

@interface IMDPersistenceServiceClient : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *unlockedConnection;	// 16 = 0x10
}

+ (void)setSharedClient:(id)arg1;	// IMP=0x00400000001199d0
+ (id)sharedClient;	// IMP=0x0040000000119920
- (void).cxx_destruct;	// IMP=0x0000000000119d50
- (id)init;	// IMP=0x0000000000119d00
@property(nonatomic, readonly) id <IMDRemoteDatabaseProtocol> synchronousRemoteProxy;
@property(nonatomic, readonly) id <IMDRemoteDatabaseProtocol> remoteProxy;

@end
