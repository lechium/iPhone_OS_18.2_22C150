//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CircleAnnotation : NSObject
{
    double _color[4];	// 8 = 0x8
    double _radius;	// 40 = 0x28
    struct CLLocationCoordinate2D _coordinate;	// 48 = 0x30
}

@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, nonatomic) double alpha;
@property(readonly, nonatomic) double blue;
@property(readonly, nonatomic) double green;
@property(readonly, nonatomic) double red;
- (void)setColorRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x0010000000b37598
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x0010000000b37546

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
