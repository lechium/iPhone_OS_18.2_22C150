//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray;
@protocol AVAirTransportDelegate, AVAirTransportTransformationProtocol;

__attribute__((visibility("hidden")))
@interface AVAirTransport : NSObject
{
    NSMutableArray *_outputQueue;	// 8 = 0x8
    NSData *_leftoverInputData;	// 16 = 0x10
    NSMutableArray *_requestCompletions;	// 24 = 0x18
    id <AVAirTransportTransformationProtocol> _streamDataTransformer;	// 32 = 0x20
    id <AVAirTransportDelegate> _delegate;	// 40 = 0x28
    NSMutableArray *_receiveResponseBlocks;	// 48 = 0x30
}

+ (_Bool)_isRunningOnAirChannelQueue;	// IMP=0x00400000000760d8
+ (id)airTransportQueue;	// IMP=0x00400000000760a8
+ (id)eventRunLoop;	// IMP=0x004000000007608a
+ (id)eventThread;	// IMP=0x0040000000076079
+ (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x0040000000076000
+ (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x0040000000075f76
+ (void)__performBlock:(CDUnknownBlockType)arg1;	// IMP=0x0040000000075f6b
+ (void)startEventThreadIfNecessary;	// IMP=0x0040000000075f47
+ (id)channelWithInput:(id)arg1 output:(id)arg2;	// IMP=0x0040000000076437
- (void).cxx_destruct;	// IMP=0x0000000000075a35
@property(readonly, nonatomic) NSMutableArray *receiveResponseBlocks; // @synthesize receiveResponseBlocks=_receiveResponseBlocks;
@property(nonatomic) __weak id <AVAirTransportDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <AVAirTransportTransformationProtocol> streamDataTransformer; // @synthesize streamDataTransformer=_streamDataTransformer;
- (void)sendResponse:(id)arg1;	// IMP=0x0000000000075856
- (void)sendObject:(id)arg1 receiveResponse:(CDUnknownBlockType)arg2;	// IMP=0x0000000000075760
- (void)performOnAirChannelQueueSync:(CDUnknownBlockType)arg1;	// IMP=0x00000000000756c4
@property(readonly, nonatomic) _Bool canWrite;
@property(readonly, nonatomic) _Bool isReadyToSend;
- (void)writeData:(id)arg1;	// IMP=0x000000000007554c
- (void)writeMore;	// IMP=0x00000000000752bb
- (long long)_writeData:(id)arg1;	// IMP=0x0000000000075287
- (void)terminatePendingRequests;	// IMP=0x000000000007523b
- (id)requestCompletions;	// IMP=0x000000000007522d
- (id)description;	// IMP=0x00000000000750ec
- (void)open;	// IMP=0x00000000000750e6
- (void)close;	// IMP=0x00000000000750b8
- (void)invalidate;	// IMP=0x00000000000750b2
- (void)dealloc;	// IMP=0x0000000000074ff2
- (id)_initPrivate;	// IMP=0x0000000000074f7d

@end
