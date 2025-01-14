//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItem, NSString, NSUUID;

@interface MapsLocationOfInterest : NSObject
{
    long long _type;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    NSString *_customLabel;	// 24 = 0x18
    MKMapItem *_mapItem;	// 32 = 0x20
    NSString *_originalName;	// 40 = 0x28
}

+ (void)fetchLocationOfInterestWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00400000009ee897
- (void).cxx_destruct;	// IMP=0x00200000009eedcd
@property(readonly, nonatomic) NSString *originalName; // @synthesize originalName=_originalName;
@property(readonly, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(retain, nonatomic) NSString *customLabel; // @synthesize customLabel=_customLabel;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x00100000009eec90
@property(readonly, nonatomic) _Bool isFrequentLocation;
@property(readonly, nonatomic) NSString *name;
- (void)_updateMapItemWithGeoMapItem:(id)arg1;	// IMP=0x00100000009ee49f
- (void)_updateMapItemName;	// IMP=0x00100000009ee44f
- (id)initWithMapsFavoriteItem:(id)arg1;	// IMP=0x00100000009ee2df
- (id)initWithMapsSuggestionEntry:(id)arg1;	// IMP=0x00100000009ee152
- (id)initWithLocationOfInterest:(id)arg1 geoMapItem:(id)arg2;	// IMP=0x00100000009ee068
- (id)initWithLocationOfInterestType:(long long)arg1 mapItem:(id)arg2;	// IMP=0x00100000009edfcc
- (id)init;	// IMP=0x00100000009edfbe

@end

