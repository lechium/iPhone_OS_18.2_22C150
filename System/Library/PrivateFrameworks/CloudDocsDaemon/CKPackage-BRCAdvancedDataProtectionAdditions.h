//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKPackage.h>

@interface CKPackage (BRCAdvancedDataProtectionAdditions)
+ (id)br_clonedPackageWithRecordID:(id)arg1 databaseScope:(long long)arg2 fieldName:(id)arg3 boundaryKey:(id)arg4 error:(id *)arg5;	// IMP=0x006000000013d743
+ (id)br_packageWithPackage:(id)arg1 error:(id *)arg2;	// IMP=0x006000000013d669
+ (id)br_packageWithBoundaryKey:(id)arg1 error:(id *)arg2;	// IMP=0x006000000013d5b3
+ (_Bool)anchorExistsForArchiverInfo:(id)arg1;	// IMP=0x0060000000322810
+ (void)destroyAnchorAndPackageAnchoredAtURL:(id)arg1;	// IMP=0x00600000003225a8
- (_Bool)anchorAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00100000003228ab
@end

