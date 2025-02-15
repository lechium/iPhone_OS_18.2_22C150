//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSMemoryEntity.h>

@class NSData, NSDictionary, NSString;

@interface FinishDownloadAssetMemoryEntity : SSMemoryEntity
{
    NSString *_downloadKind;	// 8 = 0x8
}

+ (id)defaultProperties;	// IMP=0x0040000000113f1d
+ (Class)databaseEntityClass;	// IMP=0x0010000000113f0c
- (void).cxx_destruct;	// IMP=0x0020000000114076
@property(retain, nonatomic) NSString *downloadKind; // @synthesize downloadKind=_downloadKind;
@property(readonly, nonatomic) NSString *variantIdentifier;
@property(readonly, nonatomic) NSString *sourceURLString;
// Error: Property attributes should begin with the type ('T') attribute, property name: SINFs
// Property attributes: (null)

@property(readonly, nonatomic) NSData *SINFData;
@property(readonly, nonatomic) unsigned long long processingTypes;
@property(readonly, nonatomic) NSString *pathExtension;
@property(readonly, nonatomic) NSString *localPath;
@property(readonly, nonatomic) long long mediaLibraryProtectionType;
@property(readonly, nonatomic, getter=isExternalAsset) _Bool externalAsset;
@property(readonly, nonatomic, getter=isDRMFree) _Bool DRMFree;
@property(readonly, nonatomic) NSString *fileProtectionType;
@property(readonly, nonatomic) NSDictionary *fileAttributes;
@property(readonly, nonatomic) NSData *DPInfoData;
@property(readonly, nonatomic) NSString *destinationURLString;
@property(readonly, nonatomic) NSString *destinationFileName;
@property(readonly, nonatomic) NSString *assetType;

@end

