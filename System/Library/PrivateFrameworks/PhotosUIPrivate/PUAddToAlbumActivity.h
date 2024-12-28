//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXActivity.h>

@class NSArray, NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface PUAddToAlbumActivity : PXActivity
{
    UIViewController *_presenterViewController;	// 8 = 0x8
    NSArray *_selectedAssets;	// 16 = 0x10
}

+ (long long)activityCategory;	// IMP=0x00100000001beac9
+ (_Bool)canPerformWithItemSourceController:(id)arg1;	// IMP=0x00100000001bea36
- (void).cxx_destruct;	// IMP=0x00000000001be8ee
@property(retain, nonatomic) NSArray *selectedAssets; // @synthesize selectedAssets=_selectedAssets;
- (void)performActivity;	// IMP=0x00000000001be777
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00000000001be719
- (id)_systemImageName;	// IMP=0x00000000001be70c
- (id)activityTitle;	// IMP=0x00000000001be6fb
- (id)activityType;	// IMP=0x00000000001be6e7
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;	// IMP=0x00000000001be387
- (id)_albumPickerViewControllerWithAssets:(id)arg1;	// IMP=0x00000000001be2b5
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001be222

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
