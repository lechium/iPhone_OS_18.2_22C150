//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSString, PUPhotoSelectionManager, PUPhotosGridBarsHelper;

@protocol PUPhotosGridBarsHelperDelegate <NSObject>
- (void)photosGridBarsHelper:(PUPhotosGridBarsHelper *)arg1 didChange:(unsigned long long)arg2;
- (NSString *)photosGridBarsHelper:(PUPhotosGridBarsHelper *)arg1 titleForPhotoSelectionManager:(PUPhotoSelectionManager *)arg2;
- (void)photosGridBarsHelper:(PUPhotosGridBarsHelper *)arg1 getTitle:(out id *)arg2 prompt:(out id *)arg3 shouldHideBackButton:(out _Bool *)arg4 leftBarButtonItems:(out id *)arg5 rightBarButtonItems:(out id *)arg6 forPhotoSelectionManager:(PUPhotoSelectionManager *)arg7;
- (PUPhotoSelectionManager *)photosGridBarsHelperPhotoSelectionManager:(PUPhotosGridBarsHelper *)arg1;
@end

