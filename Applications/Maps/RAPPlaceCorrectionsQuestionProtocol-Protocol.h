//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol RAPPlaceCorrectionsQuestionProtocol <NSObject>
@property(nonatomic) struct CLLocationCoordinate2D selectedCoordinate;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, nonatomic) struct CLLocationCoordinate2D originalCoordinate;
@property(readonly, nonatomic) unsigned long long mapType;
@property(readonly, nonatomic) NSString *localizedCoordinatePickingPrompt;
@end
