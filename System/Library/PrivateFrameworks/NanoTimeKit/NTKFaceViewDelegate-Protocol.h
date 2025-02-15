//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKit/NSObject-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString, NTKComplication, NTKComplicationController, NTKEditOption, NTKFaceColorPalette, NTKFaceView, UIViewController;

@protocol NTKFaceViewDelegate <NSObject>
- (NSString *)faceAnalyticsIdentifier;
- (void)faceViewDidUpdateCustomData:(id)arg1 forKey:(NSString *)arg2;
- (id)faceViewDidRequestCustomDataForKey:(NSString *)arg1;
- (NTKFaceColorPalette *)faceViewWantsFaceColorPalette;
- (NSArray *)faceViewAllVisibleComplicationsForCurrentConfiguration;
- (NSArray *)faceViewComplicationSlotsHiddenByEditOption:(NTKEditOption *)arg1;
- (NSDictionary *)faceViewEditOptionsThatHideEditModes;
- (NTKEditOption *)faceViewEditOptionThatHidesAllComplications;
- (NSArray *)faceViewComplicationSlots;
- (NTKComplicationController *)faceViewComplicationControllerForSlot:(NSString *)arg1;
- (NTKComplication *)faceViewComplicationForSlot:(NSString *)arg1;
- (NSString *)faceViewComplicationAppIdentifierForSlot:(NSString *)arg1;
- (_Bool)faceViewShouldIgnoreSnapshotImages;
- (_Bool)faceView:(NTKFaceView *)arg1 wantsToDismissPresentedViewControllerAnimated:(_Bool)arg2;
- (void)faceViewWantsToPresentViewController:(UIViewController *)arg1;
- (void)faceViewRequestedLaunchFromRect:(struct CGRect)arg1;
- (void)faceViewUpdatedResourceDirectory:(NSString *)arg1 wantsToTransferOwnership:(_Bool)arg2;
- (_Bool)faceViewComplicationIsEmptyForSlot:(NSString *)arg1;
- (void)faceViewDidHideOrShowComplicationSlot;
- (void)faceViewWantsUnadornedSnapshotViewRemoved;
- (void)faceViewDidReloadSnapshotContentViews;
- (void)faceViewWillUnloadSnapshotContentViews;
- (void)faceViewWillExitTimeTravel;
- (void)faceViewDidScrubToDate:(NSDate *)arg1 forced:(_Bool)arg2;
- (void)faceViewWillEnterTimeTravel;
- (void)faceViewDidChangeStatusBarOverrideColor:(_Bool)arg1;
- (void)faceViewDidChangePaddingForStatusBar;
- (void)faceViewDidChangeWantsStatusBarIconShadow;
- (void)faceViewWantsStatusBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)faceViewWantsCustomKeylineFramesReloadedForEditMode:(long long)arg1;
- (void)faceViewWantsComplicationKeylineFramesReloaded;
@end

