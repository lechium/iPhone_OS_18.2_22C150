//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/NSObject-Protocol.h>

@class CNContact, EKCalendarItem, MKMapItem, NSString;

@protocol _MKPlaceItem <NSObject>
@property(readonly, nonatomic) _Bool hasContactOnly;
@property(readonly, nonatomic) _Bool isContactPersisted;
@property(readonly, nonatomic) EKCalendarItem *calendarItem;
@property(readonly, nonatomic) _Bool representsPerson;
@property(readonly, nonatomic) unsigned long long options;
@property(readonly, nonatomic) CNContact *contact;
@property(readonly, nonatomic) _Bool isIntermediateMapItem;
@property(readonly, nonatomic) MKMapItem *mapItem;
@property(readonly, nonatomic) NSString *secondaryName;
@property(readonly, nonatomic) NSString *name;
@end
