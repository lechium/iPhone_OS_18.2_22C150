//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CADDatabaseInitializationOptions;

@protocol CADAccessInterface
- (void)CADDatabaseResetWithReply:(void (^)(int))arg1;
- (void)CADDatabaseRequestAccessForEntityType:(unsigned long long)arg1 desiredFullAccess:(_Bool)arg2 isBlockingUIThread:(_Bool)arg3 reason:(long long)arg4 reply:(void (^)(int, long long))arg5;
- (void)CADDatabaseGetAccess:(void (^)(int, long long, long long))arg1;
- (void)CADDatabaseSetInitializationOptions:(CADDatabaseInitializationOptions *)arg1 reply:(void (^)(int, int))arg2;
@end
