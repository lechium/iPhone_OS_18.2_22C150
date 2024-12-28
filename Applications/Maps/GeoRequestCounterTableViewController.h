//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class GEORequestCounter, GeoRequestCounterDurations, GeoRequestCounterInterfaces, NSArray, NSDateIntervalFormatter, NSDictionary, NSOrderedSet;

@interface GeoRequestCounterTableViewController : UITableViewController
{
    NSDictionary *_appRequestDict;	// 8 = 0x8
    NSArray *_placeCacheResults;	// 16 = 0x10
    NSDictionary *_placeCacheResultsDict;	// 24 = 0x18
    NSDictionary *_placeCachePerAppCountsDict;	// 32 = 0x20
    NSArray *_requestLogs;	// 40 = 0x28
    NSArray *_routePreloadSessions;	// 48 = 0x30
    unsigned long long _totalCacheHits;	// 56 = 0x38
    unsigned long long _totalCacheMisses;	// 64 = 0x40
    unsigned long long _totalCacheExpired;	// 72 = 0x48
    NSDateIntervalFormatter *_dateIntervalFormatter;	// 80 = 0x50
    GeoRequestCounterDurations *_durations;	// 88 = 0x58
    long long _currentDuration;	// 96 = 0x60
    GeoRequestCounterInterfaces *_interfaces;	// 104 = 0x68
    unsigned long long _currentInterfaces;	// 112 = 0x70
    _Bool _isLoggingEnabled;	// 120 = 0x78
    GEORequestCounter *_reqCounter;	// 128 = 0x80
    NSOrderedSet *_appRequestOrderedKeys;	// 136 = 0x88
    NSOrderedSet *_placeCacheCountsOrderedKeys;	// 144 = 0x90
    NSOrderedSet *_trafficProbeOrderedKeys;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0020000000c96b11
@property(retain, nonatomic) NSOrderedSet *trafficProbeOrderedKeys; // @synthesize trafficProbeOrderedKeys=_trafficProbeOrderedKeys;
@property(retain, nonatomic) NSOrderedSet *placeCacheCountsOrderedKeys; // @synthesize placeCacheCountsOrderedKeys=_placeCacheCountsOrderedKeys;
@property(retain, nonatomic) NSOrderedSet *appRequestOrderedKeys; // @synthesize appRequestOrderedKeys=_appRequestOrderedKeys;
@property(retain, nonatomic) GEORequestCounter *reqCounter; // @synthesize reqCounter=_reqCounter;
@property(nonatomic) _Bool isLoggingEnabled; // @synthesize isLoggingEnabled=_isLoggingEnabled;
@property(copy, nonatomic) NSArray *routePreloadSessions; // @synthesize routePreloadSessions=_routePreloadSessions;
- (unsigned long long)getCacheExpiredForApp:(id)arg1;	// IMP=0x0010000000c96a53
- (unsigned long long)getCacheMissesForApp:(id)arg1;	// IMP=0x0010000000c96a39
- (unsigned long long)getCacheHitsForApp:(id)arg1;	// IMP=0x0010000000c96a1f
- (unsigned long long)_getCacheTotal:(unsigned char)arg1 forApp:(id)arg2;	// IMP=0x0010000000c96970
- (id)getRecvBytesForAllApps;	// IMP=0x0010000000c967c4
- (id)getXmitBytesForAllApps;	// IMP=0x0010000000c96618
- (long long)getTotalRequestCountForAllApps;	// IMP=0x0010000000c9648c
- (long long)getTotalRequestCountFor:(id)arg1;	// IMP=0x0010000000c96352
- (void)_reloadData;	// IMP=0x0010000000c96291
- (void)_resetLogs;	// IMP=0x0010000000c96197
- (void)_toggleLogging;	// IMP=0x0010000000c96164
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000c95d20
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000c94e8e
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0010000000c94e74
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000c94da1
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000c94d84
- (void)requestLogs:(CDUnknownBlockType)arg1;	// IMP=0x0010000000c94970
@property(retain, nonatomic) NSDictionary *placeCachePerAppCountsDict;
@property(retain, nonatomic) NSDictionary *placeCacheResultsDict;
- (void)_fetchPlaceCacheReults;	// IMP=0x0010000000c93eff
@property(retain, nonatomic) NSDictionary *appRequestDict;
- (void)viewDidLoad;	// IMP=0x0010000000c93895
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000c937c8

@end
