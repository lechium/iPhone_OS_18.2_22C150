//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapAccess, NSString;

__attribute__((visibility("hidden")))
@interface GEOMapAccessTransitNodeBase : NSObject
{
    GEOMapAccess *_map;	// 8 = 0x8
    shared_ptr_52e51bdf _node;	// 16 = 0x10
    double _boundingRadius;	// 32 = 0x20
    CDStruct_02837cd9 _boundingRect;	// 40 = 0x28
    CDStruct_c3b9c2ee *_polygonPoints;	// 72 = 0x48
    long long _polygonPointsCount;	// 80 = 0x50
}

- (id).cxx_construct;	// IMP=0x000000000027627e
- (void).cxx_destruct;	// IMP=0x0000000000276258
@property(readonly, nonatomic) long long polygonPointsCount; // @synthesize polygonPointsCount=_polygonPointsCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *polygonPoints; // @synthesize polygonPoints=_polygonPoints;
@property(readonly, nonatomic) CDStruct_90e2a262 boundingRect; // @synthesize boundingRect=_boundingRect;
@property(readonly, nonatomic) double boundingRadius; // @synthesize boundingRadius=_boundingRadius;
- (id)findAccessPoints:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000276219
- (double)distanceInMetersFrom:(CDStruct_c3b9c2ee)arg1;	// IMP=0x00000000002761de
- (id)findGeometryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000275f37
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *internalName;
@property(readonly, nonatomic) unsigned long long transitID;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (void)dealloc;	// IMP=0x0000000000275e0d
- (id)initWithMap:(id)arg1 node:(shared_ptr_52e51bdf)arg2;	// IMP=0x0000000000275d1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

