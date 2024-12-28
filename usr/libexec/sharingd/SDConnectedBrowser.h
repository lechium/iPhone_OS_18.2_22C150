//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, SDStatusMonitor;
@protocol OS_dispatch_source;

@interface SDConnectedBrowser : NSObject
{
    int _clientCount;	// 8 = 0x8
    int _recentsCount;	// 12 = 0xc
    int _connectedCount;	// 16 = 0x10
    _Bool _sendNotification;	// 20 = 0x14
    NSDictionary *_servers;	// 24 = 0x18
    NSDictionary *_odiskServers;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_timer;	// 40 = 0x28
    SDStatusMonitor *_monitor;	// 48 = 0x30
    struct __CFBag *_airDropPeople;	// 56 = 0x38
}

+ (id)sharedBrowser;	// IMP=0x00400000001e3528
- (void).cxx_destruct;	// IMP=0x00200000001e4b64
- (void)stop;	// IMP=0x00100000001e4ac6
- (void)start;	// IMP=0x00100000001e49c7
- (void)volumesChanged:(id)arg1;	// IMP=0x00100000001e49ad
- (void)removeAirDropPerson:(struct __SFNode *)arg1;	// IMP=0x00100000001e48f3
- (void)removeAirDropPersonInternal:(struct __SFNode *)arg1;	// IMP=0x00100000001e484b
@property(readonly, copy) NSArray *airDropNodes;
- (void)addAirDropPerson:(struct __SFNode *)arg1;	// IMP=0x00100000001e46fd
- (void)buildNodesAndNotify:(_Bool)arg1;	// IMP=0x00100000001e46cf
- (void)combineRecentAndConnectedNodes:(_Bool)arg1;	// IMP=0x00100000001e40a8
- (id)connectedNodes;	// IMP=0x00100000001e3907
- (id)URLForRemounting:(id)arg1;	// IMP=0x00100000001e3853
- (_Bool)opticalDisk:(id)arg1;	// IMP=0x00100000001e37d7
- (void)setNodeModel:(struct __SFNode *)arg1 protocol:(id)arg2 url:(id)arg3;	// IMP=0x00100000001e37d1
- (int)removeNode:(struct __SFNode *)arg1;	// IMP=0x00100000001e37c6
- (int)addNode:(struct __SFNode *)arg1;	// IMP=0x00100000001e37bb
- (id)recentNodes;	// IMP=0x00100000001e3775
- (void)addToRecents:(id)arg1;	// IMP=0x00100000001e376f
- (void)browseAfterDelay:(double)arg1;	// IMP=0x00100000001e374f
- (void)postNotification;	// IMP=0x00100000001e36f0
@property(readonly, copy) NSArray *odiskNodes;
@property(readonly, copy) NSArray *nodes;
- (void)setODiskServers:(id)arg1;	// IMP=0x00100000001e3675
- (void)setServers:(id)arg1;	// IMP=0x00100000001e3626
- (id)init;	// IMP=0x00100000001e357d

@end
