//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class PUCameraImportItemCell, PXImportItemViewModel;

@protocol PUCameraImportItemCellDelegate <NSObject>
- (void)handleTouchEvent:(long long)arg1 forCell:(PUCameraImportItemCell *)arg2;
- (void)importCell:(PUCameraImportItemCell *)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;
- (long long)contentFillModeForImportCell:(PUCameraImportItemCell *)arg1;
- (long long)importCell:(PUCameraImportItemCell *)arg1 requestImageForImportItem:(PXImportItemViewModel *)arg2 ofSize:(unsigned long long)arg3 completion:(void (^)(UIImage *, unsigned long long, _Bool))arg4;
@end

