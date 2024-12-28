//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapView, NSMutableDictionary, NSNumber, NSString, NSTimer;
@protocol ChromeMapSettingsDelegate;

@interface ChromeMapSettings : NSObject
{
    struct CLLocationCoordinate2D _centerCoordinate;	// 8 = 0x8
    NSNumber *_zoomLevel;	// 24 = 0x18
    NSNumber *_trackingMode;	// 32 = 0x20
    NSNumber *_pitched;	// 40 = 0x28
    unsigned long long _runningApplicationCount;	// 48 = 0x30
    NSMutableDictionary *_applicationsByRunIndex;	// 56 = 0x38
    unsigned long long _type;	// 64 = 0x40
    MKMapView *_mapView;	// 72 = 0x48
    id <ChromeMapSettingsDelegate> _delegate;	// 80 = 0x50
    NSString *_name;	// 88 = 0x58
    long long _userInterfaceIdiom;	// 96 = 0x60
    NSTimer *_saveTimer;	// 104 = 0x68
}

+ (void)_registerDefaultsIfNeeded;	// IMP=0x004000000052aa75
+ (id)_nameForType:(unsigned long long)arg1;	// IMP=0x001000000052777b
+ (void)initialize;	// IMP=0x00100000005275c0
- (void).cxx_destruct;	// IMP=0x002000000052be4f
@property(retain, nonatomic) NSTimer *saveTimer; // @synthesize saveTimer=_saveTimer;
@property(nonatomic) long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <ChromeMapSettingsDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)dictionaryRepresentation;	// IMP=0x001000000052bc64
- (void)_writeToUserDefaultsWithKeys:(id)arg1;	// IMP=0x001000000052b7c1
- (void)_readFromUserDefaultsWithKeys:(id)arg1;	// IMP=0x001000000052b2f5
- (void)_saveIfNeeded;	// IMP=0x001000000052b2ac
- (void)save;	// IMP=0x001000000052b1fe
- (void)setNeedsSaving;	// IMP=0x001000000052afad
- (id)description;	// IMP=0x001000000052ade0
- (void)clear;	// IMP=0x001000000052abc0
- (_Bool)_isCamera:(id)arg1 equalToCamera:(id)arg2;	// IMP=0x001000000052a950
- (void)applyToMapViewAnimated:(_Bool)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000005282a1
- (void)readFromMapSettings:(id)arg1;	// IMP=0x0010000000528192
- (void)readFromMapView;	// IMP=0x00100000005280a9
@property(nonatomic) _Bool pitched;
@property(readonly, nonatomic) _Bool hasPitched;
@property(nonatomic) long long trackingMode;
@property(readonly, nonatomic) _Bool hasTrackingMode;
@property(nonatomic) double zoomLevel;
@property(readonly, nonatomic) _Bool hasZoomLevel;
@property(readonly, nonatomic) _Bool hasCenterCoordinate;
- (id)_defaultsKeysForType:(unsigned long long)arg1;	// IMP=0x00100000005277a6
- (void)reload;	// IMP=0x0010000000527687
- (id)initWithType:(unsigned long long)arg1 userInterfaceIdiom:(long long)arg2;	// IMP=0x0010000000527612
- (id)init;	// IMP=0x00100000005275f7

@end
