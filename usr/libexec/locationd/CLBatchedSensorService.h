//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSMutableSet, NSString;

@interface CLBatchedSensorService : CLIntersiloService
{
    NSMutableSet *_clients;	// 8 = 0x8
    struct ConnectionInfo _info;	// 16 = 0x10
}

+ (_Bool)isSupported;	// IMP=0x00200000005f8471
- (id).cxx_construct;	// IMP=0x00200000005f91da
- (void).cxx_destruct;	// IMP=0x00100000005f91bc
@property(retain, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
@property(nonatomic) struct ConnectionInfo info; // @synthesize info=_info;
- (void)disableProvider;	// IMP=0x00100000005f8fcc
- (void)enableProvider;	// IMP=0x00100000005f8e7b
- (void)unregisterForData:(byref id)arg1;	// IMP=0x00100000005f8c3a
- (void)registerForData:(byref id)arg1;	// IMP=0x00100000005f8951
- (void)endService;	// IMP=0x00100000005f8753
- (void)beginService;	// IMP=0x00100000005f8557
- (void)dealloc;	// IMP=0x00100000005f8515
- (id)initWithClientProtocol:(id)arg1;	// IMP=0x00100000005f84c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
