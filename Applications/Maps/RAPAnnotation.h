//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOFeatureStyleAttributes, MKMapItem, NSString;

@interface RAPAnnotation : NSObject
{
    MKMapItem *_item;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000bb267b
@property(readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property(readonly, copy, nonatomic) NSString *title;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (id)initWithMapItem:(id)arg1;	// IMP=0x0010000000bb2586
- (id)init;	// IMP=0x0010000000bb255c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly) Class superclass;

@end

