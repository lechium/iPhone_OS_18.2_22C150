//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsRippleView, NSString;

@interface MapsRippleAnnotation : NSObject
{
    MapsRippleView *_rippleView;	// 8 = 0x8
    struct CLLocationCoordinate2D _coordinate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000d2a8b7
@property(readonly, nonatomic) MapsRippleView *rippleView; // @synthesize rippleView=_rippleView;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (id)init;	// IMP=0x0010000000d2a821

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
@property(readonly, copy, nonatomic) NSString *title;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N


@end
