//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIScrollView.h>

@class NSArray, PUTopPeopleWallpaperSuggesterFilteringContext, UISwitch, UITextField;

__attribute__((visibility("hidden")))
@interface PUTopPeopleWallpaperSuggesterDebugSettingsFilteringSettingsView : UIScrollView
{
    PUTopPeopleWallpaperSuggesterFilteringContext *_filteringContext;	// 8 = 0x8
    NSArray *_persons;	// 16 = 0x10
    NSArray *_highlights;	// 24 = 0x18
    UITextField *_normalizedDeviationForVeryImportantPersonsTextField;	// 32 = 0x20
    UITextField *_normalizedDeviationForImportantPersonsTextField;	// 40 = 0x28
    UISwitch *_favoritePersonsAreVIPsCheckBox;	// 48 = 0x30
    UITextField *_minimumNumberOfCandidatesForEligiblePersonTextField;	// 56 = 0x38
    UITextField *_timeIntervalForCandidateDedupingTextField;	// 64 = 0x40
    UISwitch *_requiresSmileCheckBox;	// 72 = 0x48
    UISwitch *_requiresNoBlinkCheckBox;	// 80 = 0x50
    UITextField *_minimumFaceQualityTextField;	// 88 = 0x58
    UITextField *_minimumFaceSizeTextField;	// 96 = 0x60
    UITextField *_maximumFaceSizeTextField;	// 104 = 0x68
    UITextField *_maximumFaceRollTextField;	// 112 = 0x70
    UITextField *_minimumWallpaperScoreTextField;	// 120 = 0x78
    UITextField *_minimumCropScoreTextField;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000016e3b6
@property(readonly) UITextField *minimumCropScoreTextField; // @synthesize minimumCropScoreTextField=_minimumCropScoreTextField;
@property(readonly) UITextField *minimumWallpaperScoreTextField; // @synthesize minimumWallpaperScoreTextField=_minimumWallpaperScoreTextField;
@property(readonly) UITextField *maximumFaceRollTextField; // @synthesize maximumFaceRollTextField=_maximumFaceRollTextField;
@property(readonly) UITextField *maximumFaceSizeTextField; // @synthesize maximumFaceSizeTextField=_maximumFaceSizeTextField;
@property(readonly) UITextField *minimumFaceSizeTextField; // @synthesize minimumFaceSizeTextField=_minimumFaceSizeTextField;
@property(readonly) UITextField *minimumFaceQualityTextField; // @synthesize minimumFaceQualityTextField=_minimumFaceQualityTextField;
@property(readonly) UISwitch *requiresNoBlinkCheckBox; // @synthesize requiresNoBlinkCheckBox=_requiresNoBlinkCheckBox;
@property(readonly) UISwitch *requiresSmileCheckBox; // @synthesize requiresSmileCheckBox=_requiresSmileCheckBox;
@property(readonly) UITextField *timeIntervalForCandidateDedupingTextField; // @synthesize timeIntervalForCandidateDedupingTextField=_timeIntervalForCandidateDedupingTextField;
@property(readonly) UITextField *minimumNumberOfCandidatesForEligiblePersonTextField; // @synthesize minimumNumberOfCandidatesForEligiblePersonTextField=_minimumNumberOfCandidatesForEligiblePersonTextField;
@property(readonly) UISwitch *favoritePersonsAreVIPsCheckBox; // @synthesize favoritePersonsAreVIPsCheckBox=_favoritePersonsAreVIPsCheckBox;
@property(readonly) UITextField *normalizedDeviationForImportantPersonsTextField; // @synthesize normalizedDeviationForImportantPersonsTextField=_normalizedDeviationForImportantPersonsTextField;
@property(readonly) UITextField *normalizedDeviationForVeryImportantPersonsTextField; // @synthesize normalizedDeviationForVeryImportantPersonsTextField=_normalizedDeviationForVeryImportantPersonsTextField;
- (void)minimumCropScoreChanged:(id)arg1;	// IMP=0x000000000016e237
- (void)minimumWallpaperScoreChanged:(id)arg1;	// IMP=0x000000000016e1d6
- (void)maximumFaceRollChanged:(id)arg1;	// IMP=0x000000000016e175
- (void)maximumFaceSizeChanged:(id)arg1;	// IMP=0x000000000016e114
- (void)minimumFaceSizeChanged:(id)arg1;	// IMP=0x000000000016e0b3
- (void)minimumFaceQualityChanged:(id)arg1;	// IMP=0x000000000016e052
- (void)requiresNoBlinkChanged:(id)arg1;	// IMP=0x000000000016e016
- (void)requiresSmileChanged:(id)arg1;	// IMP=0x000000000016dfda
- (void)timeIntervalForCandidateDedupingChanged:(id)arg1;	// IMP=0x000000000016df79
- (void)minimumNumberOfCandidatesForEligiblePersonChanged:(id)arg1;	// IMP=0x000000000016df15
- (void)favoritePersonsAreVIPsChanged:(id)arg1;	// IMP=0x000000000016ded9
- (void)normalizedDeviationForImportantPersonsChanged:(id)arg1;	// IMP=0x000000000016de78
- (void)normalizedDeviationForVeryImportantPersonsChanged:(id)arg1;	// IMP=0x000000000016de17
- (id)highlights;	// IMP=0x000000000016da51
- (id)aspectRatios;	// IMP=0x000000000016da44
- (long long)indexOfRowWithPersonLocalIdentifiers:(id)arg1;	// IMP=0x000000000016d7cc
- (id)initWithFilteringContext:(id)arg1;	// IMP=0x000000000016caf5

@end
