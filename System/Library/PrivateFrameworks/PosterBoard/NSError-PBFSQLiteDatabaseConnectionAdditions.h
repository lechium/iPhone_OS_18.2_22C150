//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (PBFSQLiteDatabaseConnectionAdditions)
+ (id)pbf_sqliteDatabaseErrorWithCode:(int)arg1 errorMessage:(id)arg2;	// IMP=0x006000000004a757
+ (id)pbf_generalErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x00600000000db0b3
+ (id)pbf_dataStoreErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x00600000000db08d
+ (id)pbf_extensionStoreCoordinatorErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x00600000000db067
+ (id)pbf_descriptorStoreCoordinatorErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x00600000000db041
- (_Bool)pbf_isGeneralCancelledError;	// IMP=0x00100000000db0d9
@end
