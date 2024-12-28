//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDXClient, NSData, NSIndexSet, NSMutableIndexSet;
@protocol CDXClientSessionDelegate, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CDXClientSession : NSObject
{
    id <CDXClientSessionDelegate> delegate_;	// 8 = 0x8
    CDXClient *CDXClient_;	// 16 = 0x10
    NSData *ticket_;	// 24 = 0x18
    NSData *sessionKey_;	// 32 = 0x20
    NSData *sessionKeyPrepped_;	// 40 = 0x28
    NSMutableIndexSet *participantsInFlight_;	// 48 = 0x30
    long long retransmitAttempts_;	// 56 = 0x38
    NSData *lastSent_;	// 64 = 0x40
    unsigned short seq_;	// 72 = 0x48
    unsigned char pid_;	// 74 = 0x4a
    unsigned short *ack_;	// 80 = 0x50
    NSObject<OS_dispatch_source> *retransmitTimer_;	// 88 = 0x58
    CDUnknownBlockType inboundHandler_;	// 96 = 0x60
}

@property(copy, nonatomic) CDUnknownBlockType inboundHandler; // @synthesize inboundHandler=inboundHandler_;
@property(readonly, copy, nonatomic) NSIndexSet *participantsInFlight; // @synthesize participantsInFlight=participantsInFlight_;
@property(readonly, copy, nonatomic) NSData *sessionKey; // @synthesize sessionKey=sessionKey_;
@property(copy, nonatomic) NSData *ticket; // @synthesize ticket=ticket_;
@property(nonatomic) id <CDXClientSessionDelegate> delegate; // @synthesize delegate=delegate_;
@property(readonly, retain, nonatomic) CDXClient *CDXClient; // @synthesize CDXClient=CDXClient_;
- (void)recvRaw:(id)arg1 ticket:(id)arg2;	// IMP=0x0000000000005817
- (_Bool)sendData:(id)arg1 toParticipants:(id)arg2;	// IMP=0x00000000000050fa
- (_Bool)sendData:(id)arg1;	// IMP=0x00000000000050e6
- (_Bool)sendRaw:(id)arg1 toParticipants:(id)arg2;	// IMP=0x0000000000004bdc
- (id)encrypt:(id)arg1;	// IMP=0x0000000000004859
- (id)decrypt:(id)arg1 ticket:(id)arg2;	// IMP=0x00000000000044d8
- (void)dealloc;	// IMP=0x00000000000043d2
- (void)resetRetransmitTimer;	// IMP=0x000000000000423d
- (_Bool)retransmitEvent;	// IMP=0x0000000000003e56
- (void)invalidate;	// IMP=0x0000000000003ba2
- (void)stopRetransmitTimer;	// IMP=0x0000000000003a4f
- (id)initWithCDXClient:(id)arg1 ticket:(id)arg2 sessionKey:(id)arg3;	// IMP=0x00000000000037eb

@end
