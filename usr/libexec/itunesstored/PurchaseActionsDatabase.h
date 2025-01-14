//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SSSQLiteDatabase;

@interface PurchaseActionsDatabase : NSObject
{
    SSSQLiteDatabase *_database;	// 8 = 0x8
}

+ (_Bool)_setupDatabase:(id)arg1;	// IMP=0x00400000000d0ae9
- (void).cxx_destruct;	// IMP=0x00200000000d0c09
- (void)incrementPingbackRetryCountForApp:(id)arg1;	// IMP=0x00100000000d0737
- (void)removeNonPendingInstallAttributionPingbacksBeforeDate:(id)arg1;	// IMP=0x00100000000d037b
- (void)removeInstallAttributionPingbackForApp:(id)arg1;	// IMP=0x00100000000cffc9
- (void)getPendingInstallAttributionPingbacksWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cfa74
- (void)setPingbackPendingForApp:(id)arg1;	// IMP=0x00100000000cf6c2
- (void)getInstallAttributionPingbackForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cef62
- (void)insertInstallAttributionPingback:(id)arg1;	// IMP=0x00100000000ce97b
- (void)removeInstallAttributionParamsBeforeDate:(id)arg1;	// IMP=0x00100000000ce5bf
- (void)removeInstallAttributionParamsForApp:(id)arg1;	// IMP=0x00100000000ce20d
- (void)getInstallAttributionParamsForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cda44
- (void)insertInstallAttributionParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cd46d
- (void)resetTimestampsForApp:(id)arg1;	// IMP=0x00100000000cca80
- (void)insertPurchaseIntent:(id)arg1;	// IMP=0x00100000000cc5e4
- (void)getPurchaseIntentsForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cc018
- (void)deletePurchaseIntentsForApp:(id)arg1;	// IMP=0x00100000000cbddd
- (void)readUsingTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cbce3
- (void)readAsyncUsingTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cbc30
- (void)modifyUsingTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cbb32
- (id)initWithDatabaseURL:(id)arg1 readOnly:(_Bool)arg2;	// IMP=0x00100000000cba5f
- (id)init;	// IMP=0x00100000000cb9cd

@end

