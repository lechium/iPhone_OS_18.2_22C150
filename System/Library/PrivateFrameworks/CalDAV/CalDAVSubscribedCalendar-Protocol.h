//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalDAV/CalDAVCalendar-Protocol.h>

@class NSString, NSURL;

@protocol CalDAVSubscribedCalendar <CalDAVCalendar>
@property(nonatomic) double refreshInterval;
@property(nonatomic) _Bool hasTaskFilter;
@property(nonatomic) _Bool hasAttachmentFilter;
@property(nonatomic) _Bool hasAlarmFilter;
@property(retain, nonatomic) NSURL *subscriptionURL;

@optional
@property(retain, nonatomic) NSString *languageCode;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,&,N

@property(retain, nonatomic) NSString *locationCode;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,&,N

@property(nonatomic) _Bool autoprovisioned;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@end
