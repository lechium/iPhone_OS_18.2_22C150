//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVBonjourService, AVPlayerItem, NSMutableSet, NSString;
@protocol AVAirMessageNotificationCenterDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAirMessageNotificationCenter : NSObject
{
    _Bool _started;	// 8 = 0x8
    id <AVAirMessageNotificationCenterDelegate> _delegate;	// 16 = 0x10
    AVBonjourService *_mainService;	// 24 = 0x18
    AVPlayerItem *_nowPlayingPlayerItem;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSMutableSet *_activeChannels;	// 48 = 0x30
}

+ (id)shared;	// IMP=0x0010000000044a55
+ (_Bool)isPrepared;	// IMP=0x0010000000044a44
+ (void)prepare;	// IMP=0x0010000000044a20
+ (_Bool)_isNotificationCenterEnabled;	// IMP=0x0010000000044a04
- (void).cxx_destruct;	// IMP=0x00000000000448cf
@property(retain, nonatomic) NSMutableSet *activeChannels; // @synthesize activeChannels=_activeChannels;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) AVPlayerItem *nowPlayingPlayerItem; // @synthesize nowPlayingPlayerItem=_nowPlayingPlayerItem;
@property(readonly, nonatomic) AVBonjourService *mainService; // @synthesize mainService=_mainService;
@property(nonatomic) __weak id <AVAirMessageNotificationCenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)airTransportInputDidClose:(id)arg1;	// IMP=0x0000000000044727
- (void)airTransport:(id)arg1 didReceiveObject:(id)arg2;	// IMP=0x000000000004441c
- (void)bonjourService:(id)arg1 didCloseChannel:(id)arg2;	// IMP=0x000000000004430d
- (id)bonjourServiceAdditionalTXTRecordInfo:(id)arg1;	// IMP=0x000000000004422e
- (void)bonjourService:(id)arg1 didAcceptConnectionChannel:(id)arg2;	// IMP=0x00000000000440a8
- (void)handleCommandMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043f04
- (id)playerItemForIdentifier:(id)arg1;	// IMP=0x0000000000043e4c
- (void)stop;	// IMP=0x0000000000043cad
- (void)start;	// IMP=0x0000000000043c9d
- (void)dealloc;	// IMP=0x0000000000043c46
- (id)_initPrivate;	// IMP=0x0000000000043b38
- (id)init;	// IMP=0x0000000000043af6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
