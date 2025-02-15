//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StorageData/NSObject-Protocol.h>

@class NSArray, PSUsageBundleApp, PSUsageBundleCategory;

@protocol PSStorageReporting <NSObject>
- (_Bool)allowDeletionForCategory:(PSUsageBundleCategory *)arg1;
- (NSArray *)usageBundleApps;

@optional
- (void)usageBundleApp:(PSUsageBundleApp *)arg1 willDisplaySpecifier:(id *)arg2;
- (_Bool)deleteDataForCategory:(PSUsageBundleCategory *)arg1 withError:(id *)arg2;
- (float)sizeForCategory:(PSUsageBundleCategory *)arg1;
- (Class)usageDetailControllerClassForUsageBundleApp:(PSUsageBundleApp *)arg1;
@end

