//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKSpokenLanguagesViewControllerDelegate-Protocol.h>

@class HKMedicalIDEditorLanguageCell, HKSpokenLanguage, NSArray, _HKMedicalIDMultilineStringCell;
@protocol HKEmergencyCardPrimaryLanguageUpdateDelegate;

__attribute__((visibility("hidden")))
@interface HKEmergencyCardPrimaryLanguageTableItem <HKSpokenLanguagesViewControllerDelegate>
{
    HKMedicalIDEditorLanguageCell *_editableCell;	// 8 = 0x8
    _HKMedicalIDMultilineStringCell *_displayCell;	// 16 = 0x10
    _Bool _isEditing;	// 24 = 0x18
    NSArray *_mostLikelyLanguages;	// 32 = 0x20
    NSArray *_allSpokenLanguages;	// 40 = 0x28
    HKSpokenLanguage *_currentLanguage;	// 48 = 0x30
    id <HKEmergencyCardPrimaryLanguageUpdateDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000036254c
@property(nonatomic) __weak id <HKEmergencyCardPrimaryLanguageUpdateDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didCancelLanguageSelection;	// IMP=0x00000000003624b2
- (void)didSelectCellWithLanguage:(id)arg1;	// IMP=0x00000000003623e8
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;	// IMP=0x00000000003623b6
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;	// IMP=0x000000000036234c
- (long long)editingStyleForRowAtIndex:(long long)arg1;	// IMP=0x00000000003622d4
- (_Bool)canEditRowAtIndex:(long long)arg1;	// IMP=0x00000000003622c2
- (void)presentSpokenLanguageController;	// IMP=0x00000000003621df
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;	// IMP=0x00000000003621d9
- (_Bool)shouldHighlightRowAtIndex:(long long)arg1;	// IMP=0x000000000036219e
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;	// IMP=0x000000000036211c
- (id)attributedStringForCurrentLanguage;	// IMP=0x0000000000361e94
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;	// IMP=0x0000000000361c1d
- (void)setCurrentLanguage:(_Bool)arg1;	// IMP=0x0000000000361973
- (id)_createEditableCell;	// IMP=0x00000000003617fc
- (id)initInEditMode:(_Bool)arg1;	// IMP=0x0000000000361549
- (id)title;	// IMP=0x00000000003614d6
- (_Bool)hasPresentableData;	// IMP=0x0000000000361473

@end
