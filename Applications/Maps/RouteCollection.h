//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, NSArray, NSString;

@interface RouteCollection : NSObject
{
    NSArray *_alternateRoutes;	// 8 = 0x8
    unsigned long long _currentRouteIndex;	// 16 = 0x10
    NSArray *_routes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000008be1ee
@property(copy, nonatomic) NSArray *routes; // @synthesize routes=_routes;
@property(nonatomic) unsigned long long currentRouteIndex; // @synthesize currentRouteIndex=_currentRouteIndex;
- (unsigned long long)hash;	// IMP=0x00100000008be119
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000008be009
@property(readonly, nonatomic) NSArray *uniqueRouteIDs;
- (unsigned long long)indexOfRoute:(id)arg1;	// IMP=0x00100000008bdeb7
- (unsigned long long)indexForUniqueRouteID:(id)arg1;	// IMP=0x00100000008bdd34
@property(readonly, nonatomic) NSArray *alternateRoutes; // @synthesize alternateRoutes=_alternateRoutes;
@property(readonly, nonatomic) GEOComposedRoute *currentRoute;
@property(readonly, nonatomic) unsigned long long count;
- (id)routeCollectionByReplacingAlternateComposedRoutes:(id)arg1 withTraffics:(id)arg2;	// IMP=0x00100000008bd967
- (id)routeCollectionByReplacingAlternateRoutes:(id)arg1;	// IMP=0x00100000008bd88d
- (id)routeCollectionByChangingCurrentRouteIndex:(unsigned long long)arg1;	// IMP=0x00100000008bd81e
@property(readonly) NSString *shortDescription;
- (id)description;	// IMP=0x00100000008bd6d6
- (void)dealloc;	// IMP=0x00100000008bd57a
@property(readonly, nonatomic) unsigned long long fastestRouteIndex;
@property(readonly, nonatomic) unsigned long long shortestRouteIndex;
- (id)initWithRoutes:(id)arg1 currentRouteIndex:(unsigned long long)arg2;	// IMP=0x00100000008bce17
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00100000008be43d
- (void)enumerateRoutesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000008be2eb
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x00100000008be2d9
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00100000008be27a
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00100000008be268
- (id)objectForKey:(id)arg1;	// IMP=0x00100000008be216

@end

