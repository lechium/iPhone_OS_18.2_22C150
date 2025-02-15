//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDPerModeSettingsMO, NSDictionary, NSObject, NSString;
@protocol DNDSAppSpecificSettings;

@protocol DNDSAppSpecificSettingsType <NSObject>
+ (NSString *)appSpecificSettingsEntity;
+ (void)completeManagedObject:(inout DNDPerModeSettingsMO *)arg1 forAppSpecificSettings:(NSObject<DNDSAppSpecificSettings> *)arg2;
+ (NSObject<DNDSAppSpecificSettings> *)appSpecificSettingsForManagedObject:(DNDPerModeSettingsMO *)arg1;

@optional
+ (NSDictionary *)dictionaryRepresentationForAppSpecificSettings:(NSObject<DNDSAppSpecificSettings> *)arg1;
+ (NSObject<DNDSAppSpecificSettings> *)appSpecificSettingsFromDictionaryRepresentation:(NSDictionary *)arg1;
@end

