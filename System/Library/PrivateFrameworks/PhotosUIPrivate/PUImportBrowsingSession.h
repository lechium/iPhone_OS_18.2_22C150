//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUBrowsingSession.h"

@class MISSING_TYPE, NSString, PXImportController;
@protocol PUBrowsingSessionImageWellThumbnailProvider;

@interface PUImportBrowsingSession : PUBrowsingSession
{
    MISSING_TYPE *importController;	// 8 = 0x8
    MISSING_TYPE *thumbnailProvider;	// 16 = 0x10
}

+ (id)withDeviceMedia;	// IMP=0x00100000000b5fa3
- (void).cxx_destruct;	// IMP=0x00000000000b6913
- (id)initWithDataSourceManager:(id)arg1 actionManager:(id)arg2 mediaProvider:(id)arg3 photosDetailsContext:(id)arg4 lowMemoryMode:(_Bool)arg5 importStatusManager:(id)arg6 privacyController:(id)arg7;	// IMP=0x00000000000b683c
- (void)importController:(id)arg1 failedToAddImportSource:(id)arg2 exceptions:(id)arg3;	// IMP=0x00000000000b668e
- (void)importController:(id)arg1 addedImportSource:(id)arg2;	// IMP=0x00000000000b6627
- (void)importController:(id)arg1 removedImportSource:(id)arg2;	// IMP=0x00000000000b657a
@property(nonatomic, readonly) id <PUBrowsingSessionImageWellThumbnailProvider> imageWellThumbnailProvider;
@property(nonatomic, retain) PXImportController *importController; // @synthesize importController;
@property(nonatomic, readonly) NSString *emptyPlaceholderSubtitle;
@property(nonatomic, readonly) NSString *emptyPlaceholderTitle;

@end
