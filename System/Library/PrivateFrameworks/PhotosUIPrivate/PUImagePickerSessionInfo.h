//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUSessionInfo.h"

@class PHCollectionList;

__attribute__((visibility("hidden")))
@interface PUImagePickerSessionInfo : PUSessionInfo
{
    _Bool _isLimitedLibraryPicker;	// 8 = 0x8
    PHCollectionList *_rootCollectionList;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002e0cea
@property(retain, nonatomic) PHCollectionList *rootCollectionList; // @synthesize rootCollectionList=_rootCollectionList;
- (_Bool)isLimitedLibraryPicker;	// IMP=0x00000000002e0cb5
- (_Bool)isForAssetPicker;	// IMP=0x00000000002e0cad
- (_Bool)isSelectingAssets;	// IMP=0x00000000002e0ca5
- (id)initWithPhotosViewDelegate:(id)arg1 loadingStatusManager:(id)arg2 allowMultipleSelection:(_Bool)arg3 limitedLibrary:(_Bool)arg4;	// IMP=0x00000000002e0be3

@end
