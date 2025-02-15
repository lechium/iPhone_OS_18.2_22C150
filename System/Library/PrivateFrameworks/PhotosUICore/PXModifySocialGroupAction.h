//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PXPhotosAction.h"

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface PXModifySocialGroupAction : PXPhotosAction
{
    MISSING_TYPE *originalSocialGroup;	// 8 = 0x8
    MISSING_TYPE *peopleToBeAdded;	// 16 = 0x10
    MISSING_TYPE *peopleToBeRemoved;	// 24 = 0x18
    MISSING_TYPE *newCustomTitle;	// 32 = 0x20
    MISSING_TYPE *customTitleWasDeleted;	// 48 = 0x30
    MISSING_TYPE *newKeyAsset;	// 56 = 0x38
    MISSING_TYPE *placeholderLocalIdentifier;	// 64 = 0x40
    MISSING_TYPE *originalTitle;	// 80 = 0x50
    MISSING_TYPE *originalKeyAsset;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000004c3d20
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x00000000004c3cc0
- (void)performUndo:(CDUnknownBlockType)arg1;	// IMP=0x00000000004c3c30
- (void)performAction:(CDUnknownBlockType)arg1;	// IMP=0x00000000004c3280
- (id)initWithOriginalSocialGroup:(id)arg1 newKeyAsset:(id)arg2 newCustomTitle:(id)arg3 customTitleWasDeleted:(_Bool)arg4 peopleToBeAdded:(id)arg5 peopleToBeRemoved:(id)arg6;	// IMP=0x00000000004c2ad0
@property(nonatomic, readonly) NSString *localizedActionName;
@property(nonatomic, readonly) NSString *actionIdentifier;

@end

