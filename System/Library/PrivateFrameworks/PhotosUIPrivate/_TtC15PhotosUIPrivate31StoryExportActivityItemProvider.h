//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/UIActivityItemProvider.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC15PhotosUIPrivate31StoryExportActivityItemProvider : UIActivityItemProvider
{
    MISSING_TYPE *storyConfiguration;	// 8 = 0x8
    MISSING_TYPE *aspectRatio;	// 16 = 0x10
    MISSING_TYPE *destinationURL;	// 6648301 = 0x6571ed
    MISSING_TYPE *exportManager;	// 18068 = 0x4694
    MISSING_TYPE *iconAsset;	// 0 = 0x0
    MISSING_TYPE *fullSizePlayerExtendedTraitCollectionSnapshot;	// 2147484672 = 0x80000400
    MISSING_TYPE *presentingViewController;	// 0 = 0x0
    MISSING_TYPE *delegate;	// 1953718111 = 0x74735f5f
    MISSING_TYPE *progressController;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000002cfa1
- (void)cancel;	// IMP=0x000000000002cf50
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;	// IMP=0x000000000002bef5
@property(nonatomic, readonly) id item;
- (id)initWithPlaceholderItem:(id)arg1;	// IMP=0x000000000002b7e3

@end
