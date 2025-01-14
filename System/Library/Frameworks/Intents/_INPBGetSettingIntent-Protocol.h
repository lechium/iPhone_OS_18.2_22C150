//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBSettingMetadata;

@protocol _INPBGetSettingIntent <NSObject>
@property(readonly, nonatomic) _Bool hasSettingMetadata;
@property(retain, nonatomic) _INPBSettingMetadata *settingMetadata;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(nonatomic) _Bool hasConfirmationValue;
@property(nonatomic) int confirmationValue;
- (int)StringAsConfirmationValue:(NSString *)arg1;
- (NSString *)confirmationValueAsString:(int)arg1;
@end

