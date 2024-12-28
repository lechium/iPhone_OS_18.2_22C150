//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsSuggestionsDestinationGraph, MapsSuggestionsMapsAppFeeler, MapsSuggestionsMutableSignalPack, MapsSuggestionsSelfBuildingResourceDepot, MapsSuggestionsSignalPipeline, MapsSuggestionsSourceWrapper, NSMutableDictionary, NSString;
@protocol MapsSuggestionsFullResourceDepot, MapsSuggestionsLocationUpdater;

@interface MapsSuggestionsDaemonMemory : NSObject
{
    struct Queue _queue;	// 8 = 0x8
    MapsSuggestionsSelfBuildingResourceDepot *_resourceDepot;	// 24 = 0x18
    NSMutableDictionary *_storage;	// 32 = 0x20
    NSMutableDictionary *_etas;	// 40 = 0x28
    MapsSuggestionsSignalPipeline *_pipeline;	// 48 = 0x30
    MapsSuggestionsMutableSignalPack *_signalPack;	// 56 = 0x38
    MapsSuggestionsMapsAppFeeler *_mapsAppFeeler;	// 64 = 0x40
    id <MapsSuggestionsLocationUpdater> _locationUpdater;	// 72 = 0x48
    MapsSuggestionsSourceWrapper *_sourceWrapper;	// 80 = 0x50
    MapsSuggestionsDestinationGraph *_destinationGraph;	// 88 = 0x58
}

- (id).cxx_construct;	// IMP=0x002000000002fadf
- (void).cxx_destruct;	// IMP=0x001000000002fa57
@property(readonly, nonatomic) MapsSuggestionsDestinationGraph *destinationGraph; // @synthesize destinationGraph=_destinationGraph;
@property(readonly, nonatomic) MapsSuggestionsSourceWrapper *sourceWrapper; // @synthesize sourceWrapper=_sourceWrapper;
@property(readonly, nonatomic) id <MapsSuggestionsLocationUpdater> locationUpdater; // @synthesize locationUpdater=_locationUpdater;
- (void)clear;	// IMP=0x001000000002f9d7
- (id)mapsAppFeeler;	// IMP=0x001000000002f9c9
- (id)signalPack;	// IMP=0x001000000002f964
- (_Bool)setSignalPack:(id)arg1;	// IMP=0x001000000002f8b0
- (id)signalPipeline;	// IMP=0x001000000002f8a2
- (void)clearETAs;	// IMP=0x001000000002f67d
- (id)getETAForDestinationKey:(id)arg1;	// IMP=0x001000000002f417
- (_Bool)setETA:(id)arg1 destinationKey:(id)arg2;	// IMP=0x001000000002ee97
- (_Bool)removeEntries:(id)arg1 sourceName:(id)arg2;	// IMP=0x001000000002ea67
- (_Bool)replaceEntries:(id)arg1 sourceName:(id)arg2;	// IMP=0x001000000002e780
- (id)entriesForSourceName:(id)arg1;	// IMP=0x001000000002e5d6
- (id)sourceNames;	// IMP=0x001000000002e48f
@property(readonly, nonatomic) _Bool hasSourceData;
@property(readonly, nonatomic) id <MapsSuggestionsFullResourceDepot> resourceDepot;
- (id)init;	// IMP=0x001000000002d814
@property(readonly, nonatomic) NSString *uniqueName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
