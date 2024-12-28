//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NavdDoomGEORoutesManager;

@interface NavdDoomCachingGEORoutesManager : NSObject
{
    _Bool _readOnly;	// 8 = 0x8
    NavdDoomGEORoutesManager *_manager;	// 16 = 0x10
    NSMutableDictionary *_cache;	// 24 = 0x18
    NSString *_cachePath;	// 32 = 0x20
    double _waypointExpirationInterval;	// 40 = 0x28
    double _routeCacheExpirationInterval;	// 48 = 0x30
}

+ (id)defaultFileURL;	// IMP=0x0020000000014c6d
+ (id)defaultPath;	// IMP=0x0010000000014c4d
- (void).cxx_destruct;	// IMP=0x0020000000017ce3
@property(nonatomic) double routeCacheExpirationInterval; // @synthesize routeCacheExpirationInterval=_routeCacheExpirationInterval;
@property(nonatomic) double waypointExpirationInterval; // @synthesize waypointExpirationInterval=_waypointExpirationInterval;
@property(copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NavdDoomGEORoutesManager *manager; // @synthesize manager=_manager;
- (_Bool)requestWaypointForMapsSuggestionsEntry:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001784f
- (_Bool)requestRouteFrom:(id)arg1 to:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000017504
- (id)loggingStringForObject:(id)arg1;	// IMP=0x001000000001714d
- (void)setReadOnly:(_Bool)arg1;	// IMP=0x0010000000017144
- (void)touchAllCachedItems;	// IMP=0x0010000000016cb5
- (void)setExpirationInterval:(double)arg1;	// IMP=0x0010000000016c75
- (_Bool)hasExpiredItems;	// IMP=0x00100000000167bf
- (void)pruneExpiredItems;	// IMP=0x00100000000161cb
- (id)cachedWaypointForEntry:(id)arg1;	// IMP=0x0010000000015e54
- (void)setCachedWaypoint:(id)arg1 forEntry:(id)arg2;	// IMP=0x0010000000015b06
- (id)keyForEntry:(id)arg1;	// IMP=0x0010000000015af1
- (id)cachedRoutesCacheForOrigin:(id)arg1 destination:(id)arg2;	// IMP=0x00100000000156b7
- (void)setCachedRouteCache:(id)arg1 forOrigin:(id)arg2 destination:(id)arg3;	// IMP=0x001000000001535d
- (id)keyForOrigin:(id)arg1 destination:(id)arg2;	// IMP=0x00100000000152c9
- (_Bool)isCachedItemValidWithType:(id)arg1 andCacheDate:(id)arg2;	// IMP=0x001000000001523d
- (id)minimumDateForCachedObjectOfType:(id)arg1;	// IMP=0x00100000000151c0
- (_Bool)saveCacheToFile;	// IMP=0x0010000000014fbb
- (void)loadCacheFromFile;	// IMP=0x0010000000014e32
- (id)init;	// IMP=0x0010000000014db9
- (id)initWithRoutesManager:(id)arg1 cachePath:(id)arg2;	// IMP=0x0010000000014cd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
