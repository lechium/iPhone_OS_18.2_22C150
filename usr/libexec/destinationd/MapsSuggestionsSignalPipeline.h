//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsSuggestionsMutableSignalPack, NSMutableArray, NSMutableDictionary, NSString;
@protocol MapsSuggestionsNetworkRequester, MapsSuggestionsSignalAlgorithm, MapsSuggestionsSignalPipelineUpdater, OS_dispatch_source;

@interface MapsSuggestionsSignalPipeline : NSObject
{
    struct Queue _queue;	// 8 = 0x8
    MapsSuggestionsMutableSignalPack *_generalSignalPack;	// 24 = 0x18
    id <MapsSuggestionsSignalAlgorithm> _algorithm;	// 32 = 0x20
    NSMutableArray *_pollingFeelers;	// 40 = 0x28
    NSMutableArray *_streamingFeelers;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_pollTimer;	// 56 = 0x38
    NSMutableDictionary *_nextPollingTimes;	// 64 = 0x40
    id <MapsSuggestionsNetworkRequester> _networkRequester;	// 72 = 0x48
    id <MapsSuggestionsSignalPipelineUpdater> _updaterDelegate;	// 80 = 0x50
}

- (id).cxx_construct;	// IMP=0x002000000001699b
- (void).cxx_destruct;	// IMP=0x0010000000016920
@property(nonatomic) __weak id <MapsSuggestionsSignalPipelineUpdater> updaterDelegate; // @synthesize updaterDelegate=_updaterDelegate;
@property(retain, nonatomic) id <MapsSuggestionsNetworkRequester> networkRequester; // @synthesize networkRequester=_networkRequester;
- (_Bool)feeler:(id)arg1 sendsSignalPack:(id)arg2;	// IMP=0x00100000000153f3
- (void)userDidChooseTranportMode:(int)arg1 forMapItem:(id)arg2;	// IMP=0x00100000000153ed
- (void)userDidChooseTranportMode:(int)arg1 forEntry:(id)arg2;	// IMP=0x00100000000153e7
- (BOOL)guessTransportModesForDestinationEntry:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000014bd8
- (BOOL)guessTransportModesForDestinationMapItem:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000014292
- (id)mergedSignalPackForDestinationMapItem:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2;	// IMP=0x0010000000014017
- (id)mergedSignalPackForDestinationEntry:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2;	// IMP=0x0010000000013d9c
- (id)mergedCommonSignalPack;	// IMP=0x0010000000013c2b
- (void)resetData;	// IMP=0x0010000000013a84
- (_Bool)stop;	// IMP=0x00100000000138e4
- (_Bool)start;	// IMP=0x00100000000135f0
- (_Bool)setAlgorithm:(id)arg1;	// IMP=0x001000000001346a
- (_Bool)removeFeeler:(id)arg1;	// IMP=0x00100000000131a8
- (_Bool)addFeeler:(id)arg1;	// IMP=0x0010000000012d68
- (void)dealloc;	// IMP=0x0010000000012b33
- (id)initWithNetworkRequester:(id)arg1;	// IMP=0x00100000000129a8
@property(readonly, nonatomic) NSString *uniqueName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

