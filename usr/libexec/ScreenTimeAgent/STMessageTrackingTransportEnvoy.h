//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, STTransportEnvoyDelegate, STTransportService, STTransportServiceMessageLedger;

@interface STMessageTrackingTransportEnvoy : NSObject
{
    id <STTransportEnvoyDelegate> delegate;	// 8 = 0x8
    id <STTransportService> _transportService;	// 16 = 0x10
    id <STTransportServiceMessageLedger> _messageLedger;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

+ (id)_retryIntervalForNumberOfAttempts:(long long)arg1;	// IMP=0x002000000005d01f
- (void).cxx_destruct;	// IMP=0x002000000005dc87
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) id <STTransportServiceMessageLedger> messageLedger; // @synthesize messageLedger=_messageLedger;
@property(readonly) id <STTransportService> transportService; // @synthesize transportService=_transportService;
@property __weak id <STTransportEnvoyDelegate> delegate; // @synthesize delegate;
- (void)transportService:(id)arg1 didSendMessageWithIdentifier:(id)arg2 result:(id)arg3;	// IMP=0x001000000005daff
- (void)transportService:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x001000000005d9a6
- (long long)failMessagesStuckInSentState;	// IMP=0x001000000005d4f5
- (long long)purgeExpiredMessages;	// IMP=0x001000000005d0dd
- (id)intervalUntilNextRetryAttempt;	// IMP=0x001000000005cc1d
- (id)retryFailedMessages;	// IMP=0x001000000005c314
- (id)sendMessageEnvelope:(id)arg1;	// IMP=0x001000000005c04a
- (id)initWithTransportService:(id)arg1 messageLedger:(id)arg2 queue:(id)arg3;	// IMP=0x001000000005bf6e

@end

