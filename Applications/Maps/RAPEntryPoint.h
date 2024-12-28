//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEORoadAccessPoint, NSString;

@interface RAPEntryPoint : NSObject
{
    GEORoadAccessPoint *_accessPoint;	// 8 = 0x8
}

+ (id)entryPointStyleAttributes;	// IMP=0x0020000000c92435
- (void).cxx_destruct;	// IMP=0x0020000000c9249f
@property(retain, nonatomic) GEORoadAccessPoint *accessPoint; // @synthesize accessPoint=_accessPoint;
@property(readonly, nonatomic) _Bool isDestinationEntryPoint;
- (void)_setType:(long long)arg1;	// IMP=0x0010000000c91ebe
@property(readonly, nonatomic) long long entryPointType;
- (id)markerText;	// IMP=0x0010000000c91bab
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x0010000000c91a2b
@property(readonly, copy, nonatomic) NSString *title;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, copy, nonatomic) NSString *subtitle;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

- (id)initWithAccessPoint:(id)arg1 type:(long long)arg2;	// IMP=0x0010000000c91977
- (id)initWithAccessPoint:(id)arg1;	// IMP=0x0010000000c9190c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
