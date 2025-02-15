//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarDatabase/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol CalMigrationReadOnlyAccount;

@protocol CalMigrationReadOnlyAccountStore <NSObject>
- (NSArray *)childAccountsForAccount:(id <CalMigrationReadOnlyAccount>)arg1 withTypeIdentifier:(NSString *)arg2;
- (NSArray *)topLevelAccountsWithAccountTypeIdentifier:(NSString *)arg1 error:(id *)arg2;
- (id <CalMigrationReadOnlyAccount>)accountWithIdentifier:(NSString *)arg1;
@end

