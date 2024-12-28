//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoard/NSObject-Protocol.h>

@class DNDModeConfigurationService, NSArray, NSString;

@protocol DNDModeConfigurationServiceListener <NSObject>

@optional
- (void)modeConfigurationService:(DNDModeConfigurationService *)arg1 didReceiveAppConfigurationContextUpdateForModeIdentifier:(NSString *)arg2;
- (void)modeConfigurationService:(DNDModeConfigurationService *)arg1 didReceiveAvailableModesUpdate:(NSArray *)arg2;
@end
