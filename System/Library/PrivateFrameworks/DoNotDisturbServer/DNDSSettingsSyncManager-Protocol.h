//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@protocol DNDSSettingsSyncManagerDataSource, DNDSSettingsSyncManagerDelegate;

@protocol DNDSSettingsSyncManager <NSObject>
@property(nonatomic) __weak id <DNDSSettingsSyncManagerDelegate> delegate;
@property(nonatomic) __weak id <DNDSSettingsSyncManagerDataSource> dataSource;
- (void)update;
- (void)resume;
@end
