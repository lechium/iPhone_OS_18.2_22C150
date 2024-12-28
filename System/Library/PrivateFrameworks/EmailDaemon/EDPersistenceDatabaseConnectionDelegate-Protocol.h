//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class NSString, NSURL;
@protocol EFSQLQueryLogging;

@protocol EDPersistenceDatabaseConnectionDelegate <NSObject>
@property(readonly, copy, nonatomic) NSString *protectedDatabasePath;
- (NSURL *)urlForDatabasePath:(NSString *)arg1 type:(long long)arg2;

@optional
@property(readonly, nonatomic) id <EFSQLQueryLogging> queryLogger;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<EFSQLQueryLogging>",?,R,N

@end
