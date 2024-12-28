//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsSuggestionsDaemonMemory, NSMutableArray, NSString, NSXPCListener;

@interface MapsSuggestionsPredictionsServer : NSObject
{
    NSMutableArray *_peers;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    struct Queue _queue;	// 24 = 0x18
    MapsSuggestionsDaemonMemory *_memory;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x0020000000024f9c
- (void).cxx_destruct;	// IMP=0x0010000000024f57
@property(nonatomic) __weak MapsSuggestionsDaemonMemory *memory; // @synthesize memory=_memory;
- (void)_debugPrintOverviewOfConnections;	// IMP=0x0010000000024f2a
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000023dad
- (id)initWithMemory:(id)arg1;	// IMP=0x0010000000023b62

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
