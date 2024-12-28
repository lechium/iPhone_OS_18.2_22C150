//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, NSString, SHMediaLibraryController, SHMediaLibraryInfoFetcher;
@protocol OS_dispatch_queue;

@interface SHAPSConnection : NSObject
{
    SHMediaLibraryController *_libraryController;	// 8 = 0x8
    SHMediaLibraryInfoFetcher *_libraryInfoFetcher;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 24 = 0x18
    APSConnection *_connection;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000036603
@property(retain, nonatomic) APSConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(readonly, nonatomic) SHMediaLibraryInfoFetcher *libraryInfoFetcher; // @synthesize libraryInfoFetcher=_libraryInfoFetcher;
@property(readonly, nonatomic) SHMediaLibraryController *libraryController; // @synthesize libraryController=_libraryController;
- (void)finishLibrarySync;	// IMP=0x0010000000036521
- (void)_libraryDidCompleteSync:(id)arg1;	// IMP=0x00100000000364ad
- (void)_library:(id)arg1 didProduceError:(id)arg2 failedItemIdentifiers:(id)arg3;	// IMP=0x001000000003649b
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x001000000003627c
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x00100000000361ac
- (void)fetchAPSEnvironmentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000003619c
- (void)stopListeningForPushNotifications;	// IMP=0x0010000000036196
- (void)startListeningForPushNotifications;	// IMP=0x0010000000036190
- (void)registerForPushNotifications;	// IMP=0x001000000003618a
- (id)init;	// IMP=0x0010000000036132

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
