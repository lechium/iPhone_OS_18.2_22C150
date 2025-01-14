//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, OS_dispatch_queue, _TtC10TDGSharing33WFSetupServerAnisetteDataProvider;

@interface WFSetupServerInternal : NSObject
{
    MISSING_TYPE *dispatchQueue;	// 8 = 0x8
    MISSING_TYPE *completionHandler;	// 16 = 0x10
    MISSING_TYPE *activationHandler;	// 32 = 0x20
    MISSING_TYPE *setupProgressEventHandler;	// 48 = 0x30
    MISSING_TYPE *userInteractionProgressEventHandler;	// 64 = 0x40
    MISSING_TYPE *setupPromptPinHandler;	// 80 = 0x50
    MISSING_TYPE *receivedObjectHandler;	// 96 = 0x60
    MISSING_TYPE *anisetteDataProvider;	// 112 = 0x70
    MISSING_TYPE *shouldAdvertiseFast;	// 120 = 0x78
    MISSING_TYPE *sfService;	// 128 = 0x80
    MISSING_TYPE *resumeAuthTag;	// 136 = 0x88
    MISSING_TYPE *peer;	// 0 = 0x0
    MISSING_TYPE *sfSession;	// 0 = 0x0
    MISSING_TYPE *serverState;	// 0 = 0x0
    MISSING_TYPE *analyticsManager;	// 0 = 0x0
    MISSING_TYPE *preventExitForLocaleClient;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000000109d0
- (void)tryPin:(id)arg1;	// IMP=0x0000000000016180
- (void)startSecureChannelPairingWith:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000156f0
- (void)startSecureChannelPairingWith:(_Bool)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000143a0
- (void)sendUserInteractionEventInEvent:(id)arg1 withEncryption:(_Bool)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000132d0
- (void)sendSetupWithAction:(unsigned int)arg1 info:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012aa0
- (void)sendObjectWithObject:(id)arg1 encrypted:(_Bool)arg2;	// IMP=0x0000000000011e10
- (void)invalidate;	// IMP=0x0000000000011650
- (void)activate;	// IMP=0x00000000000111c0
- (void)prepareToRun;	// IMP=0x0000000000010db0
- (void)dealloc;	// IMP=0x00000000000108c0
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000010740
- (id)init;	// IMP=0x0000000000010650
@property(nonatomic, retain) _TtC10TDGSharing33WFSetupServerAnisetteDataProvider *anisetteDataProvider; // @synthesize anisetteDataProvider;
@property(nonatomic, copy) CDUnknownBlockType receivedObjectHandler;
@property(nonatomic, copy) CDUnknownBlockType setupPromptPinHandler;
@property(nonatomic, copy) CDUnknownBlockType userInteractionProgressEventHandler;
@property(nonatomic, copy) CDUnknownBlockType setupProgressEventHandler;
@property(nonatomic, copy) CDUnknownBlockType activationHandler;
@property(nonatomic, copy) CDUnknownBlockType completionHandler;
@property(nonatomic, retain) OS_dispatch_queue *dispatchQueue; // @synthesize dispatchQueue;

@end

