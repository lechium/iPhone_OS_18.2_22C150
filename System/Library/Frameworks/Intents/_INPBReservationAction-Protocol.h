//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDateTimeRange, _INPBUserActivity;

@protocol _INPBReservationAction <NSObject>
@property(readonly, nonatomic) _Bool hasValidDuration;
@property(retain, nonatomic) _INPBDateTimeRange *validDuration;
@property(readonly, nonatomic) _Bool hasUserActivity;
@property(retain, nonatomic) _INPBUserActivity *userActivity;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
- (int)StringAsType:(NSString *)arg1;
- (NSString *)typeAsString:(int)arg1;
@end

