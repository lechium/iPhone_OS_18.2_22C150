//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDaemonCore/NSObject-Protocol.h>

@class NSString;

@protocol IMSyncedSettingsLocalStorageDelegate <NSObject>
- (void)setValue:(id)arg1 forDomain:(NSString *)arg2 forKey:(NSString *)arg3;
- (id)getValueFromDomain:(NSString *)arg1 forKey:(NSString *)arg2;
@end
