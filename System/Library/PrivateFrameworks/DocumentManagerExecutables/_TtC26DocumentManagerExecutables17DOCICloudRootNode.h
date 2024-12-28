//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DesktopServicesPriv/FICustomNode.h>

@class FPItem, MISSING_TYPE, NSArray, NSDate, NSError, NSNumber, NSPersonNameComponents, NSProgress, NSString, NSURL, UTType;

@interface _TtC26DocumentManagerExecutables17DOCICloudRootNode : FICustomNode
{
    MISSING_TYPE *deferredCreationNode;	// 8 = 0x8
    MISSING_TYPE *observerBlock;	// 16 = 0x10
    MISSING_TYPE *iCloudContainer;	// 32 = 0x20
    MISSING_TYPE *appLibrariesContainer;	// 40 = 0x28
    MISSING_TYPE *providerDomain;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000aa340
- (id)init;	// IMP=0x00000000000aa2e0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a8cc0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a8c90
- (long long)_doc_fileTypeCompare:(id)arg1;	// IMP=0x00000000000abac0
- (long long)localizedStandardTagsCompareNode:(id)arg1;	// IMP=0x00000000000aba50
@property(nonatomic, readonly) NSArray *tags;
@property(nonatomic, readonly) NSArray *itemDecorations;
@property(nonatomic, readonly) NSPersonNameComponents *ownerNameComponents;
@property(nonatomic, readonly) _Bool isTopLevelSharedItem;
@property(nonatomic, readonly) _Bool isSharedByCurrentUser;
@property(nonatomic, readonly) _Bool isShared;
@property(nonatomic, readonly) NSProgress *copyingProgress;
@property(nonatomic, readonly) NSError *uploadingError;
@property(nonatomic, readonly) NSProgress *uploadingProgress;
- (_Bool)isUploaded;	// IMP=0x00000000000ab370
- (_Bool)isUploading;	// IMP=0x00000000000ab330
@property(nonatomic, readonly) NSError *downloadingError;
@property(nonatomic, readonly) NSProgress *downloadingProgress;
- (_Bool)isDownloaded;	// IMP=0x00000000000ab270
- (_Bool)isDownloading;	// IMP=0x00000000000ab230
@property(nonatomic, readonly) _Bool isTrashed;
@property(nonatomic, readonly) _Bool isRootItem;
@property(nonatomic, readonly) _Bool isContainer;
@property(nonatomic, readonly) _Bool isCloudItem;
@property(nonatomic, readonly) _Bool isExternalDownloadPlaceholder;
@property(nonatomic, readonly) _Bool isPending;
@property(nonatomic, readonly) _Bool isWritable;
@property(nonatomic, readonly) _Bool isReadable;
@property(nonatomic, readonly) _Bool isActionable;
@property(nonatomic, readonly) NSURL *fileURL;
@property(nonatomic, readonly) NSString *filename;
@property(nonatomic, readonly) _Bool isFolder;
@property(nonatomic, readonly) NSDate *dateForSortingByRecents;
@property(nonatomic, readonly) NSDate *doc_lastUsedDate;
@property(nonatomic, readonly) NSDate *modificationDate;
@property(nonatomic, readonly) NSDate *doc_creationDate;
@property(nonatomic, readonly) NSDate *creationDate;
@property(nonatomic, readonly) NSString *providerID;
@property(nonatomic, readonly) NSString *providerDomainID;
@property(nonatomic, readonly) NSNumber *childItemCount;
@property(nonatomic, readonly) NSNumber *fileSize;
@property(nonatomic, readonly) NSString *typeIdentifier;
@property(nonatomic, readonly) UTType *contentType;
@property(nonatomic, readonly) FPItem *fpfs_fpItem;
@property(nonatomic, readonly) NSString *displayName;
@property(nonatomic, readonly) id identifier;

// Remaining properties
@property(nonatomic, readonly) _Bool downloaded;
@property(nonatomic, readonly) _Bool downloading;
@property(nonatomic, readonly) _Bool uploaded;
@property(nonatomic, readonly) _Bool uploading;

@end
