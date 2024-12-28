//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol CATIDSServiceConnectionDataChunker, CATIDSServiceConnectionDataMessageQueueDelegate, CATTimer, CATTimerSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CATConcreteIDSServiceConnectionDataMessageQueue : NSObject
{
    NSObject<OS_dispatch_queue> *mWorkQueue;	// 8 = 0x8
    id <CATIDSServiceConnectionDataChunker> mDataChunker;	// 16 = 0x10
    id <CATTimerSource> mTimerSource;	// 24 = 0x18
    double mFlushPromptInterval;	// 32 = 0x20
    _Bool mSupportsRetransmit;	// 40 = 0x28
    id <CATTimer> mFlushTimer;	// 48 = 0x30
    unsigned long long mHeadSequenceNumber;	// 56 = 0x38
    unsigned long long mTailSequenceNumber;	// 64 = 0x40
    NSMutableDictionary *mSendContentsBySequenceNumber;	// 72 = 0x48
    id <CATIDSServiceConnectionDataMessageQueueDelegate> _delegate;	// 80 = 0x50
}

+ (id)flushTimerIdentifier;	// IMP=0x0010000000041e27
- (void).cxx_destruct;	// IMP=0x00000000000421be
@property(nonatomic) __weak id <CATIDSServiceConnectionDataMessageQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void)retransmitContent:(id)arg1;	// IMP=0x000000000004205a
- (void)flushTimerDidFire:(id)arg1 fireCount:(unsigned long long)arg2;	// IMP=0x0000000000041fc9
- (void)scheduleFlushTimer;	// IMP=0x0000000000041e4c
- (void)retransmitSequenceNumbers:(id)arg1;	// IMP=0x0000000000041d31
- (void)receiveRemoteSequenceNumber:(unsigned long long)arg1;	// IMP=0x0000000000041bfd
- (void)receiveData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004179c
- (id)initWithWorkQueue:(id)arg1 timerSource:(id)arg2 dataChunker:(id)arg3 flushPromptInterval:(double)arg4 supportsRetransmit:(_Bool)arg5;	// IMP=0x00000000000416af

@end
