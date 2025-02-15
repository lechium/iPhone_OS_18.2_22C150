//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSXPCConnection;
@protocol NDDownloadConsumer;

@interface NDDownloadConsumerProxy : NSObject
{
    _Bool _sendingMesssage;	// 8 = 0x8
    id <NDDownloadConsumer> _consumer;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    NSString *_connectionDescription;	// 32 = 0x20
    NSMutableArray *_pendingMessages;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000007437
@property(nonatomic) _Bool sendingMesssage; // @synthesize sendingMesssage=_sendingMesssage;
@property(readonly, nonatomic) NSMutableArray *pendingMessages; // @synthesize pendingMessages=_pendingMessages;
@property(readonly, copy, nonatomic) NSString *connectionDescription; // @synthesize connectionDescription=_connectionDescription;
@property(nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) id <NDDownloadConsumer> consumer; // @synthesize consumer=_consumer;
- (void)_sendNextMessage;	// IMP=0x0010000000007050
- (void)_enqueueBarrierMessage:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006e1c
- (void)_enqueueMessage:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006ce5
- (void)downloadFinishedForRequest:(id)arg1 error:(id)arg2;	// IMP=0x0010000000006bd9
- (void)downloadProgressedForRequest:(id)arg1 contentArchive:(id)arg2;	// IMP=0x0010000000006acd
- (void)downloadProgressedForRequest:(id)arg1 progress:(double)arg2;	// IMP=0x00100000000069d5
- (void)flushMessagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000069c3
- (id)init;	// IMP=0x0010000000006870
- (id)initWithConsumer:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000006775

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

