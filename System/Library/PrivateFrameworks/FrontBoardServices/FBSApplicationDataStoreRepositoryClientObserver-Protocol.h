//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/NSObject-Protocol.h>

@class NSString;
@protocol FBSApplicationDataStoreRepositoryClient;

@protocol FBSApplicationDataStoreRepositoryClientObserver <NSObject>

@optional
- (void)applicationDataStoreRepositoryClient:(id <FBSApplicationDataStoreRepositoryClient>)arg1 storeInvalidatedForApplication:(NSString *)arg2;
- (void)applicationDataStoreRepositoryClient:(id <FBSApplicationDataStoreRepositoryClient>)arg1 application:(NSString *)arg2 changedObject:(id)arg3 forKey:(NSString *)arg4;
@end
