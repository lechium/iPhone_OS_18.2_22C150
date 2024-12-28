//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CallDBManager.h"

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface CallDBManagerClient : CallDBManager
{
    NSXPCConnection *_helperConnection;	// 8 = 0x8
    id _syncHelperReadyNotificationRef;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001035d
@property(retain) id syncHelperReadyNotificationRef; // @synthesize syncHelperReadyNotificationRef=_syncHelperReadyNotificationRef;
@property(retain) NSXPCConnection *helperConnection; // @synthesize helperConnection=_helperConnection;
- (id)permDBLocation:(unsigned char *)arg1;	// IMP=0x00000000000102ec
- (id)tempDBLocation:(unsigned char *)arg1;	// IMP=0x00000000000102c6
- (void)pokeSyncHelperToInitDB;	// IMP=0x000000000000fe5d
- (void)moveCallsFromTempDatabase;	// IMP=0x000000000000fdc4
- (_Bool)validateTempDatabase;	// IMP=0x000000000000fd01
- (_Bool)validatePermDatabase;	// IMP=0x000000000000fc41
- (void)createTemporary;	// IMP=0x000000000000f792
- (void)createPermanent;	// IMP=0x000000000000f2fd
- (void)createHelperConnection;	// IMP=0x000000000000eea2
- (void)handlePermanentCreated;	// IMP=0x000000000000ee12
- (_Bool)willMoveCallsFromTempDatabase;	// IMP=0x000000000000e93b

@end
