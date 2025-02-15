//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKTableViewController.h>

@class HKElectrocardiogram, HRElectrocardiogramReportGenerator, NSMutableArray, WDElectrocardiogramReportDataSource;
@protocol HKDataMetadataViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WDElectrocardiogramDataMetadataViewController : HKTableViewController
{
    _Bool _firstViewDidLayoutSubviews;	// 8 = 0x8
    _Bool _actionsEnabled;	// 9 = 0x9
    HKElectrocardiogram *_sample;	// 16 = 0x10
    long long _activeAlgorithmVersion;	// 24 = 0x18
    id <HKDataMetadataViewControllerDelegate> _delegate;	// 32 = 0x20
    NSMutableArray *_sections;	// 40 = 0x28
    WDElectrocardiogramReportDataSource *_reportDataSource;	// 48 = 0x30
    HRElectrocardiogramReportGenerator *_reportGenerator;	// 56 = 0x38
    long long _mode;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000016d60
@property(nonatomic) _Bool actionsEnabled; // @synthesize actionsEnabled=_actionsEnabled;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) HRElectrocardiogramReportGenerator *reportGenerator; // @synthesize reportGenerator=_reportGenerator;
@property(retain, nonatomic) WDElectrocardiogramReportDataSource *reportDataSource; // @synthesize reportDataSource=_reportDataSource;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <HKDataMetadataViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long activeAlgorithmVersion; // @synthesize activeAlgorithmVersion=_activeAlgorithmVersion;
@property(nonatomic) _Bool firstViewDidLayoutSubviews; // @synthesize firstViewDidLayoutSubviews=_firstViewDidLayoutSubviews;
@property(retain, nonatomic) HKElectrocardiogram *sample; // @synthesize sample=_sample;
- (void)viewControllerDidLeaveAdaptiveModal;	// IMP=0x0000000000016bfd
- (void)viewControllerWillEnterAdaptiveModal;	// IMP=0x0000000000016a3a
- (id)featureVersionFromUpdateVersion:(id)arg1;	// IMP=0x0000000000016991
- (long long)sampleAlgorithmVersion;	// IMP=0x000000000001691e
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000016846
- (void)deleteSampleTriggeredBySection:(id)arg1;	// IMP=0x0000000000016640
- (void)presentPDFViewController;	// IMP=0x0000000000016428
- (void)shareButtonTapped:(id)arg1;	// IMP=0x0000000000016180
- (void)electrocardiogramMetadataViewDidSelectShareRow:(id)arg1;	// IMP=0x00000000000160f8
- (_Bool)electrocardiogramMetadataViewShouldShowShareRow:(id)arg1;	// IMP=0x00000000000160f0
- (id)electrocardiogramMetadataView:(id)arg1 regulatedBodyTextForSample:(id)arg2;	// IMP=0x000000000001604f
- (void)electrocardiogramMetadataViewDidTapDetailButton:(id)arg1;	// IMP=0x0000000000015f39
- (id)accessibilityIdentifier;	// IMP=0x0000000000015ee2
- (void)deletionSectionDidSelectRow:(id)arg1;	// IMP=0x0000000000015c1f
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000015b3c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000015a47
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000001596c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000158f8
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000000015878
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000000157f8
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000157b4
- (id)_electrocardiogramMetadataContainerView;	// IMP=0x000000000001562a
- (void)_reloadElectrocardiogramMetadataTableHeaderView;	// IMP=0x0000000000015372
- (void)_loadSections;	// IMP=0x0000000000014bf8
- (_Bool)_addSectionIfNonNull:(id)arg1;	// IMP=0x0000000000014b79
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000014b6e
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000014a8f
- (void)viewDidLoad;	// IMP=0x00000000000147e1
- (id)identifierBundle;	// IMP=0x00000000000147bc
- (void)_localeOrDisplayTypeChange:(id)arg1;	// IMP=0x000000000001476f
- (long long)_fetchActiveAlgorithmVersionWithHealthStore:(id)arg1;	// IMP=0x00000000000146ac
- (void)dealloc;	// IMP=0x0000000000014637
- (id)initWithSample:(id)arg1 delegate:(id)arg2 mode:(long long)arg3 activeAlgorithmVersion:(id)arg4;	// IMP=0x0000000000014325

@end

