//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDMode, DNDModeConfiguration, DNDSModeConfigurationManager, NSArray, NSDictionary;

@protocol DNDSModeConfigurationManagerDelegate <NSObject>
- (void)modeConfigurationManager:(DNDSModeConfigurationManager *)arg1 didModifyExceptionsForContacts:(NSDictionary *)arg2 forModeConfiguration:(DNDModeConfiguration *)arg3;
- (void)modeConfigurationManager:(DNDSModeConfigurationManager *)arg1 didUpdateAvailableModes:(NSArray *)arg2;

@optional
- (void)modeConfigurationManager:(DNDSModeConfigurationManager *)arg1 didModifyAvailableMode:(DNDMode *)arg2;
@end
