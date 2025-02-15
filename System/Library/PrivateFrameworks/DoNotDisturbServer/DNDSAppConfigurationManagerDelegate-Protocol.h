//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDAppAction, DNDApplicationIdentifier, DNDSAppConfigurationManager, DNDSystemAction, NSDictionary, NSString;

@protocol DNDSAppConfigurationManagerDelegate <NSObject>

@optional
- (void)appConfigurationManager:(DNDSAppConfigurationManager *)arg1 didClearSystemActionsInModeIdentifiers:(NSDictionary *)arg2;
- (void)appConfigurationManager:(DNDSAppConfigurationManager *)arg1 didSetSystemAction:(DNDSystemAction *)arg2 modeIdentifier:(NSString *)arg3;
- (void)appConfigurationManager:(DNDSAppConfigurationManager *)arg1 didClearSystemAction:(DNDSystemAction *)arg2 modeIdentifier:(NSString *)arg3;
- (void)appConfigurationManager:(DNDSAppConfigurationManager *)arg1 didClearActionsForAppsInModeIdentifiers:(NSDictionary *)arg2;
- (void)appConfigurationManager:(DNDSAppConfigurationManager *)arg1 didSetAction:(DNDAppAction *)arg2 forApplicationIdentifier:(DNDApplicationIdentifier *)arg3 modeIdentifier:(NSString *)arg4;
- (void)appConfigurationManager:(DNDSAppConfigurationManager *)arg1 didClearActionWithIdentifier:(NSString *)arg2 forApplicationIdentifier:(DNDApplicationIdentifier *)arg3 modeIdentifier:(NSString *)arg4;
@end

